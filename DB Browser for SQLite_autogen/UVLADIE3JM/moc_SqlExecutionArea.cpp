/****************************************************************************
** Meta object code from reading C++ file 'SqlExecutionArea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/SqlExecutionArea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SqlExecutionArea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SqlExecutionArea_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SqlExecutionArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SqlExecutionArea_t qt_meta_stringdata_SqlExecutionArea = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SqlExecutionArea"
QT_MOC_LITERAL(1, 17, 15), // "finishExecution"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "result"
QT_MOC_LITERAL(4, 41, 16), // "enableSaveButton"
QT_MOC_LITERAL(5, 58, 6), // "enable"
QT_MOC_LITERAL(6, 65, 9), // "saveAsCsv"
QT_MOC_LITERAL(7, 75, 10), // "saveAsView"
QT_MOC_LITERAL(8, 86, 14) // "reloadSettings"

    },
    "SqlExecutionArea\0finishExecution\0\0"
    "result\0enableSaveButton\0enable\0saveAsCsv\0"
    "saveAsView\0reloadSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SqlExecutionArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,
       7,    0,   46,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SqlExecutionArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SqlExecutionArea *_t = static_cast<SqlExecutionArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishExecution((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->enableSaveButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->saveAsCsv(); break;
        case 3: _t->saveAsView(); break;
        case 4: _t->reloadSettings(); break;
        default: ;
        }
    }
}

const QMetaObject SqlExecutionArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SqlExecutionArea.data,
      qt_meta_data_SqlExecutionArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SqlExecutionArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SqlExecutionArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SqlExecutionArea.stringdata0))
        return static_cast<void*>(const_cast< SqlExecutionArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int SqlExecutionArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
