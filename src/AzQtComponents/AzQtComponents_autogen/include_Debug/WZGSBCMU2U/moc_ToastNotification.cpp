/****************************************************************************
** Meta object code from reading C++ file 'ToastNotification.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../AzQtComponents/Components/ToastNotification.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ToastNotification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__ToastNotification_t {
    QByteArrayData data[6];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__ToastNotification_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__ToastNotification_t qt_meta_stringdata_AzQtComponents__ToastNotification = {
    {
QT_MOC_LITERAL(0, 0, 33), // "AzQtComponents::ToastNotifica..."
QT_MOC_LITERAL(1, 34, 23), // "ToastNotificationHidden"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 28), // "ToastNotificationInteraction"
QT_MOC_LITERAL(4, 88, 10), // "StartTimer"
QT_MOC_LITERAL(5, 99, 7) // "FadeOut"

    },
    "AzQtComponents::ToastNotification\0"
    "ToastNotificationHidden\0\0"
    "ToastNotificationInteraction\0StartTimer\0"
    "FadeOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__ToastNotification[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AzQtComponents::ToastNotification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToastNotification *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ToastNotificationHidden(); break;
        case 1: _t->ToastNotificationInteraction(); break;
        case 2: _t->StartTimer(); break;
        case 3: _t->FadeOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ToastNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToastNotification::ToastNotificationHidden)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ToastNotification::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ToastNotification::ToastNotificationInteraction)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::ToastNotification::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__ToastNotification.data,
    qt_meta_data_AzQtComponents__ToastNotification,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::ToastNotification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::ToastNotification::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__ToastNotification.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AzQtComponents::ToastNotification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AzQtComponents::ToastNotification::ToastNotificationHidden()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AzQtComponents::ToastNotification::ToastNotificationInteraction()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
