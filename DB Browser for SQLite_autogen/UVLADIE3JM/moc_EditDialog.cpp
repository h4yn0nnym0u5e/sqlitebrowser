/****************************************************************************
** Meta object code from reading C++ file 'EditDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/EditDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditDialog_t {
    QByteArrayData data[25];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditDialog_t qt_meta_stringdata_EditDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EditDialog"
QT_MOC_LITERAL(1, 11, 17), // "recordTextUpdated"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "idx"
QT_MOC_LITERAL(4, 34, 4), // "data"
QT_MOC_LITERAL(5, 39, 6), // "isBlob"
QT_MOC_LITERAL(6, 46, 8), // "setFocus"
QT_MOC_LITERAL(7, 55, 6), // "reject"
QT_MOC_LITERAL(8, 62, 11), // "setReadOnly"
QT_MOC_LITERAL(9, 74, 2), // "ro"
QT_MOC_LITERAL(10, 77, 14), // "reloadSettings"
QT_MOC_LITERAL(11, 92, 10), // "importData"
QT_MOC_LITERAL(12, 103, 10), // "exportData"
QT_MOC_LITERAL(13, 114, 7), // "setNull"
QT_MOC_LITERAL(14, 122, 17), // "updateApplyButton"
QT_MOC_LITERAL(15, 140, 6), // "accept"
QT_MOC_LITERAL(16, 147, 13), // "checkDataType"
QT_MOC_LITERAL(17, 161, 8), // "loadData"
QT_MOC_LITERAL(18, 170, 19), // "toggleOverwriteMode"
QT_MOC_LITERAL(19, 190, 15), // "editModeChanged"
QT_MOC_LITERAL(20, 206, 7), // "newMode"
QT_MOC_LITERAL(21, 214, 15), // "editTextChanged"
QT_MOC_LITERAL(22, 230, 14), // "updateCellInfo"
QT_MOC_LITERAL(23, 245, 17), // "humanReadableSize"
QT_MOC_LITERAL(24, 263, 9) // "byteCount"

    },
    "EditDialog\0recordTextUpdated\0\0idx\0"
    "data\0isBlob\0setFocus\0reject\0setReadOnly\0"
    "ro\0reloadSettings\0importData\0exportData\0"
    "setNull\0updateApplyButton\0accept\0"
    "checkDataType\0loadData\0toggleOverwriteMode\0"
    "editModeChanged\0newMode\0editTextChanged\0"
    "updateCellInfo\0humanReadableSize\0"
    "byteCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  106,    2, 0x0a /* Public */,
       7,    0,  107,    2, 0x0a /* Public */,
       8,    1,  108,    2, 0x0a /* Public */,
      10,    0,  111,    2, 0x0a /* Public */,
      11,    0,  112,    2, 0x08 /* Private */,
      12,    0,  113,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    0,  115,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,
      17,    1,  120,    2, 0x08 /* Private */,
      18,    0,  123,    2, 0x08 /* Private */,
      19,    1,  124,    2, 0x08 /* Private */,
      21,    0,  127,    2, 0x08 /* Private */,
      22,    1,  128,    2, 0x08 /* Private */,
      23,    1,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPersistentModelIndex, QMetaType::QByteArray, QMetaType::Bool,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QByteArray,    4,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::QString, QMetaType::Double,   24,

       0        // eod
};

void EditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditDialog *_t = static_cast<EditDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recordTextUpdated((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->setFocus(); break;
        case 2: _t->reject(); break;
        case 3: _t->setReadOnly((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->reloadSettings(); break;
        case 5: _t->importData(); break;
        case 6: _t->exportData(); break;
        case 7: _t->setNull(); break;
        case 8: _t->updateApplyButton(); break;
        case 9: _t->accept(); break;
        case 10: { int _r = _t->checkDataType((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: _t->loadData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 12: _t->toggleOverwriteMode(); break;
        case 13: _t->editModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->editTextChanged(); break;
        case 15: _t->updateCellInfo((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 16: { QString _r = _t->humanReadableSize((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EditDialog::*_t)(const QPersistentModelIndex & , const QByteArray & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EditDialog::recordTextUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject EditDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditDialog.data,
      qt_meta_data_EditDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EditDialog.stringdata0))
        return static_cast<void*>(const_cast< EditDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void EditDialog::recordTextUpdated(const QPersistentModelIndex & _t1, const QByteArray & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
