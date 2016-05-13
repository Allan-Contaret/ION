#include "mainwindow.h"
#include <QCoreApplication>
#include "cpu.h"
#include "mem.h"
#include "flux.h"

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
    flux myFlux;
    int f;
    f = myFlux.fluxet();
    return a.exec();


}
