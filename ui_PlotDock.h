/********************************************************************************
** Form generated from reading UI file 'PlotDock.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTDOCK_H
#define UI_PLOTDOCK_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PlotDock
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitterForPlot;
    QTreeWidget *treePlotColumns;
    QCustomPlot *plotWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboLineType;
    QLabel *label_3;
    QComboBox *comboPointShape;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *butSavePlot;
    QToolButton *buttonLoadAllData;

    void setupUi(QDialog *PlotDock)
    {
        if (PlotDock->objectName().isEmpty())
            PlotDock->setObjectName(QStringLiteral("PlotDock"));
        PlotDock->resize(478, 553);
        verticalLayout = new QVBoxLayout(PlotDock);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitterForPlot = new QSplitter(PlotDock);
        splitterForPlot->setObjectName(QStringLiteral("splitterForPlot"));
        splitterForPlot->setOrientation(Qt::Vertical);
        treePlotColumns = new QTreeWidget(splitterForPlot);
        treePlotColumns->setObjectName(QStringLiteral("treePlotColumns"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(treePlotColumns->sizePolicy().hasHeightForWidth());
        treePlotColumns->setSizePolicy(sizePolicy);
        treePlotColumns->setColumnCount(4);
        splitterForPlot->addWidget(treePlotColumns);
        treePlotColumns->header()->setDefaultSectionSize(100);
        plotWidget = new QCustomPlot(splitterForPlot);
        plotWidget->setObjectName(QStringLiteral("plotWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(8);
        sizePolicy1.setHeightForWidth(plotWidget->sizePolicy().hasHeightForWidth());
        plotWidget->setSizePolicy(sizePolicy1);
        splitterForPlot->addWidget(plotWidget);

        verticalLayout->addWidget(splitterForPlot);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(PlotDock);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        widget = new QWidget(PlotDock);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        comboLineType = new QComboBox(widget);
        comboLineType->setObjectName(QStringLiteral("comboLineType"));

        horizontalLayout_4->addWidget(comboLineType);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        comboPointShape = new QComboBox(widget);
        comboPointShape->setObjectName(QStringLiteral("comboPointShape"));

        horizontalLayout_4->addWidget(comboPointShape);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        butSavePlot = new QPushButton(widget);
        butSavePlot->setObjectName(QStringLiteral("butSavePlot"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/save_table"), QSize(), QIcon::Normal, QIcon::Off);
        butSavePlot->setIcon(icon);
        butSavePlot->setCheckable(false);
        butSavePlot->setAutoDefault(false);
        butSavePlot->setFlat(false);

        horizontalLayout_4->addWidget(butSavePlot);

        buttonLoadAllData = new QToolButton(widget);
        buttonLoadAllData->setObjectName(QStringLiteral("buttonLoadAllData"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/keyword"), QSize(), QIcon::Normal, QIcon::Off);
        buttonLoadAllData->setIcon(icon1);

        horizontalLayout_4->addWidget(buttonLoadAllData);


        horizontalLayout->addWidget(widget);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(comboLineType);
        label_3->setBuddy(comboPointShape);
#endif // QT_NO_SHORTCUT

        retranslateUi(PlotDock);
        QObject::connect(buttonLoadAllData, SIGNAL(clicked()), PlotDock, SLOT(fetchAllData()));

        comboLineType->setCurrentIndex(1);
        comboPointShape->setCurrentIndex(0);
        butSavePlot->setDefault(false);


        QMetaObject::connectSlotsByName(PlotDock);
    } // setupUi

    void retranslateUi(QDialog *PlotDock)
    {
        PlotDock->setWindowTitle(QApplication::translate("PlotDock", "Plot", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treePlotColumns->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("PlotDock", "_", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("PlotDock", "Y", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("PlotDock", "X", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("PlotDock", "Columns", Q_NULLPTR));
        label_2->setText(QApplication::translate("PlotDock", "Line type:", Q_NULLPTR));
        comboLineType->clear();
        comboLineType->insertItems(0, QStringList()
         << QApplication::translate("PlotDock", "None", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Line", Q_NULLPTR)
         << QApplication::translate("PlotDock", "StepLeft", Q_NULLPTR)
         << QApplication::translate("PlotDock", "StepRight", Q_NULLPTR)
         << QApplication::translate("PlotDock", "StepCenter", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Impulse", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("PlotDock", "Point shape:", Q_NULLPTR));
        comboPointShape->clear();
        comboPointShape->insertItems(0, QStringList()
         << QApplication::translate("PlotDock", "None", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Cross", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Plus", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Circle", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Disc", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Square", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Diamond", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Star", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Triangle", Q_NULLPTR)
         << QApplication::translate("PlotDock", "TriangleInverted", Q_NULLPTR)
         << QApplication::translate("PlotDock", "CrossSquare", Q_NULLPTR)
         << QApplication::translate("PlotDock", "PlusSquare", Q_NULLPTR)
         << QApplication::translate("PlotDock", "CrossCircle", Q_NULLPTR)
         << QApplication::translate("PlotDock", "PlusCircle", Q_NULLPTR)
         << QApplication::translate("PlotDock", "Peace", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        butSavePlot->setToolTip(QApplication::translate("PlotDock", "<html><head/><body><p>Save current plot...</p><p>File format chosen by extension (png, jpg, pdf, bmp)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        butSavePlot->setStatusTip(QApplication::translate("PlotDock", "Save current plot...", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        butSavePlot->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonLoadAllData->setToolTip(QApplication::translate("PlotDock", "Load all data. This has only an effect if not all data has been fetched from the table yet due to the partial fetch mechanism.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class PlotDock: public Ui_PlotDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTDOCK_H
