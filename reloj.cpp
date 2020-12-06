#include "reloj.h"
#include <QFont>

Reloj::Reloj(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    reloj=160;
    setPlainText(QString("Reloj: ")+QString::number(reloj));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("Bauhaus 93",20));
    timer = new QTimer();
    timer->start(1000);
    connect(timer,&QTimer::timeout,this,&Reloj::Decrementar);

}

void Reloj::Decrementar()
{
    --reloj;
    setPlainText(QString("Reloj: ")+QString::number(reloj));
}


