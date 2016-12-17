/****************************************************************************
** Meta object code from reading C++ file 'ramShow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ramShow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ramShow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ramShow_t {
    QByteArrayData data[6];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ramShow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ramShow_t qt_meta_stringdata_ramShow = {
    {
QT_MOC_LITERAL(0, 0, 7), // "ramShow"
QT_MOC_LITERAL(1, 8, 9), // "rawchange"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "uint8_t*"
QT_MOC_LITERAL(4, 28, 1), // "a"
QT_MOC_LITERAL(5, 30, 1) // "b"

    },
    "ramShow\0rawchange\0\0uint8_t*\0a\0b"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ramShow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

       0        // eod
};

void ramShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ramShow *_t = static_cast<ramShow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rawchange((*reinterpret_cast< uint8_t*(*)>(_a[1])),(*reinterpret_cast< uint8_t*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ramShow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ramShow.data,
      qt_meta_data_ramShow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ramShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ramShow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ramShow.stringdata0))
        return static_cast<void*>(const_cast< ramShow*>(this));
    return QWidget::qt_metacast(_clname);
}

int ramShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
