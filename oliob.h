#ifndef OLIOB_H
#define OLIOB_H

#include <QObject>

class OlioB : public QObject
{
    Q_OBJECT

public slots:
    void vastaanotaPingSignal();

signals:
    void pongSignal();
};

#endif // OLIOB_H
