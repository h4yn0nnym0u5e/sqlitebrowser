/********************************************************************************
** Form generated from reading UI file 'CipherDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIPHERDIALOG_H
#define UI_CIPHERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CipherDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDialogDescription;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *labelPassword;
    QLineEdit *editPassword;
    QLabel *labelPassword2;
    QLineEdit *editPassword2;
    QLabel *label_3;
    QSpinBox *spinPageSize;
    QVBoxLayout *verticalLayout;
    QComboBox *comboKeyFormat;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CipherDialog)
    {
        if (CipherDialog->objectName().isEmpty())
            CipherDialog->setObjectName(QStringLiteral("CipherDialog"));
        CipherDialog->resize(712, 183);
        verticalLayout_2 = new QVBoxLayout(CipherDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelDialogDescription = new QLabel(CipherDialog);
        labelDialogDescription->setObjectName(QStringLiteral("labelDialogDescription"));

        verticalLayout_2->addWidget(labelDialogDescription);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelPassword = new QLabel(CipherDialog);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelPassword);

        editPassword = new QLineEdit(CipherDialog);
        editPassword->setObjectName(QStringLiteral("editPassword"));
        editPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, editPassword);

        labelPassword2 = new QLabel(CipherDialog);
        labelPassword2->setObjectName(QStringLiteral("labelPassword2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPassword2);

        editPassword2 = new QLineEdit(CipherDialog);
        editPassword2->setObjectName(QStringLiteral("editPassword2"));
        editPassword2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, editPassword2);

        label_3 = new QLabel(CipherDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinPageSize = new QSpinBox(CipherDialog);
        spinPageSize->setObjectName(QStringLiteral("spinPageSize"));
        spinPageSize->setMinimum(512);
        spinPageSize->setMaximum(65536);
        spinPageSize->setValue(1024);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinPageSize);


        horizontalLayout->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        comboKeyFormat = new QComboBox(CipherDialog);
        comboKeyFormat->setObjectName(QStringLiteral("comboKeyFormat"));

        verticalLayout->addWidget(comboKeyFormat);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(CipherDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        labelPassword->setBuddy(editPassword);
        labelPassword2->setBuddy(editPassword2);
        label_3->setBuddy(spinPageSize);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboKeyFormat, editPassword);
        QWidget::setTabOrder(editPassword, editPassword2);
        QWidget::setTabOrder(editPassword2, spinPageSize);

        retranslateUi(CipherDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CipherDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CipherDialog, SLOT(reject()));
        QObject::connect(editPassword, SIGNAL(textChanged(QString)), CipherDialog, SLOT(checkInputFields()));
        QObject::connect(editPassword2, SIGNAL(textChanged(QString)), CipherDialog, SLOT(checkInputFields()));
        QObject::connect(comboKeyFormat, SIGNAL(currentIndexChanged(int)), CipherDialog, SLOT(checkInputFields()));

        QMetaObject::connectSlotsByName(CipherDialog);
    } // setupUi

    void retranslateUi(QDialog *CipherDialog)
    {
        CipherDialog->setWindowTitle(QApplication::translate("CipherDialog", "SQLCipher encryption", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("CipherDialog", "&Password", Q_NULLPTR));
        labelPassword2->setText(QApplication::translate("CipherDialog", "&Reenter password", Q_NULLPTR));
        label_3->setText(QApplication::translate("CipherDialog", "Page si&ze", Q_NULLPTR));
        comboKeyFormat->clear();
        comboKeyFormat->insertItems(0, QStringList()
         << QApplication::translate("CipherDialog", "Passphrase", Q_NULLPTR)
         << QApplication::translate("CipherDialog", "Raw key", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class CipherDialog: public Ui_CipherDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIPHERDIALOG_H
