
#include "muros.h"


Muros::Muros(int ancho_, int alto_, int x, int y)
{
    ancho = ancho_;
    alto=alto_;
    posx=x;
    posy=y;
    setPos(posx,posy);
}

QRectF Muros::boundingRect() const
{
    return QRectF(-ancho,-alto,ancho,alto);
}

void Muros::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::blue);
    painter->drawRect(boundingRect());
}
