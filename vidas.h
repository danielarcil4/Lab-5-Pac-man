#ifndef VIDAS_H
#define VIDAS_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class Vidas: public QGraphicsTextItem
{
    int vidas;

public:
    Vidas(QGraphicsItem * parent=0);
    void Decrementar();
};

#endif // VIDAS_H
