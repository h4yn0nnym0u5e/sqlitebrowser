/********************************************************************************
** Form generated from reading UI file 'ExportDataDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDATADIALOG_H
#define UI_EXPORTDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportDataDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_3;
    QLabel *labelTable;
    QListWidget *listTables;
    QStackedWidget *stackFormat;
    QWidget *csv;
    QFormLayout *formLayout;
    QLabel *labelHeader;
    QCheckBox *checkHeader;
    QLabel *labelFieldSeparator;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboFieldSeparator;
    QLineEdit *editCustomSeparator;
    QSpacerItem *horizontalSpacer;
    QLabel *labelQuoteCharacter;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboQuoteCharacter;
    QLineEdit *editCustomQuote;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelNewLineCharacters;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboNewLineString;
    QLineEdit *editCustomNewLine;
    QSpacerItem *horizontalSpacer_3;
    QWidget *json;
    QFormLayout *formLayout_2;
    QLabel *label;
    QCheckBox *checkPrettyPrint;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportDataDialog)
    {
        if (ExportDataDialog->objectName().isEmpty())
            ExportDataDialog->setObjectName(QStringLiteral("ExportDataDialog"));
        ExportDataDialog->resize(527, 381);
        verticalLayout = new QVBoxLayout(ExportDataDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        labelTable = new QLabel(ExportDataDialog);
        labelTable->setObjectName(QStringLiteral("labelTable"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, labelTable);

        listTables = new QListWidget(ExportDataDialog);
        listTables->setObjectName(QStringLiteral("listTables"));
        listTables->setMinimumSize(QSize(360, 0));
        listTables->setSelectionMode(QAbstractItemView::MultiSelection);
        listTables->setSortingEnabled(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, listTables);


        verticalLayout->addLayout(formLayout_3);

        stackFormat = new QStackedWidget(ExportDataDialog);
        stackFormat->setObjectName(QStringLiteral("stackFormat"));
        csv = new QWidget();
        csv->setObjectName(QStringLiteral("csv"));
        formLayout = new QFormLayout(csv);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelHeader = new QLabel(csv);
        labelHeader->setObjectName(QStringLiteral("labelHeader"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelHeader);

        checkHeader = new QCheckBox(csv);
        checkHeader->setObjectName(QStringLiteral("checkHeader"));
        checkHeader->setChecked(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, checkHeader);

        labelFieldSeparator = new QLabel(csv);
        labelFieldSeparator->setObjectName(QStringLiteral("labelFieldSeparator"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelFieldSeparator);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboFieldSeparator = new QComboBox(csv);
        comboFieldSeparator->setObjectName(QStringLiteral("comboFieldSeparator"));
        comboFieldSeparator->setMinimumSize(QSize(180, 0));
        comboFieldSeparator->setMaximumSize(QSize(180, 16777215));

        horizontalLayout->addWidget(comboFieldSeparator);

        editCustomSeparator = new QLineEdit(csv);
        editCustomSeparator->setObjectName(QStringLiteral("editCustomSeparator"));
        editCustomSeparator->setMaxLength(1);

        horizontalLayout->addWidget(editCustomSeparator);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        labelQuoteCharacter = new QLabel(csv);
        labelQuoteCharacter->setObjectName(QStringLiteral("labelQuoteCharacter"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelQuoteCharacter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboQuoteCharacter = new QComboBox(csv);
        comboQuoteCharacter->setObjectName(QStringLiteral("comboQuoteCharacter"));
        comboQuoteCharacter->setMinimumSize(QSize(180, 0));
        comboQuoteCharacter->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_2->addWidget(comboQuoteCharacter);

        editCustomQuote = new QLineEdit(csv);
        editCustomQuote->setObjectName(QStringLiteral("editCustomQuote"));
        editCustomQuote->setMaxLength(1);

        horizontalLayout_2->addWidget(editCustomQuote);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        labelNewLineCharacters = new QLabel(csv);
        labelNewLineCharacters->setObjectName(QStringLiteral("labelNewLineCharacters"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelNewLineCharacters);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboNewLineString = new QComboBox(csv);
        comboNewLineString->setObjectName(QStringLiteral("comboNewLineString"));
        comboNewLineString->setMinimumSize(QSize(180, 0));
        comboNewLineString->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_3->addWidget(comboNewLineString);

        editCustomNewLine = new QLineEdit(csv);
        editCustomNewLine->setObjectName(QStringLiteral("editCustomNewLine"));
        editCustomNewLine->setMaxLength(5);

        horizontalLayout_3->addWidget(editCustomNewLine);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        stackFormat->addWidget(csv);
        json = new QWidget();
        json->setObjectName(QStringLiteral("json"));
        formLayout_2 = new QFormLayout(json);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(json);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        checkPrettyPrint = new QCheckBox(json);
        checkPrettyPrint->setObjectName(QStringLiteral("checkPrettyPrint"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, checkPrettyPrint);

        stackFormat->addWidget(json);

        verticalLayout->addWidget(stackFormat);

        buttonBox = new QDialogButtonBox(ExportDataDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelTable->setBuddy(listTables);
        labelHeader->setBuddy(checkHeader);
        labelFieldSeparator->setBuddy(comboFieldSeparator);
        labelQuoteCharacter->setBuddy(comboQuoteCharacter);
        label->setBuddy(checkPrettyPrint);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(listTables, checkHeader);
        QWidget::setTabOrder(checkHeader, comboFieldSeparator);
        QWidget::setTabOrder(comboFieldSeparator, editCustomSeparator);
        QWidget::setTabOrder(editCustomSeparator, comboQuoteCharacter);
        QWidget::setTabOrder(comboQuoteCharacter, editCustomQuote);

        retranslateUi(ExportDataDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportDataDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportDataDialog, SLOT(reject()));
        QObject::connect(comboFieldSeparator, SIGNAL(currentIndexChanged(int)), ExportDataDialog, SLOT(showCustomCharEdits()));
        QObject::connect(comboQuoteCharacter, SIGNAL(currentIndexChanged(int)), ExportDataDialog, SLOT(showCustomCharEdits()));
        QObject::connect(comboNewLineString, SIGNAL(currentIndexChanged(int)), ExportDataDialog, SLOT(showCustomCharEdits()));

        stackFormat->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExportDataDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDataDialog)
    {
        ExportDataDialog->setWindowTitle(QApplication::translate("ExportDataDialog", "Export data as CSV", Q_NULLPTR));
        labelTable->setText(QApplication::translate("ExportDataDialog", "Tab&le(s)", Q_NULLPTR));
        labelHeader->setText(QApplication::translate("ExportDataDialog", "Colu&mn names in first line", Q_NULLPTR));
        checkHeader->setText(QString());
        labelFieldSeparator->setText(QApplication::translate("ExportDataDialog", "Fie&ld separator", Q_NULLPTR));
        comboFieldSeparator->clear();
        comboFieldSeparator->insertItems(0, QStringList()
         << QApplication::translate("ExportDataDialog", ",", Q_NULLPTR)
         << QApplication::translate("ExportDataDialog", ";", Q_NULLPTR)
         << QApplication::translate("ExportDataDialog", "Tab", Q_NULLPTR)
         << QApplication::translate("ExportDataDialog", "|", Q_NULLPTR)
         << QApplication::translate("ExportDataDialog", "Other", Q_NULLPTR)
        );
        labelQuoteCharacter->setText(QApplication::translate("ExportDataDialog", "&Quote character", Q_NULLPTR));
        comboQuoteCharacter->clear();
        comboQuoteCharacter->insertItems(0, QStringList()
         << QApplication::translate("ExportDataDialog", "\"", Q_NULLPTR)
         << QApplication::translate("ExportDataDialog", "'", Q_NULLPTR)
         << QString()
         << QApplication::translate("ExportDataDialog", "Other", Q_NULLPTR)
        );
        labelNewLineCharacters->setText(QApplication::translate("ExportDataDialog", "New line characters", Q_NULLPTR));
        comboNewLineString->clear();
        comboNewLineString->insertItems(0, QStringList()
         << QApplication::translate("ExportDataDialog", "Windows: CR+LF (\\r\\n)", Q_NULLPTR)
         << QApplication::translate("ExportDataDialog", "Unix: LF (\\n)", Q_NULLPTR)
         << QApplication::translate("ExportDataDialog", "Other", Q_NULLPTR)
        );
        label->setText(QApplication::translate("ExportDataDialog", "Pretty print", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ExportDataDialog: public Ui_ExportDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDATADIALOG_H
