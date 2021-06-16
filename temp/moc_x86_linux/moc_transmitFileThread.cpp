/****************************************************************************
** Meta object code from reading C++ file 'transmitFileThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../api/transmitFileThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transmitFileThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransmitFileThread_t {
    QByteArrayData data[20];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransmitFileThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransmitFileThread_t qt_meta_stringdata_TransmitFileThread = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TransmitFileThread"
QT_MOC_LITERAL(1, 19, 21), // "receiveFileNameSignal"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "name"
QT_MOC_LITERAL(4, 47, 21), // "receiveFileSizeSignal"
QT_MOC_LITERAL(5, 69, 4), // "size"
QT_MOC_LITERAL(6, 74, 20), // "receiveMessageSignal"
QT_MOC_LITERAL(7, 95, 3), // "msg"
QT_MOC_LITERAL(8, 99, 17), // "receiveDataSignal"
QT_MOC_LITERAL(9, 117, 21), // "receiveFinishedSignal"
QT_MOC_LITERAL(10, 139, 18), // "sendFileSizeSignal"
QT_MOC_LITERAL(11, 158, 17), // "sendMessageSignal"
QT_MOC_LITERAL(12, 176, 18), // "sendFinishedSignal"
QT_MOC_LITERAL(13, 195, 11), // "ReceiveData"
QT_MOC_LITERAL(14, 207, 12), // "proccessData"
QT_MOC_LITERAL(15, 220, 11), // "QByteArray&"
QT_MOC_LITERAL(16, 232, 5), // "array"
QT_MOC_LITERAL(17, 238, 10), // "DisConnect"
QT_MOC_LITERAL(18, 249, 18), // "displaySocketError"
QT_MOC_LITERAL(19, 268, 28) // "QAbstractSocket::SocketError"

    },
    "TransmitFileThread\0receiveFileNameSignal\0"
    "\0name\0receiveFileSizeSignal\0size\0"
    "receiveMessageSignal\0msg\0receiveDataSignal\0"
    "receiveFinishedSignal\0sendFileSizeSignal\0"
    "sendMessageSignal\0sendFinishedSignal\0"
    "ReceiveData\0proccessData\0QByteArray&\0"
    "array\0DisConnect\0displaySocketError\0"
    "QAbstractSocket::SocketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransmitFileThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
       9,    0,   86,    2, 0x06 /* Public */,
      10,    1,   87,    2, 0x06 /* Public */,
      11,    1,   90,    2, 0x06 /* Public */,
      12,    0,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   94,    2, 0x08 /* Private */,
      14,    1,   95,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    1,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,

       0        // eod
};

void TransmitFileThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransmitFileThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveFileNameSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->receiveFileSizeSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->receiveMessageSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->receiveDataSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->receiveFinishedSignal(); break;
        case 5: _t->sendFileSizeSignal((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->sendMessageSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sendFinishedSignal(); break;
        case 8: _t->ReceiveData(); break;
        case 9: _t->proccessData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->DisConnect(); break;
        case 11: _t->displaySocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
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
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransmitFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveFileNameSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveFileSizeSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveMessageSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveDataSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::receiveFinishedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::sendFileSizeSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::sendMessageSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TransmitFileThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransmitFileThread::sendFinishedSignal)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransmitFileThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_TransmitFileThread.data,
    qt_meta_data_TransmitFileThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransmitFileThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransmitFileThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransmitFileThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int TransmitFileThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TransmitFileThread::receiveFileNameSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TransmitFileThread::receiveFileSizeSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TransmitFileThread::receiveMessageSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TransmitFileThread::receiveDataSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TransmitFileThread::receiveFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TransmitFileThread::sendFileSizeSignal(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TransmitFileThread::sendMessageSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TransmitFileThread::sendFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
