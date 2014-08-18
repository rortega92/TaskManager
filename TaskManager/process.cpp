#include "process.h"
#include <stdlib.h>
#include <sstream>

    Process::Process(int pid, QString state, double cpu_usage, double memory_usage, QString user, int priority,QString name){
        this->pid = pid;
        this->name= name;
        this->user = user;
        this->state =  state;
        this->cpu_usage = cpu_usage;
        this->memory_usage = memory_usage;
        this->priority = priority;
    }

    int Process::get_pid()
    {
        return this->pid;
    }

    QString Process::get_user()
    {
        return this->user;
    }

    QString Process::get_state()
    {
        return this->state;
    }

    double Process::get_cpu_usage()
    {
        return this->cpu_usage;
    }

    double Process::get_memory_usage()
    {
        return this->cpu_usage;
    }

    int Process::get_priority()
    {
        return this->priority;
    }

    QString Process::get_name(){
        return this->name;
    }

    void Process::shoot_me()
    {
        std::ostringstream oss;
        oss << this->pid;
        system(("kill " + oss.str()).c_str());
    }

    Process* Process::parse_and_create(QString with_cmd)
    {
        bool ok;
        QStringList props = with_cmd.split(" ", QString::SkipEmptyParts);
        return new Process(props.at(0).toInt(&ok, 10), props.at(1), props.at(2).toDouble(&ok), props.at(3).toDouble(&ok),
                           props.at(4), props.at(5).toInt(&ok, 10),props.at(6));

    }

   QString Process::toString()
   {
        return QString::number(this->pid) + " " + this->user + " " + this->state + " " + QString::number(this->cpu_usage)
                + " " + QString::number(this->memory_usage) + " " + QString::number(this->priority)+ " " + this->name;
   }

