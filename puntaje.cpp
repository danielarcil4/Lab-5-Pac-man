#include "puntaje.h"
#include <QFont>

Puntaje::Puntaje(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    puntaje=0;
    setPlainText(QString("Puntaje: "+QString::number(puntaje)));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("Bauhaus 93",20));
}

void Puntaje::incrementar()
{
    puntaje++;
    setPlainText(QString("Puntaje: "+QString::number(puntaje)));

}
