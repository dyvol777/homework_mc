/****************************************************************************
** Meta object code from reading C++ file 'mc_gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mc_gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mc_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mc_gui_t {
    QByteArrayData data[9];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mc_gui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mc_gui_t qt_meta_stringdata_mc_gui = {
    {
QT_MOC_LITERAL(0, 0, 6), // "mc_gui"
QT_MOC_LITERAL(1, 7, 12), // "knowfilename"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "runAll"
QT_MOC_LITERAL(4, 28, 6), // "runOne"
QT_MOC_LITERAL(5, 35, 4), // "getP"
QT_MOC_LITERAL(6, 40, 4), // "setP"
QT_MOC_LITERAL(7, 45, 6), // "showra"
QT_MOC_LITERAL(8, 52, 9) // "rawchange"

    },
    "mc_gui\0knowfilename\0\0runAll\0runOne\0"
    "getP\0setP\0showra\0rawchange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mc_gui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mc_gui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mc_gui *_t = static_cast<mc_gui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->knowfilename(); break;
        case 1: _t->runAll(); break;
        case 2: _t->runOne(); break;
        case 3: _t->getP(); break;
        case 4: _t->setP(); break;
        case 5: _t->showra(); break;
        case 6: _t->rawchange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject mc_gui::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mc_gui.data,
      qt_meta_data_mc_gui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mc_gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mc_gui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mc_gui.stringdata0))
        return static_cast<void*>(const_cast< mc_gui*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mc_gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE