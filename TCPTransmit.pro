
QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
TARGET = TCPTransmit
TEMPLATE = app

#ARM-linux
my-linux-arm-qt || linux-arm-gnueabi-g++ {

    MOC_DIR             = temp/moc_arm_linux
    RCC_DIR             = temp/rcc_arm_linux
    #UI_DIR              = ui
    OBJECTS_DIR         = temp/obj_arm_linux
    DESTDIR             = bin_arm_linux/

    src_file = $$DESTDIR/*
    #dst_file = $$OUT_PWD/bin/
    dst_file = /home/n1/Work/nfs/am335x/
    QMAKE_POST_LINK += cp -r -f $$src_file $$dst_file

    message("build for ARM-linux")
}

#x86-linux
linux-g++ || linux-clang {

    MOC_DIR             = temp/moc_x86_linux
    RCC_DIR             = temp/rcc_x86_linux
    #UI_DIR              = ui
    OBJECTS_DIR         = temp/obj_x86_linux
    DESTDIR             = bin_x86_linux/

    #src_file = $$DESTDIR/*
    #dst_file = $$OUT_PWD/bin/
    #dst_file = /home/n1/Work/nfs/
    #QMAKE_POST_LINK += cp -r -f $$src_file $$dst_file

    message("build for x86-linux")
}

#x86-win32
win32 {
    MOC_DIR             = temp/moc_win/
    RCC_DIR             = temp/rcc_win/
    #UI_DIR              = ui
    OBJECTS_DIR         = temp/obj_win/
    DESTDIR             = bin_win/

    #src_file ~= s,/,\\,g
    #dst_file ~= s,/,\\,g
    #QMAKE_POST_LINK += copy $$src_file $$dst_file

    message("build for x86-win32")
}

SOURCES += main.cpp\   
    frmclient.cpp \
    tcptransmitclient.cpp

HEADERS  += \
    frmclient.h \
    tcptransmitclient.h

FORMS    += \
    frmclient.ui

INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/usercontrol



win32:RC_FILE   = other/main.rc
