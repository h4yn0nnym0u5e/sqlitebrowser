/********************************************************************************
** Form generated from reading UI file 'ColumnDisplayFormatDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNDISPLAYFORMATDIALOG_H
#define UI_COLUMNDISPLAYFORMATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_ColumnDisplayFormatDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDisplayFormat;
    QComboBox *comboDisplayFormat;
    SqlTextEdit *editDisplayFormat;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColumnDisplayFormatDialog)
    {
        if (ColumnDisplayFormatDialog->objectName().isEmpty())
            ColumnDisplayFormatDialog->setObjectName(QStringLiteral("ColumnDisplayFormatDialog"));
        ColumnDisplayFormatDialog->resize(624, 205);
        verticalLayout = new QVBoxLayout(ColumnDisplayFormatDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(ColumnDisplayFormatDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelDisplayFormat = new QLabel(groupBox);
        labelDisplayFormat->setObjectName(QStringLiteral("labelDisplayFormat"));

        verticalLayout_2->addWidget(labelDisplayFormat);

        comboDisplayFormat = new QComboBox(groupBox);
        comboDisplayFormat->setObjectName(QStringLiteral("comboDisplayFormat"));

        verticalLayout_2->addWidget(comboDisplayFormat);

        editDisplayFormat = new SqlTextEdit(groupBox);
        editDisplayFormat->setObjectName(QStringLiteral("editDisplayFormat"));
        editDisplayFormat->setReadOnly(true);

        verticalLayout_2->addWidget(editDisplayFormat);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(ColumnDisplayFormatDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(comboDisplayFormat, editDisplayFormat);

        retranslateUi(ColumnDisplayFormatDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ColumnDisplayFormatDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ColumnDisplayFormatDialog, SLOT(reject()));
        QObject::connect(comboDisplayFormat, SIGNAL(currentIndexChanged(int)), ColumnDisplayFormatDialog, SLOT(updateSqlCode()));

        QMetaObject::connectSlotsByName(ColumnDisplayFormatDialog);
    } // setupUi

    void retranslateUi(QDialog *ColumnDisplayFormatDialog)
    {
        ColumnDisplayFormatDialog->setWindowTitle(QApplication::translate("ColumnDisplayFormatDialog", "Choose display format", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ColumnDisplayFormatDialog", "Display format", Q_NULLPTR));
        labelDisplayFormat->setText(QApplication::translate("ColumnDisplayFormatDialog", "Choose a display format for the column '%1' which is applied to each value prior to showing it.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColumnDisplayFormatDialog: public Ui_ColumnDisplayFormatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNDISPLAYFORMATDIALOG_H
