#include "olioa.h"
#include <QtDebug>
OlioA::OlioA() : olioB(new OlioB)
{
    connect(this, &OlioA::pingSignal, olioB, &OlioB::vastaanotaPingSignal);
    connect(olioB, &OlioB::pongSignal, this, [](){ qDebug() << "pong"; });
}

void OlioA::start()
{
    emit pingSignal();
}
