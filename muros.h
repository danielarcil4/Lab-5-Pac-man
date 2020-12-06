#ifndef MUROS_H
#define MUROS_H
#include <QGraphicsItem>
#include <QPainter>

class Muros: public QGraphicsItem
{
    int ancho,alto;
    int posx,posy;
public:
    Muros(int ancho_,int alto_,int x,int y);

    QRectF boundingRect() const;
    //agrega el color y pinta en la pantalla
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget = nullptr);
};

#endif // MUROS_H
