#include "mainwindow.h"
#include <QCoreApplication>
#include "cpu.h"
#include "mem.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cpu myCpu;
    double c;
    c = myCpu.cpuPcent();
    printf("Le Pourcentage CPU instantanne est %g\n", c);
    mem myMem;
    int m;
    m = myMem.memo();
    return a.exec();


}
