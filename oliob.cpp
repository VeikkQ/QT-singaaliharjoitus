#include "oliob.h"
#include <QtDebug>
void OlioB::vastaanotaPingSignal()
{
    qDebug() << "ping";
    emit pongSignal();
}
