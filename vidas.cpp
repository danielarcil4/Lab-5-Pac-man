#include "vidas.h"
#include <QFont>

int Vidas::getVidas() const
{
    return vidas;
}

Vidas::Vidas(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    vidas=3;
    setPlainText(QString("Vidas: "));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("Bauhaus 93",20));
}

void Vidas::Decrementar()
{
    vidas--;
    setPlainText(QString("Vidas: "));

}
