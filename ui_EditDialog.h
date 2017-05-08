/********************************************************************************
** Form generated from reading UI file 'EditDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *labelMode;
    QComboBox *comboMode;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonImport;
    QPushButton *buttonExport;
    QPushButton *buttonNull;
    QStackedWidget *editorStack;
    QWidget *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *editorText;
    QWidget *editorBinary;
    QScrollArea *editorImageScrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *editorImage;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelType;
    QLabel *labelSize;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonApply;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QStringLiteral("EditDialog"));
        EditDialog->resize(618, 382);
        verticalLayout_5 = new QVBoxLayout(EditDialog);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelMode = new QLabel(EditDialog);
        labelMode->setObjectName(QStringLiteral("labelMode"));
        labelMode->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(labelMode);

        comboMode = new QComboBox(EditDialog);
        comboMode->setObjectName(QStringLiteral("comboMode"));
        comboMode->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(comboMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonImport = new QPushButton(EditDialog);
        buttonImport->setObjectName(QStringLiteral("buttonImport"));
        buttonImport->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(buttonImport);

        buttonExport = new QPushButton(EditDialog);
        buttonExport->setObjectName(QStringLiteral("buttonExport"));
        buttonExport->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(buttonExport);

        buttonNull = new QPushButton(EditDialog);
        buttonNull->setObjectName(QStringLiteral("buttonNull"));
        buttonNull->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(buttonNull);


        verticalLayout_5->addLayout(horizontalLayout);

        editorStack = new QStackedWidget(EditDialog);
        editorStack->setObjectName(QStringLiteral("editorStack"));
        verticalLayout_4 = new QWidget();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout(verticalLayout_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        editorText = new QTextEdit(verticalLayout_4);
        editorText->setObjectName(QStringLiteral("editorText"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        editorText->setFont(font);
        editorText->setAcceptRichText(false);

        verticalLayout_3->addWidget(editorText);

        editorStack->addWidget(verticalLayout_4);
        editorBinary = new QWidget();
        editorBinary->setObjectName(QStringLiteral("editorBinary"));
        editorStack->addWidget(editorBinary);
        editorImageScrollArea = new QScrollArea();
        editorImageScrollArea->setObjectName(QStringLiteral("editorImageScrollArea"));
        editorImageScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 83, 40));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        editorImage = new QLabel(scrollAreaWidgetContents);
        editorImage->setObjectName(QStringLiteral("editorImage"));

        verticalLayout_2->addWidget(editorImage);

        editorImageScrollArea->setWidget(scrollAreaWidgetContents);
        editorStack->addWidget(editorImageScrollArea);

        verticalLayout_5->addWidget(editorStack);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelType = new QLabel(EditDialog);
        labelType->setObjectName(QStringLiteral("labelType"));

        verticalLayout->addWidget(labelType);

        labelSize = new QLabel(EditDialog);
        labelSize->setObjectName(QStringLiteral("labelSize"));

        verticalLayout->addWidget(labelSize);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonApply = new QPushButton(EditDialog);
        buttonApply->setObjectName(QStringLiteral("buttonApply"));

        horizontalLayout_2->addWidget(buttonApply);


        verticalLayout_5->addLayout(horizontalLayout_2);

        QWidget::setTabOrder(buttonExport, buttonNull);

        retranslateUi(EditDialog);
        QObject::connect(buttonImport, SIGNAL(clicked()), EditDialog, SLOT(importData()));
        QObject::connect(buttonExport, SIGNAL(clicked()), EditDialog, SLOT(exportData()));
        QObject::connect(editorStack, SIGNAL(currentChanged(int)), comboMode, SLOT(setCurrentIndex(int)));
        QObject::connect(buttonApply, SIGNAL(clicked()), EditDialog, SLOT(accept()));
        QObject::connect(comboMode, SIGNAL(currentIndexChanged(int)), EditDialog, SLOT(editModeChanged(int)));
        QObject::connect(buttonNull, SIGNAL(clicked()), EditDialog, SLOT(setNull()));
        QObject::connect(editorText, SIGNAL(textChanged()), EditDialog, SLOT(editTextChanged()));

        editorStack->setCurrentIndex(0);
        buttonApply->setDefault(true);


        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QApplication::translate("EditDialog", "Edit database cell", Q_NULLPTR));
        labelMode->setText(QApplication::translate("EditDialog", "Mode:", Q_NULLPTR));
        comboMode->clear();
        comboMode->insertItems(0, QStringList()
         << QApplication::translate("EditDialog", "Text", Q_NULLPTR)
         << QApplication::translate("EditDialog", "Binary", Q_NULLPTR)
         << QApplication::translate("EditDialog", "Image", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        buttonImport->setToolTip(QApplication::translate("EditDialog", "Import text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonImport->setWhatsThis(QApplication::translate("EditDialog", "Opens a file dialog used to import text to this database cell.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        buttonImport->setText(QApplication::translate("EditDialog", "&Import", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonExport->setToolTip(QApplication::translate("EditDialog", "Export text", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonExport->setWhatsThis(QApplication::translate("EditDialog", "Opens a file dialog used to export the contents of this database cell to a text file.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        buttonExport->setText(QApplication::translate("EditDialog", "&Export", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonNull->setToolTip(QApplication::translate("EditDialog", "Set this cell to NULL", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        buttonNull->setWhatsThis(QApplication::translate("EditDialog", "Erases the contents of the cell", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        buttonNull->setText(QApplication::translate("EditDialog", "Set as &NULL", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        editorText->setWhatsThis(QApplication::translate("EditDialog", "This area displays information about the data present in this database cell", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        editorImage->setText(QString());
        labelType->setText(QApplication::translate("EditDialog", "Type of data currently in cell", Q_NULLPTR));
        labelSize->setText(QApplication::translate("EditDialog", "Size of data currently in table", Q_NULLPTR));
        buttonApply->setText(QApplication::translate("EditDialog", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
