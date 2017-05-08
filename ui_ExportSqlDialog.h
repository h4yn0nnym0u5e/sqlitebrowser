/********************************************************************************
** Form generated from reading UI file 'ExportSqlDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTSQLDIALOG_H
#define UI_EXPORTSQLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ExportSqlDialog
{
public:
    QGridLayout *gridLayout_2;
    QDialogButtonBox *buttonBox;
    QFormLayout *formLayout;
    QLabel *labelTable;
    QListWidget *listTables;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonSelectAll;
    QPushButton *buttonDeselectAll;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QCheckBox *checkColNames;
    QCheckBox *checkMultiple;
    QSpacerItem *verticalSpacer;
    QComboBox *comboWhat;

    void setupUi(QDialog *ExportSqlDialog)
    {
        if (ExportSqlDialog->objectName().isEmpty())
            ExportSqlDialog->setObjectName(QStringLiteral("ExportSqlDialog"));
        ExportSqlDialog->resize(497, 338);
        gridLayout_2 = new QGridLayout(ExportSqlDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buttonBox = new QDialogButtonBox(ExportSqlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelTable = new QLabel(ExportSqlDialog);
        labelTable->setObjectName(QStringLiteral("labelTable"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelTable);

        listTables = new QListWidget(ExportSqlDialog);
        listTables->setObjectName(QStringLiteral("listTables"));
        listTables->setSelectionMode(QAbstractItemView::MultiSelection);
        listTables->setSortingEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, listTables);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout->setContentsMargins(-1, 10, -1, -1);
        buttonSelectAll = new QPushButton(ExportSqlDialog);
        buttonSelectAll->setObjectName(QStringLiteral("buttonSelectAll"));

        horizontalLayout->addWidget(buttonSelectAll);

        buttonDeselectAll = new QPushButton(ExportSqlDialog);
        buttonDeselectAll->setObjectName(QStringLiteral("buttonDeselectAll"));

        horizontalLayout->addWidget(buttonDeselectAll);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        groupBox = new QGroupBox(ExportSqlDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkColNames = new QCheckBox(groupBox);
        checkColNames->setObjectName(QStringLiteral("checkColNames"));
        checkColNames->setChecked(true);

        gridLayout->addWidget(checkColNames, 0, 0, 1, 1);

        checkMultiple = new QCheckBox(groupBox);
        checkMultiple->setObjectName(QStringLiteral("checkMultiple"));

        gridLayout->addWidget(checkMultiple, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        comboWhat = new QComboBox(groupBox);
        comboWhat->setObjectName(QStringLiteral("comboWhat"));

        gridLayout->addWidget(comboWhat, 2, 0, 1, 1);


        formLayout->setWidget(2, QFormLayout::SpanningRole, groupBox);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        labelTable->setBuddy(listTables);
#endif // QT_NO_SHORTCUT

        retranslateUi(ExportSqlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportSqlDialog, SLOT(accept()));
        QObject::connect(buttonDeselectAll, SIGNAL(clicked()), ExportSqlDialog, SLOT(doDeselectAll()));
        QObject::connect(buttonSelectAll, SIGNAL(clicked()), ExportSqlDialog, SLOT(doSelectAll()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportSqlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportSqlDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportSqlDialog)
    {
        ExportSqlDialog->setWindowTitle(QApplication::translate("ExportSqlDialog", "Export SQL...", Q_NULLPTR));
        labelTable->setText(QApplication::translate("ExportSqlDialog", "Tab&le(s)", Q_NULLPTR));
        buttonSelectAll->setText(QApplication::translate("ExportSqlDialog", "Select All", Q_NULLPTR));
        buttonDeselectAll->setText(QApplication::translate("ExportSqlDialog", "Deselect All", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ExportSqlDialog", "&Options", Q_NULLPTR));
        checkColNames->setText(QApplication::translate("ExportSqlDialog", "Keep column names in INSERT INTO", Q_NULLPTR));
        checkMultiple->setText(QApplication::translate("ExportSqlDialog", "Multiple rows (VALUES) per INSERT statement", Q_NULLPTR));
        comboWhat->clear();
        comboWhat->insertItems(0, QStringList()
         << QApplication::translate("ExportSqlDialog", "Export everything", Q_NULLPTR)
         << QApplication::translate("ExportSqlDialog", "Export schema only", Q_NULLPTR)
         << QApplication::translate("ExportSqlDialog", "Export data only", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class ExportSqlDialog: public Ui_ExportSqlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTSQLDIALOG_H
