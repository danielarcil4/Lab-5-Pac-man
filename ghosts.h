#ifndef GHOSTS_H
#define GHOSTS_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>

class Ghosts: public QObject,public QGraphicsItem
{
    Q_OBJECT
    float filas,columnas;
    float ancho,alto;
public:
    explicit Ghosts(QObject *parent = nullptr);

    QTimer *timer;
    QPixmap *Pixmap;

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget = nullptr);

signals:
public slots:
    void personaje();
};

#endif // GHOSTS_H
