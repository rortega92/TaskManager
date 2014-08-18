#ifndef PROCESSMANAGERWINDOW_H
#define PROCESSMANAGERWINDOW_H

#include <QMainWindow>
#include <process.h>
#include <QStandardItemModel>
#include <QTableView>
#include <QModelIndexList>
#include <passdialog.h>
//#include <exec.h>
namespace Ui {
class ProcessManagerWindow;
}

class ProcessManagerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProcessManagerWindow(QWidget *parent = 0);
    void getInfo();
    void chargeViewTable(Process*, int);
    void setTableModel(QStandardItemModel*);
    QStandardItemModel * getTableModel();
    QTableView* getTableView();
    QModelIndexList getSelected();
   // exec *thread;
    ~ProcessManagerWindow();

private slots:
    void on_pushButton_clicked();

    void on_spinBox_editingFinished();

    void on_viewTableProcess_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

private:
    Ui::ProcessManagerWindow *ui;
    QStandardItemModel *model;
    passDialog *passDlg;
};

#endif // PROCESSMANAGERWINDOW_H
