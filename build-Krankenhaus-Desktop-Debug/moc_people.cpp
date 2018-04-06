/****************************************************************************
** Meta object code from reading C++ file 'people.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Krankenhaus/people.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'people.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_People_t {
    QByteArrayData data[8];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_People_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_People_t qt_meta_stringdata_People = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 20),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 19),
QT_MOC_LITERAL(4, 49, 19),
QT_MOC_LITERAL(5, 69, 17),
QT_MOC_LITERAL(6, 87, 19),
QT_MOC_LITERAL(7, 107, 16)
    },
    "People\0on_siguiente_clicked\0\0"
    "on_anterior_clicked\0on_regresar_clicked\0"
    "on_editar_clicked\0on_eliminar_clicked\0"
    "on_nuevo_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_People[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08,
       3,    0,   45,    2, 0x08,
       4,    0,   46,    2, 0x08,
       5,    0,   47,    2, 0x08,
       6,    0,   48,    2, 0x08,
       7,    0,   49,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void People::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        People *_t = static_cast<People *>(_o);
        switch (_id) {
        case 0: _t->on_siguiente_clicked(); break;
        case 1: _t->on_anterior_clicked(); break;
        case 2: _t->on_regresar_clicked(); break;
        case 3: _t->on_editar_clicked(); break;
        case 4: _t->on_eliminar_clicked(); break;
        case 5: _t->on_nuevo_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject People::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_People.data,
      qt_meta_data_People,  qt_static_metacall, 0, 0}
};


const QMetaObject *People::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *People::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_People.stringdata))
        return static_cast<void*>(const_cast< People*>(this));
    return QWidget::qt_metacast(_clname);
}

int People::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
