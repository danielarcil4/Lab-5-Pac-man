#ifndef PUNTAJE_H
#define PUNTAJE_H
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>

class Puntaje: public QGraphicsTextItem
{
    int puntaje;
    int maxPuntaje;
public:
    Puntaje(QGraphicsItem * parent=0);
    void incrementar();
    void perderVida();
    int getPuntaje() const;
    void setPuntaje(int value);
    int getMaxPuntaje() const;
    void setMaxPuntaje(int value);
};

#endif // PUNTAJE_H
