#ifndef EXEC_H
#define EXEC_H
#include "exec.h"
#include <QThread>
#include <cstdlib>
#include <process.h>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <sstream>
#include <QMutex>
#include <processmanagerwindow.h>
using namespace std;

static QMutex mutex;

class exec : public QThread
{

public:
    exec(ProcessManagerWindow *ventana);
    void run();
    QString cmd;
    ProcessManagerWindow *ventana;
};

#endif // EXEC_H
