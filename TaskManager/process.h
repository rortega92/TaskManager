#ifndef PROCESS_H
#define PROCESS_H
#include <QString>
#include <QStringList>

class Process
{
public:
    Process(int, QString, double, double, QString, int,QString);
    QString get_name();
    int get_pid();
    QString get_user();
    QString get_state();
    double get_cpu_usage();
    double get_memory_usage();
    int get_priority();
    void shoot_me(); //for killing the process
    static Process* parse_and_create(QString);
    QString toString();

private:
    int pid;
    QString user;
    QString name;
    QString state;
    double cpu_usage;
    double memory_usage;
    int priority;
};

#endif // PROCESS_H
