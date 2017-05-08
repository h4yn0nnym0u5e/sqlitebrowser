/********************************************************************************
** Form generated from reading UI file 'VacuumDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VACUUMDIALOG_H
#define UI_VACUUMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VacuumDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelSavepointWarning;
    QLabel *label;
    QTreeWidget *treeSelectedObjects;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VacuumDialog)
    {
        if (VacuumDialog->objectName().isEmpty())
            VacuumDialog->setObjectName(QStringLiteral("VacuumDialog"));
        VacuumDialog->resize(475, 439);
        verticalLayout = new QVBoxLayout(VacuumDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelSavepointWarning = new QLabel(VacuumDialog);
        labelSavepointWarning->setObjectName(QStringLiteral("labelSavepointWarning"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelSavepointWarning->setFont(font);
        labelSavepointWarning->setWordWrap(true);
        labelSavepointWarning->setMargin(5);

        verticalLayout->addWidget(labelSavepointWarning);

        label = new QLabel(VacuumDialog);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        treeSelectedObjects = new QTreeWidget(VacuumDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeSelectedObjects->setHeaderItem(__qtreewidgetitem);
        treeSelectedObjects->setObjectName(QStringLiteral("treeSelectedObjects"));
        treeSelectedObjects->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeSelectedObjects->setProperty("showDropIndicator", QVariant(false));
        treeSelectedObjects->setSelectionMode(QAbstractItemView::ExtendedSelection);
        treeSelectedObjects->setRootIsDecorated(false);
        treeSelectedObjects->setItemsExpandable(false);
        treeSelectedObjects->setExpandsOnDoubleClick(false);
        treeSelectedObjects->header()->setVisible(false);

        verticalLayout->addWidget(treeSelectedObjects);

        buttonBox = new QDialogButtonBox(VacuumDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(treeSelectedObjects);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(treeSelectedObjects, buttonBox);

        retranslateUi(VacuumDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VacuumDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VacuumDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VacuumDialog);
    } // setupUi

    void retranslateUi(QDialog *VacuumDialog)
    {
        VacuumDialog->setWindowTitle(QApplication::translate("VacuumDialog", "Compact Database", Q_NULLPTR));
        labelSavepointWarning->setText(QApplication::translate("VacuumDialog", "Warning: Compacting the database will commit all changes you made.", Q_NULLPTR));
        label->setText(QApplication::translate("VacuumDialog", "Please select the objects to compact:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VacuumDialog: public Ui_VacuumDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VACUUMDIALOG_H
