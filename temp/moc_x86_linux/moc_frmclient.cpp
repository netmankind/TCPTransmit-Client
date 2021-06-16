/****************************************************************************
** Meta object code from reading C++ file 'frmclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmClient_t {
    QByteArrayData data[18];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmClient_t qt_meta_stringdata_frmClient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "frmClient"
QT_MOC_LITERAL(1, 10, 8), // "InitForm"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 18), // "on_btnSend_clicked"
QT_MOC_LITERAL(4, 39, 20), // "on_btnSelect_clicked"
QT_MOC_LITERAL(5, 60, 21), // "on_btnConnect_clicked"
QT_MOC_LITERAL(6, 82, 24), // "on_btnDisconnect_clicked"
QT_MOC_LITERAL(7, 107, 22), // "updateTransmitProgress"
QT_MOC_LITERAL(8, 130, 4), // "size"
QT_MOC_LITERAL(9, 135, 20), // "updateTransmitStatus"
QT_MOC_LITERAL(10, 156, 3), // "msg"
QT_MOC_LITERAL(11, 160, 19), // "setTransmitProgress"
QT_MOC_LITERAL(12, 180, 15), // "transmitFinshed"
QT_MOC_LITERAL(13, 196, 21), // "updateReceiveFileName"
QT_MOC_LITERAL(14, 218, 4), // "name"
QT_MOC_LITERAL(15, 223, 19), // "updateConnectStatus"
QT_MOC_LITERAL(16, 243, 11), // "socketError"
QT_MOC_LITERAL(17, 255, 28) // "QAbstractSocket::SocketError"

    },
    "frmClient\0InitForm\0\0on_btnSend_clicked\0"
    "on_btnSelect_clicked\0on_btnConnect_clicked\0"
    "on_btnDisconnect_clicked\0"
    "updateTransmitProgress\0size\0"
    "updateTransmitStatus\0msg\0setTransmitProgress\0"
    "transmitFinshed\0updateReceiveFileName\0"
    "name\0updateConnectStatus\0socketError\0"
    "QAbstractSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       9,    1,   82,    2, 0x08 /* Private */,
      11,    1,   85,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    1,   89,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,

       0        // eod
};

void frmClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InitForm(); break;
        case 1: _t->on_btnSend_clicked(); break;
        case 2: _t->on_btnSelect_clicked(); break;
        case 3: _t->on_btnConnect_clicked(); break;
        case 4: _t->on_btnDisconnect_clicked(); break;
        case 5: _t->updateTransmitProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->updateTransmitStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setTransmitProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->transmitFinshed(); break;
        case 9: _t->updateReceiveFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->updateConnectStatus(); break;
        case 11: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmClient::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_frmClient.data,
    qt_meta_data_frmClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmClient.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int frmClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
