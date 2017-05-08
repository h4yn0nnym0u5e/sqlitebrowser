/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[107];
    char stringdata0[1518];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "fileOpen"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "fileName"
QT_MOC_LITERAL(4, 30, 20), // "dontAddToRecentFiles"
QT_MOC_LITERAL(5, 51, 8), // "readOnly"
QT_MOC_LITERAL(6, 60, 6), // "logSql"
QT_MOC_LITERAL(7, 67, 3), // "sql"
QT_MOC_LITERAL(8, 71, 7), // "msgtype"
QT_MOC_LITERAL(9, 79, 7), // "dbState"
QT_MOC_LITERAL(10, 87, 5), // "dirty"
QT_MOC_LITERAL(11, 93, 7), // "refresh"
QT_MOC_LITERAL(12, 101, 9), // "jumpToRow"
QT_MOC_LITERAL(13, 111, 5), // "table"
QT_MOC_LITERAL(14, 117, 6), // "column"
QT_MOC_LITERAL(15, 124, 5), // "value"
QT_MOC_LITERAL(16, 130, 21), // "switchToBrowseDataTab"
QT_MOC_LITERAL(17, 152, 13), // "tableToBrowse"
QT_MOC_LITERAL(18, 166, 17), // "populateStructure"
QT_MOC_LITERAL(19, 184, 21), // "createTreeContextMenu"
QT_MOC_LITERAL(20, 206, 6), // "qPoint"
QT_MOC_LITERAL(21, 213, 19), // "changeTreeSelection"
QT_MOC_LITERAL(22, 233, 7), // "fileNew"
QT_MOC_LITERAL(23, 241, 13), // "populateTable"
QT_MOC_LITERAL(24, 255, 17), // "clearTableBrowser"
QT_MOC_LITERAL(25, 273, 9), // "fileClose"
QT_MOC_LITERAL(26, 283, 9), // "addRecord"
QT_MOC_LITERAL(27, 293, 12), // "deleteRecord"
QT_MOC_LITERAL(28, 306, 15), // "selectTableLine"
QT_MOC_LITERAL(29, 322, 12), // "lineToSelect"
QT_MOC_LITERAL(30, 335, 16), // "navigatePrevious"
QT_MOC_LITERAL(31, 352, 12), // "navigateNext"
QT_MOC_LITERAL(32, 365, 13), // "navigateBegin"
QT_MOC_LITERAL(33, 379, 11), // "navigateEnd"
QT_MOC_LITERAL(34, 391, 12), // "navigateGoto"
QT_MOC_LITERAL(35, 404, 17), // "setRecordsetLabel"
QT_MOC_LITERAL(36, 422, 11), // "createTable"
QT_MOC_LITERAL(37, 434, 11), // "createIndex"
QT_MOC_LITERAL(38, 446, 7), // "compact"
QT_MOC_LITERAL(39, 454, 12), // "deleteObject"
QT_MOC_LITERAL(40, 467, 10), // "editObject"
QT_MOC_LITERAL(41, 478, 13), // "helpWhatsThis"
QT_MOC_LITERAL(42, 492, 9), // "helpAbout"
QT_MOC_LITERAL(43, 502, 16), // "updateRecordText"
QT_MOC_LITERAL(44, 519, 3), // "idx"
QT_MOC_LITERAL(45, 523, 4), // "text"
QT_MOC_LITERAL(46, 528, 6), // "isBlob"
QT_MOC_LITERAL(47, 535, 14), // "toggleEditDock"
QT_MOC_LITERAL(48, 550, 7), // "visible"
QT_MOC_LITERAL(49, 558, 25), // "dataTableSelectionChanged"
QT_MOC_LITERAL(50, 584, 5), // "index"
QT_MOC_LITERAL(51, 590, 16), // "doubleClickTable"
QT_MOC_LITERAL(52, 607, 12), // "executeQuery"
QT_MOC_LITERAL(53, 620, 18), // "importTableFromCSV"
QT_MOC_LITERAL(54, 639, 16), // "exportTableToCSV"
QT_MOC_LITERAL(55, 656, 17), // "exportTableToJson"
QT_MOC_LITERAL(56, 674, 8), // "fileSave"
QT_MOC_LITERAL(57, 683, 10), // "fileRevert"
QT_MOC_LITERAL(58, 694, 30), // "on_actionSave_Remote_triggered"
QT_MOC_LITERAL(59, 725, 19), // "exportDatabaseToSQL"
QT_MOC_LITERAL(60, 745, 21), // "importDatabaseFromSQL"
QT_MOC_LITERAL(61, 767, 15), // "openPreferences"
QT_MOC_LITERAL(62, 783, 14), // "openRecentFile"
QT_MOC_LITERAL(63, 798, 11), // "loadPragmas"
QT_MOC_LITERAL(64, 810, 14), // "updatePragmaUi"
QT_MOC_LITERAL(65, 825, 11), // "savePragmas"
QT_MOC_LITERAL(66, 837, 15), // "mainTabSelected"
QT_MOC_LITERAL(67, 853, 8), // "tabindex"
QT_MOC_LITERAL(68, 862, 24), // "browseTableHeaderClicked"
QT_MOC_LITERAL(69, 887, 12), // "logicalindex"
QT_MOC_LITERAL(70, 900, 10), // "openSqlTab"
QT_MOC_LITERAL(71, 911, 12), // "resetCounter"
QT_MOC_LITERAL(72, 924, 11), // "closeSqlTab"
QT_MOC_LITERAL(73, 936, 5), // "force"
QT_MOC_LITERAL(74, 942, 11), // "openSqlFile"
QT_MOC_LITERAL(75, 954, 11), // "saveSqlFile"
QT_MOC_LITERAL(76, 966, 13), // "saveSqlFileAs"
QT_MOC_LITERAL(77, 980, 13), // "loadExtension"
QT_MOC_LITERAL(78, 994, 14), // "reloadSettings"
QT_MOC_LITERAL(79, 1009, 15), // "checkNewVersion"
QT_MOC_LITERAL(80, 1025, 13), // "versionstring"
QT_MOC_LITERAL(81, 1039, 3), // "url"
QT_MOC_LITERAL(82, 1043, 23), // "on_actionWiki_triggered"
QT_MOC_LITERAL(83, 1067, 29), // "on_actionBug_report_triggered"
QT_MOC_LITERAL(84, 1097, 31), // "on_actionSqlCipherFaq_triggered"
QT_MOC_LITERAL(85, 1129, 26), // "on_actionWebsite_triggered"
QT_MOC_LITERAL(86, 1156, 27), // "updateBrowseDataColumnWidth"
QT_MOC_LITERAL(87, 1184, 7), // "section"
QT_MOC_LITERAL(88, 1192, 8), // "new_size"
QT_MOC_LITERAL(89, 1201, 11), // "loadProject"
QT_MOC_LITERAL(90, 1213, 8), // "filename"
QT_MOC_LITERAL(91, 1222, 11), // "saveProject"
QT_MOC_LITERAL(92, 1234, 10), // "fileAttach"
QT_MOC_LITERAL(93, 1245, 12), // "updateFilter"
QT_MOC_LITERAL(94, 1258, 14), // "editEncryption"
QT_MOC_LITERAL(95, 1273, 29), // "on_buttonClearFilters_clicked"
QT_MOC_LITERAL(96, 1303, 26), // "copyCurrentCreateStatement"
QT_MOC_LITERAL(97, 1330, 23), // "showDataColumnPopupMenu"
QT_MOC_LITERAL(98, 1354, 3), // "pos"
QT_MOC_LITERAL(99, 1358, 19), // "showRecordPopupMenu"
QT_MOC_LITERAL(100, 1378, 27), // "editDataColumnDisplayFormat"
QT_MOC_LITERAL(101, 1406, 15), // "showRowidColumn"
QT_MOC_LITERAL(102, 1422, 4), // "show"
QT_MOC_LITERAL(103, 1427, 26), // "browseDataSetTableEncoding"
QT_MOC_LITERAL(104, 1454, 12), // "forAllTables"
QT_MOC_LITERAL(105, 1467, 33), // "browseDataSetDefaultTableEnco..."
QT_MOC_LITERAL(106, 1501, 16) // "fileOpenReadOnly"

    },
    "MainWindow\0fileOpen\0\0fileName\0"
    "dontAddToRecentFiles\0readOnly\0logSql\0"
    "sql\0msgtype\0dbState\0dirty\0refresh\0"
    "jumpToRow\0table\0column\0value\0"
    "switchToBrowseDataTab\0tableToBrowse\0"
    "populateStructure\0createTreeContextMenu\0"
    "qPoint\0changeTreeSelection\0fileNew\0"
    "populateTable\0clearTableBrowser\0"
    "fileClose\0addRecord\0deleteRecord\0"
    "selectTableLine\0lineToSelect\0"
    "navigatePrevious\0navigateNext\0"
    "navigateBegin\0navigateEnd\0navigateGoto\0"
    "setRecordsetLabel\0createTable\0createIndex\0"
    "compact\0deleteObject\0editObject\0"
    "helpWhatsThis\0helpAbout\0updateRecordText\0"
    "idx\0text\0isBlob\0toggleEditDock\0visible\0"
    "dataTableSelectionChanged\0index\0"
    "doubleClickTable\0executeQuery\0"
    "importTableFromCSV\0exportTableToCSV\0"
    "exportTableToJson\0fileSave\0fileRevert\0"
    "on_actionSave_Remote_triggered\0"
    "exportDatabaseToSQL\0importDatabaseFromSQL\0"
    "openPreferences\0openRecentFile\0"
    "loadPragmas\0updatePragmaUi\0savePragmas\0"
    "mainTabSelected\0tabindex\0"
    "browseTableHeaderClicked\0logicalindex\0"
    "openSqlTab\0resetCounter\0closeSqlTab\0"
    "force\0openSqlFile\0saveSqlFile\0"
    "saveSqlFileAs\0loadExtension\0reloadSettings\0"
    "checkNewVersion\0versionstring\0url\0"
    "on_actionWiki_triggered\0"
    "on_actionBug_report_triggered\0"
    "on_actionSqlCipherFaq_triggered\0"
    "on_actionWebsite_triggered\0"
    "updateBrowseDataColumnWidth\0section\0"
    "new_size\0loadProject\0filename\0saveProject\0"
    "fileAttach\0updateFilter\0editEncryption\0"
    "on_buttonClearFilters_clicked\0"
    "copyCurrentCreateStatement\0"
    "showDataColumnPopupMenu\0pos\0"
    "showRecordPopupMenu\0editDataColumnDisplayFormat\0"
    "showRowidColumn\0show\0browseDataSetTableEncoding\0"
    "forAllTables\0browseDataSetDefaultTableEncoding\0"
    "fileOpenReadOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      85,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,  439,    2, 0x0a /* Public */,
       1,    2,  446,    2, 0x2a /* Public | MethodCloned */,
       1,    1,  451,    2, 0x2a /* Public | MethodCloned */,
       1,    0,  454,    2, 0x2a /* Public | MethodCloned */,
       6,    2,  455,    2, 0x0a /* Public */,
       9,    1,  460,    2, 0x0a /* Public */,
      11,    0,  463,    2, 0x0a /* Public */,
      12,    3,  464,    2, 0x0a /* Public */,
      16,    1,  471,    2, 0x0a /* Public */,
      16,    0,  474,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  475,    2, 0x0a /* Public */,
      19,    1,  476,    2, 0x08 /* Private */,
      21,    0,  479,    2, 0x08 /* Private */,
      22,    0,  480,    2, 0x08 /* Private */,
      23,    0,  481,    2, 0x08 /* Private */,
      24,    0,  482,    2, 0x08 /* Private */,
      25,    0,  483,    2, 0x08 /* Private */,
      26,    0,  484,    2, 0x08 /* Private */,
      27,    0,  485,    2, 0x08 /* Private */,
      28,    1,  486,    2, 0x08 /* Private */,
      30,    0,  489,    2, 0x08 /* Private */,
      31,    0,  490,    2, 0x08 /* Private */,
      32,    0,  491,    2, 0x08 /* Private */,
      33,    0,  492,    2, 0x08 /* Private */,
      34,    0,  493,    2, 0x08 /* Private */,
      35,    0,  494,    2, 0x08 /* Private */,
      36,    0,  495,    2, 0x08 /* Private */,
      37,    0,  496,    2, 0x08 /* Private */,
      38,    0,  497,    2, 0x08 /* Private */,
      39,    0,  498,    2, 0x08 /* Private */,
      40,    0,  499,    2, 0x08 /* Private */,
      41,    0,  500,    2, 0x08 /* Private */,
      42,    0,  501,    2, 0x08 /* Private */,
      43,    3,  502,    2, 0x08 /* Private */,
      47,    1,  509,    2, 0x08 /* Private */,
      49,    1,  512,    2, 0x08 /* Private */,
      51,    1,  515,    2, 0x08 /* Private */,
      52,    0,  518,    2, 0x08 /* Private */,
      53,    0,  519,    2, 0x08 /* Private */,
      54,    0,  520,    2, 0x08 /* Private */,
      55,    0,  521,    2, 0x08 /* Private */,
      56,    0,  522,    2, 0x08 /* Private */,
      57,    0,  523,    2, 0x08 /* Private */,
      58,    0,  524,    2, 0x08 /* Private */,
      59,    0,  525,    2, 0x08 /* Private */,
      60,    0,  526,    2, 0x08 /* Private */,
      61,    0,  527,    2, 0x08 /* Private */,
      62,    0,  528,    2, 0x08 /* Private */,
      63,    0,  529,    2, 0x08 /* Private */,
      64,    0,  530,    2, 0x08 /* Private */,
      65,    0,  531,    2, 0x08 /* Private */,
      66,    1,  532,    2, 0x08 /* Private */,
      68,    1,  535,    2, 0x08 /* Private */,
      70,    1,  538,    2, 0x08 /* Private */,
      70,    0,  541,    2, 0x28 /* Private | MethodCloned */,
      72,    2,  542,    2, 0x08 /* Private */,
      72,    1,  547,    2, 0x28 /* Private | MethodCloned */,
      74,    0,  550,    2, 0x08 /* Private */,
      75,    0,  551,    2, 0x08 /* Private */,
      76,    0,  552,    2, 0x08 /* Private */,
      77,    0,  553,    2, 0x08 /* Private */,
      78,    0,  554,    2, 0x08 /* Private */,
      79,    2,  555,    2, 0x08 /* Private */,
      82,    0,  560,    2, 0x08 /* Private */,
      83,    0,  561,    2, 0x08 /* Private */,
      84,    0,  562,    2, 0x08 /* Private */,
      85,    0,  563,    2, 0x08 /* Private */,
      86,    3,  564,    2, 0x08 /* Private */,
      89,    2,  571,    2, 0x08 /* Private */,
      89,    1,  576,    2, 0x28 /* Private | MethodCloned */,
      89,    0,  579,    2, 0x28 /* Private | MethodCloned */,
      91,    0,  580,    2, 0x08 /* Private */,
      92,    0,  581,    2, 0x08 /* Private */,
      93,    2,  582,    2, 0x08 /* Private */,
      94,    0,  587,    2, 0x08 /* Private */,
      95,    0,  588,    2, 0x08 /* Private */,
      96,    0,  589,    2, 0x08 /* Private */,
      97,    1,  590,    2, 0x08 /* Private */,
      99,    1,  593,    2, 0x08 /* Private */,
     100,    0,  596,    2, 0x08 /* Private */,
     101,    1,  597,    2, 0x08 /* Private */,
     103,    1,  600,    2, 0x08 /* Private */,
     103,    0,  603,    2, 0x28 /* Private | MethodCloned */,
     105,    0,  604,    2, 0x08 /* Private */,
     106,    0,  605,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray,   13,   14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPersistentModelIndex, QMetaType::QByteArray, QMetaType::Bool,   44,   45,   46,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::QModelIndex,   50,
    QMetaType::Void, QMetaType::QModelIndex,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   67,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::UInt, QMetaType::Bool,   71,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   50,   73,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   80,   81,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   87,    2,   88,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   90,    5,
    QMetaType::Bool, QMetaType::QString,   90,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   98,
    QMetaType::Void, QMetaType::QPoint,   98,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  102,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->fileOpen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->fileOpen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->fileOpen((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->fileOpen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->logSql((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->dbState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->refresh(); break;
        case 7: _t->jumpToRow((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QByteArray(*)>(_a[3]))); break;
        case 8: _t->switchToBrowseDataTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->switchToBrowseDataTab(); break;
        case 10: _t->populateStructure(); break;
        case 11: _t->createTreeContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->changeTreeSelection(); break;
        case 13: _t->fileNew(); break;
        case 14: _t->populateTable(); break;
        case 15: _t->clearTableBrowser(); break;
        case 16: { bool _r = _t->fileClose();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: _t->addRecord(); break;
        case 18: _t->deleteRecord(); break;
        case 19: _t->selectTableLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->navigatePrevious(); break;
        case 21: _t->navigateNext(); break;
        case 22: _t->navigateBegin(); break;
        case 23: _t->navigateEnd(); break;
        case 24: _t->navigateGoto(); break;
        case 25: _t->setRecordsetLabel(); break;
        case 26: _t->createTable(); break;
        case 27: _t->createIndex(); break;
        case 28: _t->compact(); break;
        case 29: _t->deleteObject(); break;
        case 30: _t->editObject(); break;
        case 31: _t->helpWhatsThis(); break;
        case 32: _t->helpAbout(); break;
        case 33: _t->updateRecordText((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 34: _t->toggleEditDock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->dataTableSelectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 36: _t->doubleClickTable((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 37: _t->executeQuery(); break;
        case 38: _t->importTableFromCSV(); break;
        case 39: _t->exportTableToCSV(); break;
        case 40: _t->exportTableToJson(); break;
        case 41: _t->fileSave(); break;
        case 42: _t->fileRevert(); break;
        case 43: _t->on_actionSave_Remote_triggered(); break;
        case 44: _t->exportDatabaseToSQL(); break;
        case 45: _t->importDatabaseFromSQL(); break;
        case 46: _t->openPreferences(); break;
        case 47: _t->openRecentFile(); break;
        case 48: _t->loadPragmas(); break;
        case 49: _t->updatePragmaUi(); break;
        case 50: _t->savePragmas(); break;
        case 51: _t->mainTabSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->browseTableHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: { uint _r = _t->openSqlTab((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 54: { uint _r = _t->openSqlTab();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 55: _t->closeSqlTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 56: _t->closeSqlTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->openSqlFile(); break;
        case 58: _t->saveSqlFile(); break;
        case 59: _t->saveSqlFileAs(); break;
        case 60: _t->loadExtension(); break;
        case 61: _t->reloadSettings(); break;
        case 62: _t->checkNewVersion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 63: _t->on_actionWiki_triggered(); break;
        case 64: _t->on_actionBug_report_triggered(); break;
        case 65: _t->on_actionSqlCipherFaq_triggered(); break;
        case 66: _t->on_actionWebsite_triggered(); break;
        case 67: _t->updateBrowseDataColumnWidth((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 68: { bool _r = _t->loadProject((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 69: { bool _r = _t->loadProject((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 70: { bool _r = _t->loadProject();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 71: _t->saveProject(); break;
        case 72: _t->fileAttach(); break;
        case 73: _t->updateFilter((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 74: _t->editEncryption(); break;
        case 75: _t->on_buttonClearFilters_clicked(); break;
        case 76: _t->copyCurrentCreateStatement(); break;
        case 77: _t->showDataColumnPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 78: _t->showRecordPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 79: _t->editDataColumnDisplayFormat(); break;
        case 80: _t->showRowidColumn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->browseDataSetTableEncoding((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->browseDataSetTableEncoding(); break;
        case 83: _t->browseDataSetDefaultTableEncoding(); break;
        case 84: _t->fileOpenReadOnly(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 85)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 85;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 85)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 85;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
