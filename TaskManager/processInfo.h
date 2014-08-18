#ifndef PROCESSINFO_H
#define PROCESSINFO_H
#include <QString>
#include <QVector>
#include <QMap>
#include <stdlib.h>
#include <sstream>


using namespace std;

class processInfo
{
public:
    processInfo(QMap<QString,QString>*);
    QMap<QString,QString> *data;
    void shoot_me(); //for killing the process
    QMap<QString,QString>* getData();

private:




};

#endif // PROCESSINFO_H
