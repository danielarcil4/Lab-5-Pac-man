#include "ghosts.h"

Ghosts::Ghosts(QObject *parent): QObject(parent)
{
    Pixmap = new QPixmap(":/sprites/unnamed.png");
    ancho = 50;
    alto = 50;
    timer = new QTimer();
    timer->start(50);
    connect(timer,&QTimer::timeout,this,&Ghosts::personaje);

}

QRectF Ghosts::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Ghosts::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*Pixmap,columnas,0,ancho,alto);
}

void Ghosts::personaje()
{
    this->update(-ancho/2,-alto/2,ancho,alto);
}

