
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "sprite.h"
#include "muros.h"
#include "monedas.h"
#include "puntaje.h"
#include "vidas.h"
#include "reloj.h"

#include <QGraphicsScene>
#include <QMainWindow>
#include <QDesktopWidget>
#include <QDebug>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void keyPressEvent(QKeyEvent * evento);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    float X,Y,W,H;
    Sprite *jugador;

    //lvl 1
    Muros *muro1;
    Muros *muro2;
    Muros *muro3;
    Muros *muro4;
    Muros *muro5;
    Muros *muro6;
    Muros *muro7;
    Muros *muro8;
    Muros *muro9;
    Muros *muro10;
    Muros *muro11;
    Muros *muro12;
    Muros *muro13;
    Muros *muro14;
    Muros *muro15;
    Muros *muro16;
    Muros *muro17;
    Muros *muro18;
    Muros *muro19;
    Muros *muro20;
    Muros *muro21;
    Muros *muro22;
    Muros *muro23;
    Muros *muro24;
    Muros *muro25;
    Muros *muro26;
    Muros *muro27;
    Muros *muro28;
    Muros *muro29;
    Muros *muro30;
    Muros *muro31;
    Muros *muro32;
    Muros *muro33;
    Muros *muro34;
    Muros *muro35;
    Muros *muro36;
    Muros *muro37;
    Muros *muro38;
    Muros *muro39;
    Muros *muro40;
    Muros *muro41;
    Muros *muro42;
    Muros *muro43;
    Muros *muro44;
    Muros *muro45;
    Muros *muro46;
    Muros *muro47;
    Muros *muro48;
    Muros *muro49;
    Muros *muro50;
    Muros *muro51;
    Muros *muro52;
    Muros *muro53;
    Muros *muro54;
    Muros *muro55;
    Muros *muro56;

    Monedas *moneda1;
    Puntaje *puntos;
    Vidas *health;

    QGraphicsRectItem *Muro56 = new QGraphicsRectItem;
    QGraphicsRectItem *Muro57 = new QGraphicsRectItem;
    QGraphicsRectItem *Muro58 = new QGraphicsRectItem;
    QGraphicsRectItem *Muro59 = new QGraphicsRectItem;
    QGraphicsRectItem *Muro60 = new QGraphicsRectItem;
    QGraphicsRectItem *Muro61 = new QGraphicsRectItem;
    QGraphicsRectItem *Muro62 = new QGraphicsRectItem;
    //vidas
    QGraphicsRectItem *Muro63 = new QGraphicsRectItem;
    QGraphicsEllipseItem *vida1 = new QGraphicsEllipseItem;

    QGraphicsRectItem *Muro64 = new QGraphicsRectItem;
    QGraphicsEllipseItem *vida2 = new QGraphicsEllipseItem;

    QGraphicsRectItem *Muro65 = new QGraphicsRectItem;
    QGraphicsEllipseItem *vida3 = new QGraphicsEllipseItem;

    QGraphicsScene *scene;



    Reloj *tiempo;

};
#endif // MAINWINDOW_H
