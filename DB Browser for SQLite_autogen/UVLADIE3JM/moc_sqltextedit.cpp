/****************************************************************************
** Meta object code from reading C++ file 'sqltextedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/sqltextedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqltextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SqlTextEdit_t {
    QByteArrayData data[11];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SqlTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SqlTextEdit_t qt_meta_stringdata_SqlTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SqlTextEdit"
QT_MOC_LITERAL(1, 12, 14), // "reloadKeywords"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "reloadSettings"
QT_MOC_LITERAL(4, 43, 20), // "clearErrorIndicators"
QT_MOC_LITERAL(5, 64, 17), // "setErrorIndicator"
QT_MOC_LITERAL(6, 82, 7), // "fromRow"
QT_MOC_LITERAL(7, 90, 9), // "fromIndex"
QT_MOC_LITERAL(8, 100, 5), // "toRow"
QT_MOC_LITERAL(9, 106, 7), // "toIndex"
QT_MOC_LITERAL(10, 114, 25) // "updateLineNumberAreaWidth"

    },
    "SqlTextEdit\0reloadKeywords\0\0reloadSettings\0"
    "clearErrorIndicators\0setErrorIndicator\0"
    "fromRow\0fromIndex\0toRow\0toIndex\0"
    "updateLineNumberAreaWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SqlTextEdit[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    4,   42,    2, 0x0a /* Public */,
      10,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    6,    7,    8,    9,
    QMetaType::Void,

       0        // eod
};

void SqlTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SqlTextEdit *_t = static_cast<SqlTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reloadKeywords(); break;
        case 1: _t->reloadSettings(); break;
        case 2: _t->clearErrorIndicators(); break;
        case 3: _t->setErrorIndicator((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->updateLineNumberAreaWidth(); break;
        default: ;
        }
    }
}

const QMetaObject SqlTextEdit::staticMetaObject = {
    { &QsciScintilla::staticMetaObject, qt_meta_stringdata_SqlTextEdit.data,
      qt_meta_data_SqlTextEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SqlTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SqlTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SqlTextEdit.stringdata0))
        return static_cast<void*>(const_cast< SqlTextEdit*>(this));
    return QsciScintilla::qt_metacast(_clname);
}

int SqlTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QsciScintilla::qt_metacall(_c, _id, _a);
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
