#include "puntaje.h"
#include <QFont>

void Puntaje::perderVida()
{
    setPlainText(QString("Perdiste "));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("Bauhaus 93",20));
}

int Puntaje::getPuntaje() const
{
    return puntaje;
}

void Puntaje::setPuntaje(int value)
{
    puntaje = value;
}

int Puntaje::getMaxPuntaje() const
{
    return maxPuntaje;
}

void Puntaje::setMaxPuntaje(int value)
{
    maxPuntaje = value;
}

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
