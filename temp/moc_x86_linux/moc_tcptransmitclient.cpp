/****************************************************************************
** Meta object code from reading C++ file 'tcptransmitclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tcptransmitclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcptransmitclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCPTransmitClient_t {
    QByteArrayData data[23];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPTransmitClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPTransmitClient_t qt_meta_stringdata_TCPTransmitClient = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TCPTransmitClient"
QT_MOC_LITERAL(1, 18, 15), // "connectedSignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 2), // "ip"
QT_MOC_LITERAL(4, 38, 4), // "port"
QT_MOC_LITERAL(5, 43, 21), // "receiveFileNameSignal"
QT_MOC_LITERAL(6, 65, 4), // "name"
QT_MOC_LITERAL(7, 70, 21), // "receiveFileSizeSignal"
QT_MOC_LITERAL(8, 92, 4), // "size"
QT_MOC_LITERAL(9, 97, 21), // "receiveFinishedSignal"
QT_MOC_LITERAL(10, 119, 20), // "receiveMessageSignal"
QT_MOC_LITERAL(11, 140, 3), // "msg"
QT_MOC_LITERAL(12, 144, 17), // "receiveDataSignal"
QT_MOC_LITERAL(13, 162, 18), // "sendFileSizeSignal"
QT_MOC_LITERAL(14, 181, 17), // "sendMessageSignal"
QT_MOC_LITERAL(15, 199, 18), // "sendFinishedSignal"
QT_MOC_LITERAL(16, 218, 18), // "bytesWrittenSignal"
QT_MOC_LITERAL(17, 237, 18), // "displaySocketError"
QT_MOC_LITERAL(18, 256, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(19, 285, 11), // "ReceiveData"
QT_MOC_LITERAL(20, 297, 12), // "proccessData"
QT_MOC_LITERAL(21, 310, 11), // "QByteArray&"
QT_MOC_LITERAL(22, 322, 5) // "array"

    },
    "TCPTransmitClient\0connectedSignal\0\0"
    "ip\0port\0receiveFileNameSignal\0name\0"
    "receiveFileSizeSignal\0size\0"
    "receiveFinishedSignal\0receiveMessageSignal\0"
    "msg\0receiveDataSignal\0sendFileSizeSignal\0"
    "sendMessageSignal\0sendFinishedSignal\0"
    "bytesWrittenSignal\0displaySocketError\0"
    "QAbstractSocket::SocketError\0ReceiveData\0"
    "proccessData\0QByteArray&\0array"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPTransmitClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    1,   84,    2, 0x06 /* Public */,
       7,    1,   87,    2, 0x06 /* Public */,
       9,    0,   90,    2, 0x06 /* Public */,
      10,    1,   91,    2, 0x06 /* Public */,
      12,    1,   94,    2, 0x06 /* Public */,
      13,    1,   97,    2, 0x06 /* Public */,
      14,    1,  100,    2, 0x06 /* Public */,
      15,    0,  103,    2, 0x06 /* Public */,
      16,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  107,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void TCPTransmitClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TCPTransmitClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectedSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 1: _t->receiveFileNameSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->receiveFileSizeSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->receiveFinishedSignal(); break;
        case 4: _t->receiveMessageSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveDataSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->sendFileSizeSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->sendMessageSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->sendFinishedSignal(); break;
        case 9: _t->bytesWrittenSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->displaySocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 11: _t->ReceiveData(); break;
        case 12: _t->proccessData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TCPTransmitClient::*)(QString , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::connectedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::receiveFileNameSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::receiveFileSizeSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::receiveFinishedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::receiveMessageSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::receiveDataSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::sendFileSizeSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::sendMessageSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::sendFinishedSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TCPTransmitClient::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransmitClient::bytesWrittenSignal)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TCPTransmitClient::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_TCPTransmitClient.data,
    qt_meta_data_TCPTransmitClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TCPTransmitClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPTransmitClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCPTransmitClient.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int TCPTransmitClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void TCPTransmitClient::connectedSignal(QString _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPTransmitClient::receiveFileNameSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TCPTransmitClient::receiveFileSizeSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TCPTransmitClient::receiveFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TCPTransmitClient::receiveMessageSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TCPTransmitClient::receiveDataSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TCPTransmitClient::sendFileSizeSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TCPTransmitClient::sendMessageSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TCPTransmitClient::sendFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void TCPTransmitClient::bytesWrittenSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
