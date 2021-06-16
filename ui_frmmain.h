/********************************************************************************
** Form generated from reading UI file 'frmmain.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnMenu;
    QPushButton *btnMenu_Min;
    QPushButton *btnMenu_Max;
    QPushButton *btnMenu_Close;
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

    void setupUi(QDialog *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->resize(640, 480);
        frmMain->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(frmMain);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        widget_title = new QWidget(frmMain);
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
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QString::fromUtf8("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(30, 0));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        lab_Title->setStyleSheet(QString::fromUtf8(""));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QString::fromUtf8("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMenu = new QToolButton(widget_menu);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu->sizePolicy().hasHeightForWidth());
        btnMenu->setSizePolicy(sizePolicy3);
        btnMenu->setMinimumSize(QSize(35, 0));
        btnMenu->setMaximumSize(QSize(35, 16777215));
        btnMenu->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(btnMenu);

        btnMenu_Min = new QPushButton(widget_menu);
        btnMenu_Min->setObjectName(QString::fromUtf8("btnMenu_Min"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnMenu_Min->sizePolicy().hasHeightForWidth());
        btnMenu_Min->setSizePolicy(sizePolicy4);
        btnMenu_Min->setMinimumSize(QSize(35, 0));
        btnMenu_Min->setMaximumSize(QSize(35, 16777215));
        btnMenu_Min->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Min->setFocusPolicy(Qt::NoFocus);
        btnMenu_Min->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Min);

        btnMenu_Max = new QPushButton(widget_menu);
        btnMenu_Max->setObjectName(QString::fromUtf8("btnMenu_Max"));
        sizePolicy3.setHeightForWidth(btnMenu_Max->sizePolicy().hasHeightForWidth());
        btnMenu_Max->setSizePolicy(sizePolicy3);
        btnMenu_Max->setMinimumSize(QSize(35, 0));
        btnMenu_Max->setMaximumSize(QSize(35, 16777215));
        btnMenu_Max->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Max->setFocusPolicy(Qt::NoFocus);
        btnMenu_Max->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Max);

        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(35, 0));
        btnMenu_Close->setMaximumSize(QSize(35, 16777215));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);


        verticalLayout->addWidget(widget_title);

        widget_main = new QWidget(frmMain);
        widget_main->setObjectName(QString::fromUtf8("widget_main"));
        widget_main->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(widget_main);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(widget_main);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy5);
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
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(btnSelect->sizePolicy().hasHeightForWidth());
        btnSelect->setSizePolicy(sizePolicy6);
        btnSelect->setMinimumSize(QSize(30, 0));

        horizontalLayout_3->addWidget(btnSelect);

        btnSend = new QPushButton(frame_2);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        sizePolicy6.setHeightForWidth(btnSend->sizePolicy().hasHeightForWidth());
        btnSend->setSizePolicy(sizePolicy6);
        btnSend->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(btnSend);


        formLayout->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_3);

        labSendStatus = new QLabel(frame_2);
        labSendStatus->setObjectName(QString::fromUtf8("labSendStatus"));

        formLayout->setWidget(13, QFormLayout::LabelRole, labSendStatus);

        txtTransmitStatus = new QLabel(frame_2);
        txtTransmitStatus->setObjectName(QString::fromUtf8("txtTransmitStatus"));
        sizePolicy2.setHeightForWidth(txtTransmitStatus->sizePolicy().hasHeightForWidth());
        txtTransmitStatus->setSizePolicy(sizePolicy2);

        formLayout->setWidget(13, QFormLayout::FieldRole, txtTransmitStatus);

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
        sizePolicy2.setHeightForWidth(txtSendFile->sizePolicy().hasHeightForWidth());
        txtSendFile->setSizePolicy(sizePolicy2);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtSendFile);

        txtReceiveFile = new QLabel(frame_2);
        txtReceiveFile->setObjectName(QString::fromUtf8("txtReceiveFile"));
        sizePolicy2.setHeightForWidth(txtReceiveFile->sizePolicy().hasHeightForWidth());
        txtReceiveFile->setSizePolicy(sizePolicy2);

        formLayout->setWidget(4, QFormLayout::FieldRole, txtReceiveFile);


        verticalLayout_2->addWidget(frame_2);

        verticalLayout_2->setStretch(1, 1);

        verticalLayout->addWidget(widget_main);


        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QDialog *frmMain)
    {
        lab_Ico->setText(QString());
        lab_Title->setText(QApplication::translate("frmMain", "Tcp\344\274\240\350\276\223\346\226\207\344\273\266\345\267\245\345\205\267", nullptr));
        btnMenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Min->setToolTip(QApplication::translate("frmMain", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_NO_TOOLTIP
        btnMenu_Min->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Max->setToolTip(QApplication::translate("frmMain", "\346\234\200\345\244\247\345\214\226", nullptr));
#endif // QT_NO_TOOLTIP
        btnMenu_Max->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("frmMain", "\345\205\263\351\227\255", nullptr));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        labServerIP->setText(QApplication::translate("frmMain", "\346\234\215\345\212\241\345\231\250IP:", nullptr));
        txtServerIP->setText(QApplication::translate("frmMain", "192.168.1.123", nullptr));
        labServerPort->setText(QApplication::translate("frmMain", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243:", nullptr));
        txtServerPort->setText(QApplication::translate("frmMain", "8888", nullptr));
        btnConnect->setText(QApplication::translate("frmMain", "\350\277\236\346\216\245", nullptr));
        btnDisconnect->setText(QApplication::translate("frmMain", "\346\226\255\345\274\200", nullptr));
        btnSelect->setText(QApplication::translate("frmMain", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        btnSend->setText(QApplication::translate("frmMain", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        labSendStatus->setText(QApplication::translate("frmMain", "\344\274\240\350\276\223\347\212\266\346\200\201:", nullptr));
        txtTransmitStatus->setText(QApplication::translate("frmMain", "txtTransmitStatus", nullptr));
        labSendFile->setText(QApplication::translate("frmMain", "\345\217\221\351\200\201\346\226\207\344\273\266:", nullptr));
        labReceiveFile->setText(QApplication::translate("frmMain", "\346\216\245\346\224\266\346\226\207\344\273\266:", nullptr));
        labelTransmitProgress->setText(QApplication::translate("frmMain", "\344\274\240\350\276\223\350\277\233\345\272\246:", nullptr));
        txtSendFile->setText(QApplication::translate("frmMain", "txtSendFile", nullptr));
        txtReceiveFile->setText(QApplication::translate("frmMain", "txtReceiveFile", nullptr));
        Q_UNUSED(frmMain);
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
