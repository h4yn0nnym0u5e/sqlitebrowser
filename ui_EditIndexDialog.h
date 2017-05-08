/********************************************************************************
** Form generated from reading UI file 'EditIndexDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITINDEXDIALOG_H
#define UI_EDITINDEXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditIndexDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelIndexName;
    QLineEdit *editIndexName;
    QLabel *labelTableName;
    QComboBox *comboTableName;
    QLabel *labelIndexUnique;
    QCheckBox *checkIndexUnique;
    QLabel *labelIndexColumns;
    QSplitter *splitter;
    QTableWidget *tableIndexColumns;
    SqlTextEdit *sqlTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditIndexDialog)
    {
        if (EditIndexDialog->objectName().isEmpty())
            EditIndexDialog->setObjectName(QStringLiteral("EditIndexDialog"));
        EditIndexDialog->resize(610, 504);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/index_create"), QSize(), QIcon::Normal, QIcon::Off);
        EditIndexDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(EditIndexDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelIndexName = new QLabel(EditIndexDialog);
        labelIndexName->setObjectName(QStringLiteral("labelIndexName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelIndexName);

        editIndexName = new QLineEdit(EditIndexDialog);
        editIndexName->setObjectName(QStringLiteral("editIndexName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editIndexName);

        labelTableName = new QLabel(EditIndexDialog);
        labelTableName->setObjectName(QStringLiteral("labelTableName"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelTableName);

        comboTableName = new QComboBox(EditIndexDialog);
        comboTableName->setObjectName(QStringLiteral("comboTableName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboTableName);

        labelIndexUnique = new QLabel(EditIndexDialog);
        labelIndexUnique->setObjectName(QStringLiteral("labelIndexUnique"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelIndexUnique);

        checkIndexUnique = new QCheckBox(EditIndexDialog);
        checkIndexUnique->setObjectName(QStringLiteral("checkIndexUnique"));

        formLayout->setWidget(2, QFormLayout::FieldRole, checkIndexUnique);

        labelIndexColumns = new QLabel(EditIndexDialog);
        labelIndexColumns->setObjectName(QStringLiteral("labelIndexColumns"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelIndexColumns);

        splitter = new QSplitter(EditIndexDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableIndexColumns = new QTableWidget(splitter);
        if (tableIndexColumns->columnCount() < 3)
            tableIndexColumns->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableIndexColumns->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableIndexColumns->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableIndexColumns->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableIndexColumns->setObjectName(QStringLiteral("tableIndexColumns"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tableIndexColumns->sizePolicy().hasHeightForWidth());
        tableIndexColumns->setSizePolicy(sizePolicy);
        tableIndexColumns->setMinimumSize(QSize(0, 250));
        tableIndexColumns->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableIndexColumns->setProperty("showDropIndicator", QVariant(false));
        tableIndexColumns->setAlternatingRowColors(true);
        tableIndexColumns->setSelectionMode(QAbstractItemView::NoSelection);
        splitter->addWidget(tableIndexColumns);
        tableIndexColumns->verticalHeader()->setVisible(false);
        sqlTextEdit = new SqlTextEdit(splitter);
        sqlTextEdit->setObjectName(QStringLiteral("sqlTextEdit"));
        sqlTextEdit->setMinimumSize(QSize(0, 100));
        sqlTextEdit->setReadOnly(true);
        splitter->addWidget(sqlTextEdit);

        formLayout->setWidget(3, QFormLayout::FieldRole, splitter);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(EditIndexDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelIndexName->setBuddy(editIndexName);
        labelTableName->setBuddy(comboTableName);
        labelIndexUnique->setBuddy(checkIndexUnique);
        labelIndexColumns->setBuddy(tableIndexColumns);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(editIndexName, comboTableName);
        QWidget::setTabOrder(comboTableName, checkIndexUnique);
        QWidget::setTabOrder(checkIndexUnique, tableIndexColumns);
        QWidget::setTabOrder(tableIndexColumns, buttonBox);

        retranslateUi(EditIndexDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditIndexDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditIndexDialog, SLOT(reject()));
        QObject::connect(comboTableName, SIGNAL(currentIndexChanged(QString)), EditIndexDialog, SLOT(tableChanged(QString)));
        QObject::connect(editIndexName, SIGNAL(textChanged(QString)), EditIndexDialog, SLOT(checkInput()));
        QObject::connect(tableIndexColumns, SIGNAL(cellChanged(int,int)), EditIndexDialog, SLOT(checkInput()));
        QObject::connect(checkIndexUnique, SIGNAL(toggled(bool)), EditIndexDialog, SLOT(checkInput()));

        QMetaObject::connectSlotsByName(EditIndexDialog);
    } // setupUi

    void retranslateUi(QDialog *EditIndexDialog)
    {
        EditIndexDialog->setWindowTitle(QApplication::translate("EditIndexDialog", "Edit Index Schema", Q_NULLPTR));
        labelIndexName->setText(QApplication::translate("EditIndexDialog", "&Name", Q_NULLPTR));
        labelTableName->setText(QApplication::translate("EditIndexDialog", "&Table", Q_NULLPTR));
        labelIndexUnique->setText(QApplication::translate("EditIndexDialog", "&Unique", Q_NULLPTR));
        checkIndexUnique->setText(QString());
        labelIndexColumns->setText(QApplication::translate("EditIndexDialog", "&Columns", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableIndexColumns->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditIndexDialog", "Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableIndexColumns->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditIndexDialog", "Use in Index", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableIndexColumns->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditIndexDialog", "Order", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditIndexDialog: public Ui_EditIndexDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITINDEXDIALOG_H
