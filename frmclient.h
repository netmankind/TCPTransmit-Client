#ifndef FRMCLIENT_H
#define FRMCLIENT_H

#include <QDialog>
#include <QFileDialog>

#include "tcptransmitclient.h"

namespace Ui
{
    class frmClient;
}

class frmClient : public QDialog
{
    Q_OBJECT

public:
    explicit frmClient(QWidget *parent = nullptr);
    ~frmClient();

protected:
private:
    Ui::frmClient *ui;

    int transmitBytes;
    qint64 transmitBlockNumber;
    qint64 transmitMaxBytes;

    TCPTransmitClient *client;

    QFile file;

private slots:
    void InitForm();

    void on_btnSend_clicked();
    void on_btnSelect_clicked();

    void on_btnConnect_clicked();
    void on_btnDisconnect_clicked();

    void updateTransmitProgress(qint64 size);
    void updateTransmitStatus(QString msg);
    void setTransmitProgress(qint64 size);
    void transmitFinshed();

    void updateReceiveFileName(QString name);
    void updateConnectStatus();

    void socketError(QAbstractSocket::SocketError);
};

#endif    // FRMCLIENT_H
