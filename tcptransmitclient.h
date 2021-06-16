#ifndef TCPTRANSMITCLIENT_H
#define TCPTRANSMITCLIENT_H

#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QWidget>
#else
#include <QtGui/QWidget>
#endif

#include <QFile>
#include <QFileInfo>
#include <QMessageBox>
#include <QTcpSocket>
#include <QThread>
#include <QtCore>
#include <QtNetwork>

class TCPTransmitClient : public QTcpSocket
{
    Q_OBJECT
public:
    explicit TCPTransmitClient(QObject *parent = nullptr);
    ~TCPTransmitClient();

    void SendFile(QString fileName);
    void SendData(QString fileName);

signals:
    void connectedSignal(QString ip, quint16 port);
    void receiveFileNameSignal(QString name);
    void receiveFileSizeSignal(qint64 size);
    void receiveFinishedSignal();
    void receiveMessageSignal(QString msg);
    void receiveDataSignal(qint64 size);

    void sendFileSizeSignal(qint64 size);
    void sendMessageSignal(QString msg);
    void sendFinishedSignal();
    void bytesWrittenSignal(qint64 size);

private slots:
    void displaySocketError(QAbstractSocket::SocketError);

    void ReceiveData();
    void proccessData(QByteArray &array);

protected:
private:
    QFile file;
    QString fileName;

    qint64 blockSize;
    qint64 blockNumber;
};

#endif    // TCPTRANSMITCLIENT_H
