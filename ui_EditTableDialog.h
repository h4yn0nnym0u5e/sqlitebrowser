/********************************************************************************
** Form generated from reading UI file 'EditTableDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTABLEDIALOG_H
#define UI_EDITTABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sqltextedit.h"

QT_BEGIN_NAMESPACE

class Ui_EditTableDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupTable;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *editTableName;
    QToolButton *buttonMore;
    QWidget *widgetExtension;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkWithoutRowid;
    QCheckBox *checkTemporary;
    QGroupBox *groupFields;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *addFieldButton;
    QToolButton *removeFieldButton;
    QToolButton *buttonMoveUp;
    QToolButton *buttonMoveDown;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    SqlTextEdit *sqlTextEdit;
    QLabel *labelEditWarning;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditTableDialog)
    {
        if (EditTableDialog->objectName().isEmpty())
            EditTableDialog->setObjectName(QStringLiteral("EditTableDialog"));
        EditTableDialog->resize(650, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/table"), QSize(), QIcon::Normal, QIcon::Off);
        EditTableDialog->setWindowIcon(icon);
        EditTableDialog->setSizeGripEnabled(true);
        verticalLayout_2 = new QVBoxLayout(EditTableDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupTable = new QGroupBox(EditTableDialog);
        groupTable->setObjectName(QStringLiteral("groupTable"));
        verticalLayout_3 = new QVBoxLayout(groupTable);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        editTableName = new QLineEdit(groupTable);
        editTableName->setObjectName(QStringLiteral("editTableName"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        editTableName->setFont(font);

        verticalLayout_3->addWidget(editTableName);

        buttonMore = new QToolButton(groupTable);
        buttonMore->setObjectName(QStringLiteral("buttonMore"));
        buttonMore->setCheckable(true);
        buttonMore->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMore->setArrowType(Qt::DownArrow);

        verticalLayout_3->addWidget(buttonMore);

        widgetExtension = new QWidget(groupTable);
        widgetExtension->setObjectName(QStringLiteral("widgetExtension"));
        verticalLayout_5 = new QVBoxLayout(widgetExtension);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        checkWithoutRowid = new QCheckBox(widgetExtension);
        checkWithoutRowid->setObjectName(QStringLiteral("checkWithoutRowid"));

        verticalLayout_5->addWidget(checkWithoutRowid);

        checkTemporary = new QCheckBox(widgetExtension);
        checkTemporary->setObjectName(QStringLiteral("checkTemporary"));

        verticalLayout_5->addWidget(checkTemporary);


        verticalLayout_3->addWidget(widgetExtension);


        verticalLayout_2->addWidget(groupTable);

        groupFields = new QGroupBox(EditTableDialog);
        groupFields->setObjectName(QStringLiteral("groupFields"));
        verticalLayout = new QVBoxLayout(groupFields);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addFieldButton = new QToolButton(groupFields);
        addFieldButton->setObjectName(QStringLiteral("addFieldButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/field_add"), QSize(), QIcon::Normal, QIcon::Off);
        addFieldButton->setIcon(icon1);
        addFieldButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        addFieldButton->setAutoRaise(true);

        horizontalLayout->addWidget(addFieldButton);

        removeFieldButton = new QToolButton(groupFields);
        removeFieldButton->setObjectName(QStringLiteral("removeFieldButton"));
        removeFieldButton->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/field_delete"), QSize(), QIcon::Normal, QIcon::Off);
        removeFieldButton->setIcon(icon2);
        removeFieldButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        removeFieldButton->setAutoRaise(true);

        horizontalLayout->addWidget(removeFieldButton);

        buttonMoveUp = new QToolButton(groupFields);
        buttonMoveUp->setObjectName(QStringLiteral("buttonMoveUp"));
        buttonMoveUp->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/up"), QSize(), QIcon::Normal, QIcon::Off);
        buttonMoveUp->setIcon(icon3);
        buttonMoveUp->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMoveUp->setAutoRaise(true);

        horizontalLayout->addWidget(buttonMoveUp);

        buttonMoveDown = new QToolButton(groupFields);
        buttonMoveDown->setObjectName(QStringLiteral("buttonMoveDown"));
        buttonMoveDown->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/down"), QSize(), QIcon::Normal, QIcon::Off);
        buttonMoveDown->setIcon(icon4);
        buttonMoveDown->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        buttonMoveDown->setAutoRaise(true);

        horizontalLayout->addWidget(buttonMoveDown);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        widget = new QWidget(groupFields);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setMinimumSize(QSize(0, 140));
        treeWidget->setRootIsDecorated(false);
        splitter->addWidget(treeWidget);
        sqlTextEdit = new SqlTextEdit(splitter);
        sqlTextEdit->setObjectName(QStringLiteral("sqlTextEdit"));
        sqlTextEdit->setReadOnly(true);
        splitter->addWidget(sqlTextEdit);

        verticalLayout_4->addWidget(splitter);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(groupFields);

        labelEditWarning = new QLabel(EditTableDialog);
        labelEditWarning->setObjectName(QStringLiteral("labelEditWarning"));
        labelEditWarning->setWordWrap(true);

        verticalLayout_2->addWidget(labelEditWarning);

        buttonBox = new QDialogButtonBox(EditTableDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(editTableName, buttonMore);
        QWidget::setTabOrder(buttonMore, checkWithoutRowid);
        QWidget::setTabOrder(checkWithoutRowid, checkTemporary);
        QWidget::setTabOrder(checkTemporary, addFieldButton);
        QWidget::setTabOrder(addFieldButton, removeFieldButton);
        QWidget::setTabOrder(removeFieldButton, buttonMoveUp);
        QWidget::setTabOrder(buttonMoveUp, buttonMoveDown);
        QWidget::setTabOrder(buttonMoveDown, treeWidget);
        QWidget::setTabOrder(treeWidget, sqlTextEdit);

        retranslateUi(EditTableDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditTableDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditTableDialog, SLOT(reject()));
        QObject::connect(treeWidget, SIGNAL(itemSelectionChanged()), EditTableDialog, SLOT(fieldSelectionChanged()));
        QObject::connect(addFieldButton, SIGNAL(clicked()), EditTableDialog, SLOT(addField()));
        QObject::connect(removeFieldButton, SIGNAL(clicked()), EditTableDialog, SLOT(removeField()));
        QObject::connect(editTableName, SIGNAL(textChanged(QString)), EditTableDialog, SLOT(checkInput()));
        QObject::connect(buttonMoveUp, SIGNAL(clicked()), EditTableDialog, SLOT(moveUp()));
        QObject::connect(buttonMoveDown, SIGNAL(clicked()), EditTableDialog, SLOT(moveDown()));
        QObject::connect(buttonMore, SIGNAL(toggled(bool)), widgetExtension, SLOT(setVisible(bool)));
        QObject::connect(checkWithoutRowid, SIGNAL(toggled(bool)), EditTableDialog, SLOT(setWithoutRowid(bool)));
        QObject::connect(treeWidget, SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)), EditTableDialog, SLOT(fieldSelectionChanged()));
        QObject::connect(checkTemporary, SIGNAL(toggled(bool)), EditTableDialog, SLOT(setTemporary(bool)));

        QMetaObject::connectSlotsByName(EditTableDialog);
    } // setupUi

    void retranslateUi(QDialog *EditTableDialog)
    {
        EditTableDialog->setWindowTitle(QApplication::translate("EditTableDialog", "Edit table definition", Q_NULLPTR));
        groupTable->setTitle(QApplication::translate("EditTableDialog", "Table", Q_NULLPTR));
        buttonMore->setText(QApplication::translate("EditTableDialog", "Advanced", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkWithoutRowid->setToolTip(QApplication::translate("EditTableDialog", "Make this a 'WITHOUT rowid' table. Setting this flag requires a field of type INTEGER with the primary key flag set and the auto increment flag unset.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkWithoutRowid->setText(QApplication::translate("EditTableDialog", "Without Rowid", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkTemporary->setToolTip(QApplication::translate("EditTableDialog", "Set this to create a temporary table that is deleted when closing the database.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkTemporary->setText(QApplication::translate("EditTableDialog", "Temporary table", Q_NULLPTR));
        groupFields->setTitle(QApplication::translate("EditTableDialog", "Fields", Q_NULLPTR));
        addFieldButton->setText(QApplication::translate("EditTableDialog", "Add field", Q_NULLPTR));
        removeFieldButton->setText(QApplication::translate("EditTableDialog", "Remove field", Q_NULLPTR));
        buttonMoveUp->setText(QApplication::translate("EditTableDialog", "Move field up", Q_NULLPTR));
        buttonMoveDown->setText(QApplication::translate("EditTableDialog", "Move field down", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(8, QApplication::translate("EditTableDialog", "Foreign Key", Q_NULLPTR));
        ___qtreewidgetitem->setText(7, QApplication::translate("EditTableDialog", "Check", Q_NULLPTR));
        ___qtreewidgetitem->setText(6, QApplication::translate("EditTableDialog", "Default", Q_NULLPTR));
        ___qtreewidgetitem->setText(5, QApplication::translate("EditTableDialog", "U", Q_NULLPTR));
        ___qtreewidgetitem->setText(4, QApplication::translate("EditTableDialog", "AI", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("EditTableDialog", "PK", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("EditTableDialog", "Not null", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("EditTableDialog", "Type", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("EditTableDialog", "Name", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(7, QApplication::translate("EditTableDialog", "Check constraint", Q_NULLPTR));
        ___qtreewidgetitem->setToolTip(6, QApplication::translate("EditTableDialog", "Default value", Q_NULLPTR));
        ___qtreewidgetitem->setToolTip(5, QApplication::translate("EditTableDialog", "Unique", Q_NULLPTR));
        ___qtreewidgetitem->setToolTip(4, QApplication::translate("EditTableDialog", "Autoincrement", Q_NULLPTR));
        ___qtreewidgetitem->setToolTip(3, QApplication::translate("EditTableDialog", "Primary key", Q_NULLPTR));
        ___qtreewidgetitem->setToolTip(2, QApplication::translate("EditTableDialog", "Not null", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelEditWarning->setText(QApplication::translate("EditTableDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#ff0000;\">Warning: </span>There is something with this table definition that our parser doesn't fully understand. Modifying and saving this table might result it in problems.</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditTableDialog: public Ui_EditTableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTABLEDIALOG_H
