/****************************************************************************
** Meta object code from reading C++ file 'AssetFolderThumbnailView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../AzQtComponents/Components/Widgets/AssetFolderThumbnailView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetFolderThumbnailView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView_t {
    QByteArrayData data[18];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView_t qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView = {
    {
QT_MOC_LITERAL(0, 0, 40), // "AzQtComponents::AssetFolderTh..."
QT_MOC_LITERAL(1, 41, 16), // "rootIndexChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 71, 3), // "idx"
QT_MOC_LITERAL(5, 75, 11), // "contextMenu"
QT_MOC_LITERAL(6, 87, 11), // "afterRename"
QT_MOC_LITERAL(7, 99, 5), // "value"
QT_MOC_LITERAL(8, 105, 10), // "deselected"
QT_MOC_LITERAL(9, 116, 22), // "selectionChangedSignal"
QT_MOC_LITERAL(10, 139, 14), // "QItemSelection"
QT_MOC_LITERAL(11, 154, 8), // "selected"
QT_MOC_LITERAL(12, 163, 16), // "selectionChanged"
QT_MOC_LITERAL(13, 180, 13), // "thumbnailSize"
QT_MOC_LITERAL(14, 194, 13), // "ThumbnailSize"
QT_MOC_LITERAL(15, 208, 5), // "Small"
QT_MOC_LITERAL(16, 214, 6), // "Medium"
QT_MOC_LITERAL(17, 221, 5) // "Large"

    },
    "AzQtComponents::AssetFolderThumbnailView\0"
    "rootIndexChanged\0\0QModelIndex\0idx\0"
    "contextMenu\0afterRename\0value\0deselected\0"
    "selectionChangedSignal\0QItemSelection\0"
    "selected\0selectionChanged\0thumbnailSize\0"
    "ThumbnailSize\0Small\0Medium\0Large"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__AssetFolderThumbnailView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   64, // properties
       1,   67, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    0,   53,    2, 0x06 /* Public */,
       9,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    2,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,    8,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0009510b,

 // enums: name, alias, flags, count, data
      14,   14, 0x2,    3,   72,

 // enum data: key, value
      15, uint(AzQtComponents::AssetFolderThumbnailView::ThumbnailSize::Small),
      16, uint(AzQtComponents::AssetFolderThumbnailView::ThumbnailSize::Medium),
      17, uint(AzQtComponents::AssetFolderThumbnailView::ThumbnailSize::Large),

       0        // eod
};

void AzQtComponents::AssetFolderThumbnailView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetFolderThumbnailView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rootIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->contextMenu((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->afterRename((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->deselected(); break;
        case 4: _t->selectionChangedSignal((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 5: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetFolderThumbnailView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetFolderThumbnailView::rootIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetFolderThumbnailView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetFolderThumbnailView::contextMenu)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AssetFolderThumbnailView::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetFolderThumbnailView::afterRename)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AssetFolderThumbnailView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetFolderThumbnailView::deselected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AssetFolderThumbnailView::*)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetFolderThumbnailView::selectionChangedSignal)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AssetFolderThumbnailView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ThumbnailSize*>(_v) = _t->thumbnailSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AssetFolderThumbnailView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setThumbnailSize(*reinterpret_cast< ThumbnailSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::AssetFolderThumbnailView::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemView::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView.data,
    qt_meta_data_AzQtComponents__AssetFolderThumbnailView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::AssetFolderThumbnailView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::AssetFolderThumbnailView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailView.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemView::qt_metacast(_clname);
}

int AzQtComponents::AssetFolderThumbnailView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
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
void AzQtComponents::AssetFolderThumbnailView::rootIndexChanged(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AzQtComponents::AssetFolderThumbnailView::contextMenu(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AzQtComponents::AssetFolderThumbnailView::afterRename(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< AzQtComponents::AssetFolderThumbnailView *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AzQtComponents::AssetFolderThumbnailView::deselected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AzQtComponents::AssetFolderThumbnailView::selectionChangedSignal(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailViewDelegate_t {
    QByteArrayData data[4];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailViewDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailViewDelegate_t qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailViewDelegate = {
    {
QT_MOC_LITERAL(0, 0, 48), // "AzQtComponents::AssetFolderTh..."
QT_MOC_LITERAL(1, 49, 15), // "RenameThumbnail"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 5) // "value"

    },
    "AzQtComponents::AssetFolderThumbnailViewDelegate\0"
    "RenameThumbnail\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AzQtComponents__AssetFolderThumbnailViewDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void AzQtComponents::AssetFolderThumbnailViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AssetFolderThumbnailViewDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RenameThumbnail((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetFolderThumbnailViewDelegate::*)(const QString & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetFolderThumbnailViewDelegate::RenameThumbnail)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AzQtComponents::AssetFolderThumbnailViewDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailViewDelegate.data,
    qt_meta_data_AzQtComponents__AssetFolderThumbnailViewDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AzQtComponents::AssetFolderThumbnailViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AzQtComponents::AssetFolderThumbnailViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AzQtComponents__AssetFolderThumbnailViewDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int AzQtComponents::AssetFolderThumbnailViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AzQtComponents::AssetFolderThumbnailViewDelegate::RenameThumbnail(const QString & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< AzQtComponents::AssetFolderThumbnailViewDelegate *>(this), &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
