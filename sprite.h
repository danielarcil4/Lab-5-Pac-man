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
private:

    int posx,posy;

public:
    Sprite(int x,int y);
    explicit Sprite(QObject *parent = nullptr);


    QTimer *timer;
    QPixmap *Pixmap;

    float filas,columnas;
    float ancho,alto;

    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget = nullptr);

signals:
public slots:
    void personaje();

};

#endif // SPRITE_H
