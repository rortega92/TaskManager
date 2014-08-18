
#include <QApplication>
#include <processmanagerwindow.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProcessManagerWindow w;

    w.show();
    return a.exec();
}
