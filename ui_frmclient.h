/********************************************************************************
** Form generated from reading UI file 'frmclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMCLIENT_H
#define UI_FRMCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmClient
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_main;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labServerIP;
    QLineEdit *txtServerIP;
    QLabel *labServerPort;
    QLineEdit *txtServerPort;
    QPushButton *btnConnect;
    QPushButton *btnDisconnect;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnSelect;
    QPushButton *btnSend;
    QLabel *labSendStatus;
    QLabel *txtTransmitStatus;
    QLabel *labSendFile;
    QLabel *labReceiveFile;
    QProgressBar *pbTransmitProgress;
    QLabel *labelTransmitProgress;
    QLabel *txtSendFile;
    QLabel *txtReceiveFile;
    QLabel *txtTransmitStatus_1;
    QPushButton *btnExit;

    void setupUi(QDialog *frmClient)
    {
        if (frmClient->objectName().isEmpty())
            frmClient->setObjectName(QString::fromUtf8("frmClient"));
        frmClient->resize(640, 480);
        frmClient->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(frmClient);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        widget_title = new QWidget(frmClient);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(0, 30));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy1);
        lab_Title->setStyleSheet(QString::fromUtf8(""));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QString::fromUtf8("widget_menu"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy2);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(widget_menu);


        verticalLayout->addWidget(widget_title);

        widget_main = new QWidget(frmClient);
        widget_main->setObjectName(QString::fromUtf8("widget_main"));
        widget_main->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget_main);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(widget_main);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labServerIP = new QLabel(frame);
        labServerIP->setObjectName(QString::fromUtf8("labServerIP"));

        horizontalLayout_4->addWidget(labServerIP);

        txtServerIP = new QLineEdit(frame);
        txtServerIP->setObjectName(QString::fromUtf8("txtServerIP"));

        horizontalLayout_4->addWidget(txtServerIP);

        labServerPort = new QLabel(frame);
        labServerPort->setObjectName(QString::fromUtf8("labServerPort"));

        horizontalLayout_4->addWidget(labServerPort);

        txtServerPort = new QLineEdit(frame);
        txtServerPort->setObjectName(QString::fromUtf8("txtServerPort"));

        horizontalLayout_4->addWidget(txtServerPort);

        btnConnect = new QPushButton(frame);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        horizontalLayout_4->addWidget(btnConnect);

        btnDisconnect = new QPushButton(frame);
        btnDisconnect->setObjectName(QString::fromUtf8("btnDisconnect"));

        horizontalLayout_4->addWidget(btnDisconnect);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(widget_main);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btnSelect = new QPushButton(frame_2);
        btnSelect->setObjectName(QString::fromUtf8("btnSelect"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnSelect->sizePolicy().hasHeightForWidth());
        btnSelect->setSizePolicy(sizePolicy4);
        btnSelect->setMinimumSize(QSize(30, 0));

        horizontalLayout_3->addWidget(btnSelect);

        btnSend = new QPushButton(frame_2);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        sizePolicy4.setHeightForWidth(btnSend->sizePolicy().hasHeightForWidth());
        btnSend->setSizePolicy(sizePolicy4);
        btnSend->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(btnSend);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_3);

        labSendStatus = new QLabel(frame_2);
        labSendStatus->setObjectName(QString::fromUtf8("labSendStatus"));

        formLayout->setWidget(15, QFormLayout::LabelRole, labSendStatus);

        txtTransmitStatus = new QLabel(frame_2);
        txtTransmitStatus->setObjectName(QString::fromUtf8("txtTransmitStatus"));
        sizePolicy1.setHeightForWidth(txtTransmitStatus->sizePolicy().hasHeightForWidth());
        txtTransmitStatus->setSizePolicy(sizePolicy1);

        formLayout->setWidget(15, QFormLayout::FieldRole, txtTransmitStatus);

        labSendFile = new QLabel(frame_2);
        labSendFile->setObjectName(QString::fromUtf8("labSendFile"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labSendFile);

        labReceiveFile = new QLabel(frame_2);
        labReceiveFile->setObjectName(QString::fromUtf8("labReceiveFile"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labReceiveFile);

        pbTransmitProgress = new QProgressBar(frame_2);
        pbTransmitProgress->setObjectName(QString::fromUtf8("pbTransmitProgress"));
        pbTransmitProgress->setMaximumSize(QSize(16777215, 18));
        pbTransmitProgress->setValue(0);

        formLayout->setWidget(11, QFormLayout::FieldRole, pbTransmitProgress);

        labelTransmitProgress = new QLabel(frame_2);
        labelTransmitProgress->setObjectName(QString::fromUtf8("labelTransmitProgress"));

        formLayout->setWidget(11, QFormLayout::LabelRole, labelTransmitProgress);

        txtSendFile = new QLabel(frame_2);
        txtSendFile->setObjectName(QString::fromUtf8("txtSendFile"));
        sizePolicy1.setHeightForWidth(txtSendFile->sizePolicy().hasHeightForWidth());
        txtSendFile->setSizePolicy(sizePolicy1);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtSendFile);

        txtReceiveFile = new QLabel(frame_2);
        txtReceiveFile->setObjectName(QString::fromUtf8("txtReceiveFile"));
        sizePolicy1.setHeightForWidth(txtReceiveFile->sizePolicy().hasHeightForWidth());
        txtReceiveFile->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, txtReceiveFile);

        txtTransmitStatus_1 = new QLabel(frame_2);
        txtTransmitStatus_1->setObjectName(QString::fromUtf8("txtTransmitStatus_1"));
        sizePolicy1.setHeightForWidth(txtTransmitStatus_1->sizePolicy().hasHeightForWidth());
        txtTransmitStatus_1->setSizePolicy(sizePolicy1);

        formLayout->setWidget(16, QFormLayout::FieldRole, txtTransmitStatus_1);


        verticalLayout_2->addWidget(frame_2);

        btnExit = new QPushButton(widget_main);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        verticalLayout_2->addWidget(btnExit);

        verticalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(widget_main);


        retranslateUi(frmClient);

        QMetaObject::connectSlotsByName(frmClient);
    } // setupUi

    void retranslateUi(QDialog *frmClient)
    {
        lab_Title->setText(QApplication::translate("frmClient", "TCP\346\226\207\344\273\266\344\274\240\350\276\223", nullptr));
        labServerIP->setText(QApplication::translate("frmClient", "\346\234\215\345\212\241\345\231\250IP:", nullptr));
        txtServerIP->setText(QApplication::translate("frmClient", "192.168.1.123", nullptr));
        labServerPort->setText(QApplication::translate("frmClient", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243:", nullptr));
        txtServerPort->setText(QApplication::translate("frmClient", "8888", nullptr));
        btnConnect->setText(QApplication::translate("frmClient", "\350\277\236\346\216\245", nullptr));
        btnDisconnect->setText(QApplication::translate("frmClient", "\346\226\255\345\274\200", nullptr));
        btnSelect->setText(QApplication::translate("frmClient", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        btnSend->setText(QApplication::translate("frmClient", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        labSendStatus->setText(QApplication::translate("frmClient", "\344\274\240\350\276\223\347\212\266\346\200\201:", nullptr));
        txtTransmitStatus->setText(QApplication::translate("frmClient", "txtTransmitStatus", nullptr));
        labSendFile->setText(QApplication::translate("frmClient", "\345\217\221\351\200\201\346\226\207\344\273\266:", nullptr));
        labReceiveFile->setText(QApplication::translate("frmClient", "\346\216\245\346\224\266\346\226\207\344\273\266:", nullptr));
        labelTransmitProgress->setText(QApplication::translate("frmClient", "\344\274\240\350\276\223\350\277\233\345\272\246:", nullptr));
        txtSendFile->setText(QApplication::translate("frmClient", "txtSendFile", nullptr));
        txtReceiveFile->setText(QApplication::translate("frmClient", "txtReceiveFile", nullptr));
        txtTransmitStatus_1->setText(QApplication::translate("frmClient", "txtTransmitStatus_1", nullptr));
        btnExit->setText(QApplication::translate("frmClient", "\351\200\200\345\207\272", nullptr));
        Q_UNUSED(frmClient);
    } // retranslateUi

};

namespace Ui {
    class frmClient: public Ui_frmClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMCLIENT_H
