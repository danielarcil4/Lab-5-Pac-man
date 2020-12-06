#ifndef PAC_MAN_H
#define PAC_MAN_H
#include <QGraphicsItem>
#include <QPainter>


class Pac_Man: public QGraphicsItem
{
    int r;
    int posx,posy;
    int velocidad = 2;

public:
    //constructor
    Pac_Man(int r_,int x,int y);

    //movimiento
    void Up();
    void Down();
    void Left();
    void Right();

    //**  Funciones repetitivas  **//

    //Se tomas las medidas de la figura a mostrar en la pantalla
    QRectF boundingRect() const;
    //agrega el color y pinta en la pantalla
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget = nullptr);

};

#endif // PAC_MAN_H
