#include "frmclient.h"

#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QDirModel>
#include <QItemSelectionModel>

#include "ui_frmclient.h"

frmClient::frmClient(QWidget *parent)
    : QDialog(parent),
      ui(new Ui::frmClient)
{
    ui->setupUi(this);

    this->setWindowTitle(ui->lab_Title->text());

    this->InitForm();

    client = new TCPTransmitClient(this);
    connect(client, &QTcpSocket::connected, this, &frmClient::updateConnectStatus);

    connect(client, &TCPTransmitClient::receiveFinishedSignal, this, &frmClient::transmitFinshed);
    connect(client, &TCPTransmitClient::receiveMessageSignal, this, &frmClient::updateTransmitStatus);
    connect(client, &TCPTransmitClient::receiveFileNameSignal, this, &frmClient::updateReceiveFileName);
    connect(client, &TCPTransmitClient::receiveFileSizeSignal, this, &frmClient::setTransmitProgress);
    connect(client, &TCPTransmitClient::receiveDataSignal, this, &frmClient::updateTransmitProgress);

    connect(client, &TCPTransmitClient::sendFileSizeSignal, this, &frmClient::setTransmitProgress);
    connect(client, &TCPTransmitClient::bytesWritten, this, &frmClient::updateTransmitProgress);
    connect(client, &TCPTransmitClient::sendMessageSignal, this, &frmClient::updateTransmitStatus);
    connect(client, &TCPTransmitClient::sendFinishedSignal, this, &frmClient::transmitFinshed);

    connect(client, QOverload< QAbstractSocket::SocketError >::of(&QAbstractSocket::error), this, &frmClient::socketError);

    connect(ui->btnExit, &QPushButton::clicked, this, &frmClient::close);
}

frmClient::~frmClient()
{
    delete ui;

    client->deleteLater();
}

void frmClient::InitForm()
{
    transmitBytes       = 0;
    transmitBlockNumber = 0;
    transmitMaxBytes    = 0;

    ui->txtSendFile->setText(tr("请选择文件"));
    ui->txtReceiveFile->setText(tr("等待接收文件"));
    ui->txtTransmitStatus->setText((tr("等待连接")));
    ui->txtTransmitStatus_1->setText((tr("尚未连接")));

    ui->pbTransmitProgress->setRange(0, 100);
    ui->pbTransmitProgress->setValue(0);
    ui->btnSelect->setEnabled(false);
    ui->btnSend->setEnabled(false);
}

void frmClient::on_btnSelect_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("选择文件"), QCoreApplication::applicationDirPath(), tr("所有文件 (*.*)"));

    file.setFileName(filePath);

    ui->txtSendFile->setText(file.fileName());

    ui->pbTransmitProgress->setRange(0, 100);
    ui->pbTransmitProgress->setValue(0);
    ui->btnSend->setEnabled(true);
}

void frmClient::on_btnSend_clicked()
{
    transmitBytes       = 0;
    transmitBlockNumber = 0;
    transmitMaxBytes    = 0;

    client->SendFile(file.fileName());
}

void frmClient::updateTransmitProgress(qint64 size)
{
    transmitBlockNumber++;
    transmitBytes += size;
    ui->pbTransmitProgress->setValue(transmitBytes);
    QString msg = tr("已传输数据包:%1个 当前数据包大小:%2字节 已传输字节:%3 总共字节:%4")
                      .arg(transmitBlockNumber)
                      .arg(size)
                      .arg(transmitBytes)
                      .arg(transmitMaxBytes);
    ui->txtTransmitStatus->setText(msg);
    qApp->processEvents();    //及时刷新界面
}

void frmClient::updateTransmitStatus(QString msg)
{
    qDebug() << tr("客户端Client:") << msg;
    ui->txtTransmitStatus_1->setText(msg);
}

void frmClient::setTransmitProgress(qint64 size)
{
    transmitBytes       = 0;
    transmitBlockNumber = 0;
    transmitMaxBytes    = size;
    ui->pbTransmitProgress->setRange(0, size - 1);
    ui->pbTransmitProgress->setValue(0);
}

void frmClient::transmitFinshed()
{
    ui->pbTransmitProgress->setRange(0, 100);
    ui->pbTransmitProgress->setValue(100);
    ui->txtTransmitStatus_1->setText(tr("文件传输完成"));
}

void frmClient::on_btnConnect_clicked()
{
    client->connectToHost(ui->txtServerIP->text(), ui->txtServerPort->text().toInt());    //App::ServerIP, App::ServerPort

    ui->btnConnect->setEnabled(false);
    ui->btnDisconnect->setEnabled(true);
    ui->pbTransmitProgress->setValue(0);
    ui->btnSelect->setEnabled(true);
}

void frmClient::on_btnDisconnect_clicked()
{
    client->disconnectFromHost();
    client->close();

    ui->txtTransmitStatus_1->setText(tr("Socket:%1[%2]").arg(client->errorString()));
    if(file.isOpen())
    {
        file.close();
    }
    if(!file.fileName().isEmpty())
    {
        file.remove(file.fileName());
    }

    ui->btnConnect->setEnabled(true);
    ui->btnDisconnect->setEnabled(false);
    ui->btnSelect->setEnabled(false);
    ui->btnSend->setEnabled(false);
}

void frmClient::updateReceiveFileName(QString name)
{
    ui->pbTransmitProgress->setRange(0, 100);
    ui->pbTransmitProgress->setValue(100);
    ui->txtReceiveFile->setText(name);
}

void frmClient::updateConnectStatus()
{
    ui->txtTransmitStatus->setText(tr("与服务端[%1:%2]成功连接").arg(ui->txtServerIP->text()).arg(ui->txtServerPort->text().toInt()));
    ui->txtTransmitStatus_1->setText(tr("成功连接到服务端[%1:%2]").arg(ui->txtServerIP->text()).arg(ui->txtServerPort->text().toInt()));
}

void frmClient::socketError(QAbstractSocket::SocketError)
{
    ui->btnConnect->setEnabled(true);
    ui->btnDisconnect->setEnabled(false);
    updateTransmitStatus(tr("发生错误:%1").arg(client->errorString()));
    //QMessageBox::information(this, tr("提示"), tr("Socket错误:") + client->errorString());
}
