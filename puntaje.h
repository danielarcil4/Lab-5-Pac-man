#ifndef PUNTAJE_H
#define PUNTAJE_H
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class Puntaje: public QGraphicsTextItem
{
    int puntaje;
public:
    Puntaje(QGraphicsItem * parent=0);
    void incrementar();
};

#endif // PUNTAJE_H
