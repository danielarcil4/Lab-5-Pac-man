#include "sprite.h"
#include "muros.h"
#include "QDebug"

Sprite::Sprite(int x, int y)
{
    posx=x;
    posy=y;
    setPos(posx,posy);
}

Sprite::Sprite(QObject *parent) : QObject(parent)
{
    timer = new QTimer();
    filas = 0;
    columnas = 0;

    Pixmap = new QPixmap(":/sprites/Pac-Man.png");
    ancho = 50;
    alto = 50;

    timer->start(50);

    connect(timer,&QTimer::timeout,this,&Sprite::personaje);


}

QRectF Sprite::boundingRect() const
{
    return QRectF(-ancho/2,-alto/2,ancho,alto);
}

void Sprite::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-ancho/2,-alto/2,*Pixmap,columnas,0,ancho,alto);
}


void Sprite::personaje(){
    columnas+=50;
    if(columnas>=200){
        columnas = 0;
    }
    this->update(-ancho/2,-alto/2,ancho,alto);
}


