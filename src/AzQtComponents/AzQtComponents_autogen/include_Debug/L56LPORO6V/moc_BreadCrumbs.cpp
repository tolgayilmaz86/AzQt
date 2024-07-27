/****************************************************************************
** Meta object code from reading C++ file 'BreadCrumbs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../AzQtComponents/Components/Widgets/BreadCrumbs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BreadCrumbs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__BreadCrumbs_t {
    QByteArrayData data[24];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__BreadCrumbs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__BreadCrumbs_t qt_meta_stringdata_AzQtComponents__BreadCrumbs = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AzQtComponents::BreadCrumbs"
QT_MOC_LITERAL(1, 28, 11), // "pathChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "fullPath"
QT_MOC_LITERAL(4, 50, 10), // "pathEdited"
QT_MOC_LITERAL(5, 61, 13), // "requestedPath"
QT_MOC_LITERAL(6, 75, 11), // "linkClicked"
QT_MOC_LITERAL(7, 87, 8), // "linkPath"
QT_MOC_LITERAL(8, 96, 9), // "linkIndex"
QT_MOC_LITERAL(9, 106, 23), // "backAvailabilityChanged"
QT_MOC_LITERAL(10, 130, 7), // "enabled"
QT_MOC_LITERAL(11, 138, 26), // "forwardAvailabilityChanged"
QT_MOC_LITERAL(12, 165, 8), // "pushPath"
QT_MOC_LITERAL(13, 174, 12), // "pushFullPath"
QT_MOC_LITERAL(14, 187, 11), // "newFullPath"
QT_MOC_LITERAL(15, 199, 7), // "newPath"
QT_MOC_LITERAL(16, 207, 4), // "back"
QT_MOC_LITERAL(17, 212, 7), // "forward"
QT_MOC_LITERAL(18, 220, 12), // "startEditing"
QT_MOC_LITERAL(19, 233, 15), // "onLinkActivated"
QT_MOC_LITERAL(20, 249, 4), // "link"
QT_MOC_LITERAL(21, 254, 11), // "confirmEdit"
QT_MOC_LITERAL(22, 266, 10), // "cancelEdit"
QT_MOC_LITERAL(23, 277, 8) // "editable"

    },
    "AzQtComponents::BreadCrumbs\0pathChanged\0"
    "\0fullPath\0pathEdited\0requestedPath\0"
    "linkClicked\0linkPath\0linkIndex\0"
    "backAvailabilityChanged\0enabled\0"
    "forwardAvailabilityChanged\0pushPath\0"
    "pushFullPath\0newFullPath\0newPath\0back\0"
    "forward\0startEditing\0onLinkActivated\0"
    "link\0confirmEdit\0cancelEdit\0editable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__BreadCrumbs[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       1,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    2,   85,    2, 0x06 /* Public */,
       9,    1,   90,    2, 0x06 /* Public */,
      11,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   96,    2, 0x0a /* Public */,
      13,    2,   99,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,
      18,    0,  106,    2, 0x0a /* Public */,
      19,    1,  107,    2, 0x08 /* Private */,
      21,    0,  110,    2, 0x08 /* Private */,
      22,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::Bool, 0x00095103,

       0        // eod
};

void AzQtComponents::BreadCrumbs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BreadCrumbs *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->pathEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->linkClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->backAvailabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->forwardAvailabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->pushPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->pushFullPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: { bool _r = _t->back();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->forward();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->startEditing(); break;
        case 10: _t->onLinkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->confirmEdit(); break;
        case 12: _t->cancelEdit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BreadCrumbs::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BreadCrumbs::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BreadCrumbs::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BreadCrumbs::pathEdited)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BreadCrumbs::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BreadCrumbs::linkClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BreadCrumbs::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BreadCrumbs::backAvailabilityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BreadCrumbs::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BreadCrumbs::forwardAvailabilityChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BreadCrumbs *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEditable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BreadCrumbs *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEditable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::BreadCrumbs::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__BreadCrumbs.data,
    qt_meta_data_AzQtComponents__BreadCrumbs,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::BreadCrumbs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::BreadCrumbs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__BreadCrumbs.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AzQtComponents::BreadCrumbs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AzQtComponents::BreadCrumbs::pathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::BreadCrumbs::pathEdited(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::BreadCrumbs::linkClicked(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::BreadCrumbs::backAvailabilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AzQtComponents::BreadCrumbs::forwardAvailabilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
