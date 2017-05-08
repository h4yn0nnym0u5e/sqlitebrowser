/********************************************************************************
** Form generated from reading UI file 'RemoteDock.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEDOCK_H
#define UI_REMOTEDOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RemoteDock
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBrowseMode;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *comboUser;
    QToolButton *buttonLogin;
    QTreeView *treeStructure;

    void setupUi(QDialog *RemoteDock)
    {
        if (RemoteDock->objectName().isEmpty())
            RemoteDock->setObjectName(QStringLiteral("RemoteDock"));
        RemoteDock->resize(575, 310);
        verticalLayout = new QVBoxLayout(RemoteDock);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(RemoteDock);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBrowseMode = new QComboBox(RemoteDock);
        comboBrowseMode->setObjectName(QStringLiteral("comboBrowseMode"));

        horizontalLayout->addWidget(comboBrowseMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(RemoteDock);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        comboUser = new QComboBox(RemoteDock);
        comboUser->setObjectName(QStringLiteral("comboUser"));
        comboUser->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(comboUser);

        buttonLogin = new QToolButton(RemoteDock);
        buttonLogin->setObjectName(QStringLiteral("buttonLogin"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/cog_go.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonLogin->setIcon(icon);

        horizontalLayout->addWidget(buttonLogin);


        verticalLayout->addLayout(horizontalLayout);

        treeStructure = new QTreeView(RemoteDock);
        treeStructure->setObjectName(QStringLiteral("treeStructure"));

        verticalLayout->addWidget(treeStructure);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBrowseMode);
        label_2->setBuddy(comboUser);
#endif // QT_NO_SHORTCUT

        retranslateUi(RemoteDock);
        QObject::connect(buttonLogin, SIGNAL(clicked()), RemoteDock, SLOT(setNewIdentity()));
        QObject::connect(treeStructure, SIGNAL(doubleClicked(QModelIndex)), RemoteDock, SLOT(fetchDatabase(QModelIndex)));

        QMetaObject::connectSlotsByName(RemoteDock);
    } // setupUi

    void retranslateUi(QDialog *RemoteDock)
    {
        RemoteDock->setWindowTitle(QApplication::translate("RemoteDock", "Remote", Q_NULLPTR));
        label->setText(QApplication::translate("RemoteDock", "B&rowse", Q_NULLPTR));
        comboBrowseMode->clear();
        comboBrowseMode->insertItems(0, QStringList()
         << QApplication::translate("RemoteDock", "Remote", Q_NULLPTR)
         << QApplication::translate("RemoteDock", "Local", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("RemoteDock", "Identity", Q_NULLPTR));
        buttonLogin->setText(QApplication::translate("RemoteDock", "Go", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RemoteDock: public Ui_RemoteDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEDOCK_H
