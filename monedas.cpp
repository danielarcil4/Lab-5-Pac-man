#include "monedas.h"



Monedas::Monedas(int x, int y)
{
    posx = x;
    posy = y;
    setPos(posx,posy);
}

QRectF Monedas::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void Monedas::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::lightGray);
    painter->drawEllipse(boundingRect());
}

