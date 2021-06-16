/****************************************************************************
** Meta object code from reading C++ file 'tcptransferserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../api/tcptransferserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcptransferserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TCPTransferServer_t {
    QByteArrayData data[13];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TCPTransferServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TCPTransferServer_t qt_meta_stringdata_TCPTransferServer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TCPTransferServer"
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
QT_MOC_LITERAL(12, 144, 17) // "receiveDataSignal"

    },
    "TCPTransferServer\0connectedSignal\0\0"
    "ip\0port\0receiveFileNameSignal\0name\0"
    "receiveFileSizeSignal\0size\0"
    "receiveFinishedSignal\0receiveMessageSignal\0"
    "msg\0receiveDataSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TCPTransferServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       5,    1,   49,    2, 0x06 /* Public */,
       7,    1,   52,    2, 0x06 /* Public */,
       9,    0,   55,    2, 0x06 /* Public */,
      10,    1,   56,    2, 0x06 /* Public */,
      12,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::LongLong,    8,

       0        // eod
};

void TCPTransferServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TCPTransferServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectedSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 1: _t->receiveFileNameSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->receiveFileSizeSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->receiveFinishedSignal(); break;
        case 4: _t->receiveMessageSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveDataSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TCPTransferServer::*)(QString , quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransferServer::connectedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TCPTransferServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransferServer::receiveFileNameSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TCPTransferServer::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransferServer::receiveFileSizeSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TCPTransferServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransferServer::receiveFinishedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TCPTransferServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransferServer::receiveMessageSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TCPTransferServer::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TCPTransferServer::receiveDataSignal)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TCPTransferServer::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_TCPTransferServer.data,
    qt_meta_data_TCPTransferServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TCPTransferServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TCPTransferServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TCPTransferServer.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int TCPTransferServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TCPTransferServer::connectedSignal(QString _t1, quint16 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TCPTransferServer::receiveFileNameSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TCPTransferServer::receiveFileSizeSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TCPTransferServer::receiveFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TCPTransferServer::receiveMessageSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TCPTransferServer::receiveDataSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
