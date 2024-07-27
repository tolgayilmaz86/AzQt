/****************************************************************************
** Meta object code from reading C++ file 'ColorGrid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../AzQtComponents/Components/Widgets/ColorPicker/ColorGrid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorGrid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__ColorGrid_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__ColorGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__ColorGrid_t qt_meta_stringdata_AzQtComponents__ColorGrid = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AzQtComponents::ColorGrid"
QT_MOC_LITERAL(1, 26, 11), // "gridPressed"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "hsvChanged"
QT_MOC_LITERAL(4, 50, 3), // "hue"
QT_MOC_LITERAL(5, 54, 10), // "saturation"
QT_MOC_LITERAL(6, 65, 5), // "value"
QT_MOC_LITERAL(7, 71, 12), // "gridReleased"
QT_MOC_LITERAL(8, 84, 6), // "setHue"
QT_MOC_LITERAL(9, 91, 13), // "setSaturation"
QT_MOC_LITERAL(10, 105, 8), // "setValue"
QT_MOC_LITERAL(11, 114, 20) // "setDefaultVForHsMode"

    },
    "AzQtComponents::ColorGrid\0gridPressed\0"
    "\0hsvChanged\0hue\0saturation\0value\0"
    "gridReleased\0setHue\0setSaturation\0"
    "setValue\0setDefaultVForHsMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__ColorGrid[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    3,   50,    2, 0x06 /* Public */,
       7,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    4,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    6,
    QMetaType::Void, QMetaType::QReal,    6,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,

       0        // eod
};

void AzQtComponents::ColorGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gridPressed(); break;
        case 1: _t->hsvChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 2: _t->gridReleased(); break;
        case 3: _t->setHue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->setSaturation((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setDefaultVForHsMode((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorGrid::gridPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorGrid::*)(qreal , qreal , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorGrid::hsvChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorGrid::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorGrid::gridReleased)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->hue(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->saturation(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHue(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setSaturation(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::ColorGrid::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__ColorGrid.data,
    qt_meta_data_AzQtComponents__ColorGrid,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::ColorGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::ColorGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__ColorGrid.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::ColorGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::ColorGrid::gridPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::ColorGrid::hsvChanged(qreal _t1, qreal _t2, qreal _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::ColorGrid::gridReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
