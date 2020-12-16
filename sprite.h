#ifndef SPRITE_H
#define SPRITE_H

#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QPixmap>
#include <QPainter>
#include <QKeyEvent>

class Sprite: public QObject,public QGraphicsItem
{
    Q_OBJECT
    int filas,columnas;
    int ancho,alto;
public:
    explicit Sprite(QObject *parent = nullptr);

    QTimer *timer;
    QPixmap *Pixmap;

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget = nullptr);

signals:
public slots:
    void personaje();
};

#endif // SPRITE_H
