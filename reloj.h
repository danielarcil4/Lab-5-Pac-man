#ifndef RELOJ_H
#define RELOJ_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer>
#include <QDebug>

class Reloj: public QGraphicsTextItem
{
    int reloj;
public:
    Reloj(QGraphicsItem * parent=0);
    QTimer *timer;
    int getReloj() const;
    void setReloj(int value);
    void ganarLvl();

signals:
public slots:
    void Decrementar();
};

#endif // RELOJ_H
