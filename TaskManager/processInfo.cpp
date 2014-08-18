#include "processInfo.h"


    processInfo::processInfo(QMap<QString,QString> *data){
        this->data=data;
    }


    void processInfo::shoot_me()
    {
        std::ostringstream oss;
        //oss << this->pid;
        system(("kill " + oss.str()).c_str());
    }

    QMap<QString,QString>* processInfo::getData(){
        return data;
    }

