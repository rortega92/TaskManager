#include "exec.h"
#include <QTableView>
exec::exec(ProcessManagerWindow* window)
{
   this->cmd = "ps -e -o pid,state,pcpu,pmem,user,pri,comm";
   this->ventana=window;
}

void exec::run()
{

    while(true){
        //this->ventana->getTableModel()->removeRows(0,this->ventana->getTableModel()->rowCount()-1);
        QModelIndexList a = this->ventana->getSelected();
        mutex.lock();
        FILE* pipe = popen(cmd.toStdString().c_str(), "r");
        mutex.unlock();
        if (!pipe) cout << "ERROR" <<endl;
        char buffer[128];
        int prsCount = 0;
        while(!feof(pipe)) {
            if(fgets(buffer, 128, pipe) != NULL)
                mutex.lock();
                Process *ps=Process::parse_and_create(buffer);
                //cout<<ps->toString().toStdString()<<endl;
                this->ventana->chargeViewTable(ps, prsCount);
                delete ps;
                mutex.unlock();
                prsCount++;
        }

        for(int i= prsCount-1; i<this->ventana->getTableModel()->rowCount(); i++)
            this->ventana->getTableModel()->removeRow(i);
        if(a.length() > 0)
            if(a[0].row() < prsCount-1 )
                this->ventana->getTableView()->selectRow(a[0].row());
        //this->ventana->getTableModel()->removeRow(0);
        mutex.lock();
        pclose(pipe);
        mutex.unlock();
        this->sleep(3);
    }
}
