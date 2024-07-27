/****************************************************************************
** Meta object code from reading C++ file 'ExtendedLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../AzQtComponents/Components/ExtendedLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExtendedLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__ExtendedLabel_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__ExtendedLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__ExtendedLabel_t qt_meta_stringdata_AzQtComponents__ExtendedLabel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "AzQtComponents::ExtendedLabel"
QT_MOC_LITERAL(1, 30, 7), // "clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "setPixmap"
QT_MOC_LITERAL(4, 49, 1), // "p"
QT_MOC_LITERAL(5, 51, 24), // "setPixmapKeepAspectRatio"
QT_MOC_LITERAL(6, 76, 6), // "pixmap"
QT_MOC_LITERAL(7, 83, 7), // "setText"
QT_MOC_LITERAL(8, 91, 4), // "text"
QT_MOC_LITERAL(9, 96, 11), // "resizeEvent"
QT_MOC_LITERAL(10, 108, 13), // "QResizeEvent*"
QT_MOC_LITERAL(11, 122, 5) // "event"

    },
    "AzQtComponents::ExtendedLabel\0clicked\0"
    "\0setPixmap\0p\0setPixmapKeepAspectRatio\0"
    "pixmap\0setText\0text\0resizeEvent\0"
    "QResizeEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__ExtendedLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       9,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    4,
    QMetaType::Void, QMetaType::QPixmap,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void AzQtComponents::ExtendedLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExtendedLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 2: _t->setPixmapKeepAspectRatio((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 3: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExtendedLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExtendedLabel::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::ExtendedLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__ExtendedLabel.data,
    qt_meta_data_AzQtComponents__ExtendedLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::ExtendedLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::ExtendedLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__ExtendedLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int AzQtComponents::ExtendedLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AzQtComponents::ExtendedLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
