#include <QCoreApplication>
#include "olioa.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    OlioA olioA;
    QObject::connect(&a, &QCoreApplication::aboutToQuit, &olioA, &OlioA::deleteLater);
    olioA.start();

    return a.exec();
}
