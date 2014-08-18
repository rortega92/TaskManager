/********************************************************************************
** Form generated from reading UI file 'processmanagerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessManagerWindow
{
public:
    QWidget *centralWidget;
    QTableView *viewTableProcess;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProcessManagerWindow)
    {
        if (ProcessManagerWindow->objectName().isEmpty())
            ProcessManagerWindow->setObjectName(QStringLiteral("ProcessManagerWindow"));
        ProcessManagerWindow->resize(961, 460);
        centralWidget = new QWidget(ProcessManagerWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        viewTableProcess = new QTableView(centralWidget);
        viewTableProcess->setObjectName(QStringLiteral("viewTableProcess"));
        viewTableProcess->setGeometry(QRect(30, 10, 901, 371));
        viewTableProcess->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ProcessManagerWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ProcessManagerWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 961, 20));
        ProcessManagerWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProcessManagerWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ProcessManagerWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ProcessManagerWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ProcessManagerWindow->setStatusBar(statusBar);

        retranslateUi(ProcessManagerWindow);

        QMetaObject::connectSlotsByName(ProcessManagerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProcessManagerWindow)
    {
        ProcessManagerWindow->setWindowTitle(QApplication::translate("ProcessManagerWindow", "ProcessManagerWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class ProcessManagerWindow: public Ui_ProcessManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSMANAGERWINDOW_H
