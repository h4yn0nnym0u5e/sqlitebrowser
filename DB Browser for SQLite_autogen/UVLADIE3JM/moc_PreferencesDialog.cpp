/****************************************************************************
** Meta object code from reading C++ file 'PreferencesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/PreferencesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreferencesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreferencesDialog_t {
    QByteArrayData data[16];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreferencesDialog_t qt_meta_stringdata_PreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PreferencesDialog"
QT_MOC_LITERAL(1, 18, 12), // "loadSettings"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "saveSettings"
QT_MOC_LITERAL(4, 45, 14), // "chooseLocation"
QT_MOC_LITERAL(5, 60, 16), // "showColourDialog"
QT_MOC_LITERAL(6, 77, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(7, 94, 4), // "item"
QT_MOC_LITERAL(8, 99, 6), // "column"
QT_MOC_LITERAL(9, 106, 12), // "addExtension"
QT_MOC_LITERAL(10, 119, 15), // "removeExtension"
QT_MOC_LITERAL(11, 135, 17), // "activateRemoteTab"
QT_MOC_LITERAL(12, 153, 6), // "active"
QT_MOC_LITERAL(13, 160, 20), // "addClientCertificate"
QT_MOC_LITERAL(14, 181, 23), // "removeClientCertificate"
QT_MOC_LITERAL(15, 205, 26) // "chooseRemoteCloneDirectory"

    },
    "PreferencesDialog\0loadSettings\0\0"
    "saveSettings\0chooseLocation\0"
    "showColourDialog\0QTreeWidgetItem*\0"
    "item\0column\0addExtension\0removeExtension\0"
    "activateRemoteTab\0active\0addClientCertificate\0"
    "removeClientCertificate\0"
    "chooseRemoteCloneDirectory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferencesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    2,   67,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PreferencesDialog *_t = static_cast<PreferencesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadSettings(); break;
        case 1: _t->saveSettings(); break;
        case 2: _t->chooseLocation(); break;
        case 3: _t->showColourDialog((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->addExtension(); break;
        case 5: _t->removeExtension(); break;
        case 6: _t->activateRemoteTab((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->addClientCertificate(); break;
        case 8: _t->removeClientCertificate(); break;
        case 9: _t->chooseRemoteCloneDirectory(); break;
        default: ;
        }
    }
}

const QMetaObject PreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PreferencesDialog.data,
      qt_meta_data_PreferencesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PreferencesDialog.stringdata0))
        return static_cast<void*>(const_cast< PreferencesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
