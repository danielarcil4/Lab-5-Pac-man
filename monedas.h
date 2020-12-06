#ifndef MONEDAS_H
#define MONEDAS_H
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class Monedas: public QObject,public QGraphicsItem
{
private:

    int posx,posy;
    int r=5;
public:
    Monedas(int x,int y);
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget = nullptr);
};

#endif // MONEDAS_H
