/****************************************************************************
** Meta object code from reading C++ file 'frmmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmMain_t {
    QByteArrayData data[23];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmMain_t qt_meta_stringdata_frmMain = {
    {
QT_MOC_LITERAL(0, 0, 7), // "frmMain"
QT_MOC_LITERAL(1, 8, 9), // "InitStyle"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "ChangeStyle"
QT_MOC_LITERAL(4, 31, 8), // "InitForm"
QT_MOC_LITERAL(5, 40, 10), // "InitConfig"
QT_MOC_LITERAL(6, 51, 10), // "SaveConfig"
QT_MOC_LITERAL(7, 62, 22), // "on_btnMenu_Max_clicked"
QT_MOC_LITERAL(8, 85, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(9, 104, 20), // "on_btnSelect_clicked"
QT_MOC_LITERAL(10, 125, 21), // "on_btnConnect_clicked"
QT_MOC_LITERAL(11, 147, 24), // "on_btnDisconnect_clicked"
QT_MOC_LITERAL(12, 172, 22), // "updateTransmitProgress"
QT_MOC_LITERAL(13, 195, 4), // "size"
QT_MOC_LITERAL(14, 200, 20), // "updateTransmitStatus"
QT_MOC_LITERAL(15, 221, 3), // "msg"
QT_MOC_LITERAL(16, 225, 19), // "setTransmitProgress"
QT_MOC_LITERAL(17, 245, 15), // "transmitFinshed"
QT_MOC_LITERAL(18, 261, 21), // "updateReceiveFileName"
QT_MOC_LITERAL(19, 283, 4), // "name"
QT_MOC_LITERAL(20, 288, 19), // "updateConnectStatus"
QT_MOC_LITERAL(21, 308, 11), // "socketError"
QT_MOC_LITERAL(22, 320, 28) // "QAbstractSocket::SocketError"

    },
    "frmMain\0InitStyle\0\0ChangeStyle\0InitForm\0"
    "InitConfig\0SaveConfig\0on_btnMenu_Max_clicked\0"
    "on_btnSend_clicked\0on_btnSelect_clicked\0"
    "on_btnConnect_clicked\0on_btnDisconnect_clicked\0"
    "updateTransmitProgress\0size\0"
    "updateTransmitStatus\0msg\0setTransmitProgress\0"
    "transmitFinshed\0updateReceiveFileName\0"
    "name\0updateConnectStatus\0socketError\0"
    "QAbstractSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmMain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    1,  109,    2, 0x08 /* Private */,
      14,    1,  112,    2, 0x08 /* Private */,
      16,    1,  115,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    1,  119,    2, 0x08 /* Private */,
      20,    0,  122,    2, 0x08 /* Private */,
      21,    1,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,    2,

       0        // eod
};

void frmMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InitStyle(); break;
        case 1: _t->ChangeStyle(); break;
        case 2: _t->InitForm(); break;
        case 3: _t->InitConfig(); break;
        case 4: _t->SaveConfig(); break;
        case 5: _t->on_btnMenu_Max_clicked(); break;
        case 6: _t->on_btnSend_clicked(); break;
        case 7: _t->on_btnSelect_clicked(); break;
        case 8: _t->on_btnConnect_clicked(); break;
        case 9: _t->on_btnDisconnect_clicked(); break;
        case 10: _t->updateTransmitProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->updateTransmitStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setTransmitProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 13: _t->transmitFinshed(); break;
        case 14: _t->updateReceiveFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->updateConnectStatus(); break;
        case 16: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmMain::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_frmMain.data,
    qt_meta_data_frmMain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmMain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmMain.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int frmMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
