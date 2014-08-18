#include "processmanagerwindow.h"
#include "ui_processmanagerwindow.h"
#include <QStandardItemModel>
#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <QTimer>
#include <QThread>
#include <QStandardItem>
#include <process.h>
#include <QList>
#include <QString>
#include <QDialog>
#include <exec.h>
#include <QInputDialog>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <fstream>
using namespace std;



ProcessManagerWindow::ProcessManagerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProcessManagerWindow)
{

   ui->setupUi(this);
   QString format[]={"ID","Nombre","%CPU","%MEM","Estado","Prioridad","Usuario"};
   int size=sizeof(format)/sizeof(format[0]);

   model = new QStandardItemModel(0,size,this);
        for (int i=0; i<size;++i){
           model->setHorizontalHeaderItem(i, new QStandardItem(QString(format[i])));
        }

    ui->viewTableProcess->setModel(model);
    ui->viewTableProcess->setContextMenuPolicy(Qt::CustomContextMenu);
    this->passDlg=new passDialog();
    exec *e =new exec(this);
    e->start();
}


void ProcessManagerWindow::chargeViewTable(Process* ps, int row){
    QList<QStandardItem*> list;
    list<< new QStandardItem(QString::number(ps->get_pid()));
    list<<new QStandardItem(ps->get_name());
    list<<new QStandardItem(QString::number(ps->get_cpu_usage()));
    list<<new QStandardItem(QString::number(ps->get_memory_usage()));
    list<<new QStandardItem(ps->get_state());
    list<<new QStandardItem(QString::number(ps->get_priority()));
    list<<new QStandardItem(ps->get_user());
    for(int x=0; x<7; x++){
        model->takeItem(row,x);
        model->setItem(row,x, list[x]);\
    }
}


void ProcessManagerWindow::setTableModel(QStandardItemModel* qsi){
    this->model=qsi;
}

QStandardItemModel * ProcessManagerWindow::getTableModel(){
    return this->model;
}

QTableView* ProcessManagerWindow::getTableView(){
    return this->ui->viewTableProcess;
}

QModelIndexList ProcessManagerWindow::getSelected(){
    return this->ui->viewTableProcess->selectionModel()->selection().indexes();
}

ProcessManagerWindow::~ProcessManagerWindow()
{
    delete ui;
}

void ProcessManagerWindow::on_pushButton_clicked()
{
    int a = ui->viewTableProcess->currentIndex().row();
    if(a >= 0){
            QString cmdId="kill "+model->item(a,0)->text();
            if(!system(cmdId.toStdString().c_str()))
               this->model->removeRow(a);
    }
}


void ProcessManagerWindow::on_pushButton_2_clicked()
{
    bool ok = true;
    QString text = QInputDialog::getText(this, tr("Create Process"),tr("User command:"), QLineEdit::Normal,"", &ok);
    string path1 = "/bin/";
    string path2 = "/usr/bin/";
    path1 = path1 + text.toStdString();
    path2 = path2 + text.toStdString();
    const char* p1 = path1.c_str();
    const char* p2 = path2.c_str();
    ifstream sal(path1.c_str());
    ifstream sal2 (path2.c_str());
    if (sal){
        pid_t pID = fork();
        if (pID == 0) {
            execl(p1, text.toStdString().c_str(), NULL, NULL);
            } else if (pID < 0)
                cerr << "cannot create instance" << endl;
        } else if (sal2){
            pid_t pID = fork();
            if (pID == 0) {
                execl(p2, text.toStdString().c_str(), NULL, NULL);
            } else if (pID < 0)
                cerr << "cannot create instance" << endl;
        } else if (!sal && !sal2){
            cerr << "Command not found" << endl;
        }
}
