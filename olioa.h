#ifndef OLIOA_H
#define OLIOA_H

#include <QObject>
#include "oliob.h"

class OlioA : public QObject
{
    Q_OBJECT

public:
    OlioA();

public slots:
    void start();

signals:
    void pingSignal();
    void pongSignal();

private:
    OlioB* olioB;
};

#endif // OLIOA_H
