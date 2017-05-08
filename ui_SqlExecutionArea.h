/********************************************************************************
** Form generated from reading UI file 'SqlExecutionArea.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLEXECUTIONAREA_H
#define UI_SQLEXECUTIONAREA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "ExtendedTableWidget.h"
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_SqlExecutionArea
{
public:
    QAction *actionExportCsv;
    QAction *actionSaveAsView;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    SqlTextEdit *editEditor;
    ExtendedTableWidget *tableResult;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *editErrors;
    QToolButton *buttonSave;

    void setupUi(QWidget *SqlExecutionArea)
    {
        if (SqlExecutionArea->objectName().isEmpty())
            SqlExecutionArea->setObjectName(QStringLiteral("SqlExecutionArea"));
        SqlExecutionArea->resize(365, 482);
        actionExportCsv = new QAction(SqlExecutionArea);
        actionExportCsv->setObjectName(QStringLiteral("actionExportCsv"));
        actionSaveAsView = new QAction(SqlExecutionArea);
        actionSaveAsView->setObjectName(QStringLiteral("actionSaveAsView"));
        horizontalLayout_2 = new QHBoxLayout(SqlExecutionArea);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        splitter = new QSplitter(SqlExecutionArea);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        editEditor = new SqlTextEdit(splitter);
        editEditor->setObjectName(QStringLiteral("editEditor"));
        splitter->addWidget(editEditor);
        tableResult = new ExtendedTableWidget(splitter);
        tableResult->setObjectName(QStringLiteral("tableResult"));
        tableResult->setEditTriggers(QAbstractItemView::NoEditTriggers);
        splitter->addWidget(tableResult);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        editErrors = new QTextEdit(widget);
        editErrors->setObjectName(QStringLiteral("editErrors"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editErrors->sizePolicy().hasHeightForWidth());
        editErrors->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(8);
        editErrors->setFont(font);
        editErrors->setAcceptDrops(false);
        editErrors->setFrameShape(QFrame::StyledPanel);
        editErrors->setFrameShadow(QFrame::Sunken);
        editErrors->setTabChangesFocus(true);
        editErrors->setUndoRedoEnabled(false);
        editErrors->setReadOnly(true);

        horizontalLayout->addWidget(editErrors);

        buttonSave = new QToolButton(widget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));
        buttonSave->setEnabled(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/save_table"), QSize(), QIcon::Normal, QIcon::Off);
        buttonSave->setIcon(icon);
        buttonSave->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(buttonSave);

        splitter->addWidget(widget);

        horizontalLayout_2->addWidget(splitter);

        QWidget::setTabOrder(editEditor, tableResult);
        QWidget::setTabOrder(tableResult, editErrors);
        QWidget::setTabOrder(editErrors, buttonSave);

        retranslateUi(SqlExecutionArea);
        QObject::connect(actionExportCsv, SIGNAL(triggered()), SqlExecutionArea, SLOT(saveAsCsv()));
        QObject::connect(actionSaveAsView, SIGNAL(triggered()), SqlExecutionArea, SLOT(saveAsView()));

        QMetaObject::connectSlotsByName(SqlExecutionArea);
    } // setupUi

    void retranslateUi(QWidget *SqlExecutionArea)
    {
        SqlExecutionArea->setWindowTitle(QApplication::translate("SqlExecutionArea", "Form", Q_NULLPTR));
        actionExportCsv->setText(QApplication::translate("SqlExecutionArea", "Export to &CSV", Q_NULLPTR));
        actionSaveAsView->setText(QApplication::translate("SqlExecutionArea", "Save as &view", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSaveAsView->setToolTip(QApplication::translate("SqlExecutionArea", "Save as view", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        editErrors->setToolTip(QApplication::translate("SqlExecutionArea", "Results of the last executed statements", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        editErrors->setWhatsThis(QApplication::translate("SqlExecutionArea", "This field shows the results and status codes of the last executed statements.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class SqlExecutionArea: public Ui_SqlExecutionArea {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLEXECUTIONAREA_H
