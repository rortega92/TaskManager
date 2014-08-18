/********************************************************************************
** Form generated from reading UI file 'processmanagerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSMANAGERWINDOW_H
#define UI_PROCESSMANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessManagerWindow
{
public:
    QWidget *centralWidget;
    QTableView *viewTableProcess;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProcessManagerWindow)
    {
        if (ProcessManagerWindow->objectName().isEmpty())
            ProcessManagerWindow->setObjectName(QStringLiteral("ProcessManagerWindow"));
        ProcessManagerWindow->resize(901, 503);
        ProcessManagerWindow->setContextMenuPolicy(Qt::NoContextMenu);
        centralWidget = new QWidget(ProcessManagerWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        viewTableProcess = new QTableView(centralWidget);
        viewTableProcess->setObjectName(QStringLiteral("viewTableProcess"));
        viewTableProcess->setGeometry(QRect(30, 10, 841, 371));
        viewTableProcess->setContextMenuPolicy(Qt::CustomContextMenu);
        viewTableProcess->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        viewTableProcess->setAutoScroll(false);
        viewTableProcess->setEditTriggers(QAbstractItemView::NoEditTriggers);
        viewTableProcess->setDragDropOverwriteMode(false);
        viewTableProcess->setSelectionMode(QAbstractItemView::SingleSelection);
        viewTableProcess->setSelectionBehavior(QAbstractItemView::SelectRows);
        viewTableProcess->setGridStyle(Qt::DashLine);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(779, 420, 91, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 420, 91, 31));
        ProcessManagerWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProcessManagerWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 901, 20));
        ProcessManagerWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(ProcessManagerWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ProcessManagerWindow->setStatusBar(statusBar);

        retranslateUi(ProcessManagerWindow);

        QMetaObject::connectSlotsByName(ProcessManagerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProcessManagerWindow)
    {
        ProcessManagerWindow->setWindowTitle(QApplication::translate("ProcessManagerWindow", "ProcessManagerWindow", 0));
        pushButton->setText(QApplication::translate("ProcessManagerWindow", "End Process", 0));
        pushButton_2->setText(QApplication::translate("ProcessManagerWindow", "Create Process", 0));
    } // retranslateUi

};

namespace Ui {
    class ProcessManagerWindow: public Ui_ProcessManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSMANAGERWINDOW_H
