/****************************************************************************
** Meta object code from reading C++ file 'PlotDock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/PlotDock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlotDock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotDock_t {
    QByteArrayData data[19];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotDock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotDock_t qt_meta_stringdata_PlotDock = {
    {
QT_MOC_LITERAL(0, 0, 8), // "PlotDock"
QT_MOC_LITERAL(1, 9, 10), // "updatePlot"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 17), // "SqliteTableModel*"
QT_MOC_LITERAL(4, 39, 5), // "model"
QT_MOC_LITERAL(5, 45, 24), // "BrowseDataTableSettings*"
QT_MOC_LITERAL(6, 70, 8), // "settings"
QT_MOC_LITERAL(7, 79, 6), // "update"
QT_MOC_LITERAL(8, 86, 20), // "keepOrResetSelection"
QT_MOC_LITERAL(9, 107, 12), // "fetchAllData"
QT_MOC_LITERAL(10, 120, 30), // "on_treePlotColumns_itemChanged"
QT_MOC_LITERAL(11, 151, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(12, 168, 4), // "item"
QT_MOC_LITERAL(13, 173, 6), // "column"
QT_MOC_LITERAL(14, 180, 36), // "on_treePlotColumns_itemDouble..."
QT_MOC_LITERAL(15, 217, 22), // "on_butSavePlot_clicked"
QT_MOC_LITERAL(16, 240, 36), // "on_comboLineType_currentIndex..."
QT_MOC_LITERAL(17, 277, 5), // "index"
QT_MOC_LITERAL(18, 283, 38) // "on_comboPointShape_currentInd..."

    },
    "PlotDock\0updatePlot\0\0SqliteTableModel*\0"
    "model\0BrowseDataTableSettings*\0settings\0"
    "update\0keepOrResetSelection\0fetchAllData\0"
    "on_treePlotColumns_itemChanged\0"
    "QTreeWidgetItem*\0item\0column\0"
    "on_treePlotColumns_itemDoubleClicked\0"
    "on_butSavePlot_clicked\0"
    "on_comboLineType_currentIndexChanged\0"
    "index\0on_comboPointShape_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotDock[] = {

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
       1,    4,   64,    2, 0x0a /* Public */,
       1,    3,   73,    2, 0x2a /* Public | MethodCloned */,
       1,    2,   80,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   85,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   88,    2, 0x0a /* Public */,
      10,    2,   89,    2, 0x08 /* Private */,
      14,    2,   94,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    1,  100,    2, 0x08 /* Private */,
      18,    1,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool, QMetaType::Bool,    4,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void PlotDock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlotDock *_t = static_cast<PlotDock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePlot((*reinterpret_cast< SqliteTableModel*(*)>(_a[1])),(*reinterpret_cast< BrowseDataTableSettings*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->updatePlot((*reinterpret_cast< SqliteTableModel*(*)>(_a[1])),(*reinterpret_cast< BrowseDataTableSettings*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->updatePlot((*reinterpret_cast< SqliteTableModel*(*)>(_a[1])),(*reinterpret_cast< BrowseDataTableSettings*(*)>(_a[2]))); break;
        case 3: _t->updatePlot((*reinterpret_cast< SqliteTableModel*(*)>(_a[1]))); break;
        case 4: _t->fetchAllData(); break;
        case 5: _t->on_treePlotColumns_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_treePlotColumns_itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_butSavePlot_clicked(); break;
        case 8: _t->on_comboLineType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_comboPointShape_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PlotDock::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PlotDock.data,
      qt_meta_data_PlotDock,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlotDock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotDock::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlotDock.stringdata0))
        return static_cast<void*>(const_cast< PlotDock*>(this));
    return QDialog::qt_metacast(_clname);
}

int PlotDock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
