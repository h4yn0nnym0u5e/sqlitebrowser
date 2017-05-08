/****************************************************************************
** Meta object code from reading C++ file 'ExtendedTableWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ExtendedTableWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExtendedTableWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExtendedTableWidget_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExtendedTableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExtendedTableWidget_t qt_meta_stringdata_ExtendedTableWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ExtendedTableWidget"
QT_MOC_LITERAL(1, 20, 17), // "foreignKeyClicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "table"
QT_MOC_LITERAL(4, 45, 6), // "column"
QT_MOC_LITERAL(5, 52, 5), // "value"
QT_MOC_LITERAL(6, 58, 11), // "switchTable"
QT_MOC_LITERAL(7, 70, 4), // "next"
QT_MOC_LITERAL(8, 75, 14), // "reloadSettings"
QT_MOC_LITERAL(9, 90, 17), // "vscrollbarChanged"
QT_MOC_LITERAL(10, 108, 11), // "cellClicked"
QT_MOC_LITERAL(11, 120, 5) // "index"

    },
    "ExtendedTableWidget\0foreignKeyClicked\0"
    "\0table\0column\0value\0switchTable\0next\0"
    "reloadSettings\0vscrollbarChanged\0"
    "cellClicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExtendedTableWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       6,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   49,    2, 0x0a /* Public */,
       9,    1,   50,    2, 0x08 /* Private */,
      10,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,    3,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QModelIndex,   11,

       0        // eod
};

void ExtendedTableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExtendedTableWidget *_t = static_cast<ExtendedTableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foreignKeyClicked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 1: _t->switchTable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->reloadSettings(); break;
        case 3: _t->vscrollbarChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->cellClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ExtendedTableWidget::*_t)(const QString & , const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtendedTableWidget::foreignKeyClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ExtendedTableWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ExtendedTableWidget::switchTable)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ExtendedTableWidget::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_ExtendedTableWidget.data,
      qt_meta_data_ExtendedTableWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ExtendedTableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExtendedTableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ExtendedTableWidget.stringdata0))
        return static_cast<void*>(const_cast< ExtendedTableWidget*>(this));
    return QTableView::qt_metacast(_clname);
}

int ExtendedTableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
void ExtendedTableWidget::foreignKeyClicked(const QString & _t1, const QString & _t2, const QByteArray & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ExtendedTableWidget::switchTable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
