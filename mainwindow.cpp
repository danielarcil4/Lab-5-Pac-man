#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Se crea todos los objetos y el escenario

    scene = new QGraphicsScene();

    setFixedSize(1000,1000);
    jugador = new Sprite();
    jugador->setFlag(QGraphicsItem::ItemIsFocusable);
    jugador->setFocus();
    jugador->setPos(500,600);

    if(getNivel() == 1){
        ui->Mapa->setScene(scene);
        vida1->setRect(770,530,20,20);
        vida1->setBrush(Qt::yellow);

        Muro63->setRect(780,530,10,10);
        Muro63->setBrush(Qt::black);

        vida2->setRect(800,530,20,20);
        vida2->setBrush(Qt::yellow);

        Muro64->setRect(810,530,10,10);
        Muro64->setBrush(Qt::black);

        vida3->setRect(830,530,20,20);
        vida3->setBrush(Qt::yellow);

        Muro65->setRect(840,530,10,10);
        Muro65->setBrush(Qt::black);


        Muro56->setRect(90,354,-190,60);
        Muro56->setBrush(Qt::black);

        Muro57->setRect(90,514,-190,60);
        Muro57->setBrush(Qt::black);

        Muro58->setRect(260,364,230,49);
        Muro58->setBrush(Qt::black);

        Muro59->setRect(675,364,230,49);
        Muro59->setBrush(Qt::black);

        Muro60->setRect(675,514,230,60);
        Muro60->setBrush(Qt::black);

        Muro61->setRect(975,454,40,40);

        Muro62->setRect(-200,454,40,40);


        //----suelo
        muro2 = new Muros(-950,10,-100,940);

        //----techo
        muro3 = new Muros(-950,10,-100,0);


        //** LINEAS VERTICALES **//

        //zona izquierda
        muro1 = new Muros(10,365,-100,940);
        muro5 = new Muros(10,-365,-100,-10);

        muro9 = new Muros(10,-67,100,355);
        muro10 = new Muros(10,67,100,575);


        //zona derecha
        muro4 = new Muros(10,-355,860,-10);
        muro6 = new Muros(10,355,860,940);

        muro15 = new Muros(10,-67,670,355);
        muro16 = new Muros(10,67,670,575);
        muro25 = new Muros(100,40,850,774);

        //zona inferior
        muro21 = new Muros(40,142,384,870);

        muro23 = new Muros(40,100,100,774);

        muro26 = new Muros(40,100,695,774);
        muro28 = new Muros(40,142,596,870);
        muro29 = new Muros(40,142,196,870);

        muro33 = new Muros(40,132,384,667);
        muro34 = new Muros(20,90,600,588);

        muro35 = new Muros(20,-90,170,496);
        //zona superior
        muro37 = new Muros(20,-268,170,168);
        muro38 = new Muros(20,-268,600,168);
        muro40 = new Muros(20,-90,255,344);
        muro41 = new Muros(20,-90,515,344);
        muro47 = new Muros(40,100,384,284);
        muro48 = new Muros(40,-100,384,0);


        //** LINEAS HORIZONTALES **//
        //zona derecha
        muro13 = new Muros(200,10,860,355);
        muro14 = new Muros(200,10,860,585);

        muro17 = new Muros(-200,10,660,432);
        muro18 = new Muros(-200,10,660,508);

        //zona izquierda
        muro7 = new Muros(-200,-10,-100,575);
        muro8 = new Muros(-200,-10,-100,345);

        muro11 = new Muros(200,10,100,432);

        muro12 = new Muros(200,10,100,508);

        muro22 = new Muros(-100,40,-100,774);

        //zona inferior

        muro19 = new Muros(-316,40,436,870);
        muro20 = new Muros(-316,40,-30,870);


        muro24 = new Muros(135,30,100,674);

        muro27 = new Muros(-135,30,655,674);

        muro30 = new Muros(140,40,434,768);

        muro31 = new Muros(140,30,605,674);
        muro32 = new Muros(-140,30,150,674);

        muro36 = new Muros(-280,40,235,534);
        //zona superior
        muro39 = new Muros(-280,20,235,434);
        muro42 = new Muros(-120,20,170,284);
        muro43 = new Muros(-80,20,255,364);
        muro44 = new Muros(-80,5,335,349);
        muro45 = new Muros(-80,20,415,364);
        muro46 = new Muros(-120,20,460,284);
        muro49 = new Muros(290,40,520,205);
        muro50 = new Muros(190,40,625,100);
        muro51 = new Muros(100,100,785,160);
        muro52 = new Muros(120,40,785,280);
        muro53 = new Muros(-100,100,-40,160);
        muro54 = new Muros(-120,40,-40,280);
        muro55 = new Muros(-150,40,120,100);

        scene->addItem(jugador);

        muros.push_back(muro1);
        muros.push_back(muro2);
        muros.push_back(muro3);
        muros.push_back(muro4);
        muros.push_back(muro5);
        muros.push_back(muro6);
        muros.push_back(muro7);
        muros.push_back(muro8);
        muros.push_back(muro9);
        muros.push_back(muro10);
        muros.push_back(muro11);
        muros.push_back(muro12);
        muros.push_back(muro13);
        muros.push_back(muro14);
        muros.push_back(muro15);
        muros.push_back(muro16);
        muros.push_back(muro17);
        muros.push_back(muro18);
        muros.push_back(muro19);
        muros.push_back(muro20);
        muros.push_back(muro21);
        muros.push_back(muro22);
        muros.push_back(muro23);
        muros.push_back(muro24);
        muros.push_back(muro25);
        muros.push_back(muro26);
        muros.push_back(muro27);
        muros.push_back(muro28);
        muros.push_back(muro29);
        muros.push_back(muro30);
        muros.push_back(muro31);
        muros.push_back(muro32);
        muros.push_back(muro33);
        muros.push_back(muro34);
        muros.push_back(muro35);
        muros.push_back(muro36);
        muros.push_back(muro37);
        muros.push_back(muro38);
        muros.push_back(muro39);
        muros.push_back(muro40);
        muros.push_back(muro41);
        muros.push_back(muro42);
        muros.push_back(muro43);
        muros.push_back(muro44);
        muros.push_back(muro45);
        muros.push_back(muro46);
        muros.push_back(muro47);
        muros.push_back(muro48);
        muros.push_back(muro49);
        muros.push_back(muro50);
        muros.push_back(muro51);
        muros.push_back(muro52);
        muros.push_back(muro53);
        muros.push_back(muro54);
        muros.push_back(muro55);
        muros.push_back(Muro56);
        muros.push_back(Muro57);
        muros.push_back(Muro58);
        muros.push_back(Muro59);
        muros.push_back(Muro60);

        //Muros
        for (int i=0;i<muros.size() ;i++ ) {
            scene->addItem(muros[i]);
        }

        //monedas

        //for (int I=20;I<930 ;I+=100) {

        for (int I=20;I<950;I+=50) {
            for (int i=-70;i<850 ;i+=50) {
                if(i!=700 and I !=380){
                    monedas.push_back(new Monedas(i,I));
                    scene->addItem(monedas.back());
                }

            }
        }

        for (int I=0;I<muros.size() ;I++) {
            for (int i=0;i<monedas.size() ;i++) {
                if(monedas[i]->collidesWithItem(muros[I])){
                    scene->removeItem(monedas[i]);
                }
            }
        }

        //Puntaje
        puntos = new Puntaje;
        scene->addItem(puntos);
        puntos->setPos(670,365);

        //Vidas
        health = new Vidas;
        scene->addItem(health);
        health->setPos(670,520);

        scene->addItem(vida1);
        scene->addItem(Muro63);

        scene->addItem(vida2);
        scene->addItem(Muro64);

        scene->addItem(vida3);
        scene->addItem(Muro65);

        tiempo = new Reloj;
        tiempo->setPos(-90,365);
        scene->addItem(tiempo);
        nivel = new QTimer();
        nivel->start(1000);
        connect(nivel,SIGNAL(timeout()),this,SLOT(ganar()));
    }


}


void MainWindow::keyPressEvent(QKeyEvent *evento)
{
    if(getNivel()==1){
        QList<QGraphicsItem *> galletas = jugador->collidingItems();
        for (unsigned short int i=0 ;i<galletas.size() ;i++ ) {
            if( jugador->collidesWithItem(galletas[i])){
                scene->removeItem(galletas[i]);
                puntos->incrementar();
            }
        }

        switch (evento->key()) {
        case Qt::Key_W:
            jugador->setPos(jugador->x(),jugador->y()-5);
            jugador->setRotation(270);

            if(jugador->collidesWithItem(muro1) or jugador->collidesWithItem(muro2) or jugador->collidesWithItem(muro3) or jugador->collidesWithItem(muro4) or jugador->collidesWithItem(muro5) or jugador->collidesWithItem(muro6) or jugador->collidesWithItem(muro7) or jugador->collidesWithItem(muro8))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro9) or jugador->collidesWithItem(muro10) or jugador->collidesWithItem(muro11) or jugador->collidesWithItem(muro12) or jugador->collidesWithItem(muro13) or jugador->collidesWithItem(muro14) or jugador->collidesWithItem(muro15) or jugador->collidesWithItem(muro16))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro17) or jugador->collidesWithItem(muro18) or jugador->collidesWithItem(muro19) or jugador->collidesWithItem(muro20) or jugador->collidesWithItem(muro21) or jugador->collidesWithItem(muro22) or jugador->collidesWithItem(muro23) or jugador->collidesWithItem(muro24))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro25) or jugador->collidesWithItem(muro26) or jugador->collidesWithItem(muro27) or jugador->collidesWithItem(muro28) or jugador->collidesWithItem(muro29) or jugador->collidesWithItem(muro30) or jugador->collidesWithItem(muro31) or jugador->collidesWithItem(muro32))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro33) or jugador->collidesWithItem(muro34) or jugador->collidesWithItem(muro35) or jugador->collidesWithItem(muro36) or jugador->collidesWithItem(muro37) or jugador->collidesWithItem(muro38) or jugador->collidesWithItem(muro39) or jugador->collidesWithItem(muro40))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro41) or jugador->collidesWithItem(muro42) or jugador->collidesWithItem(muro43) or jugador->collidesWithItem(muro44) or jugador->collidesWithItem(muro45) or jugador->collidesWithItem(muro46) or jugador->collidesWithItem(muro47) or jugador->collidesWithItem(muro48))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro49) or jugador->collidesWithItem(muro50) or jugador->collidesWithItem(muro51) or jugador->collidesWithItem(muro52) or jugador->collidesWithItem(muro53) or jugador->collidesWithItem(muro54) or jugador->collidesWithItem(muro55))
                jugador->setPos(jugador->x(),jugador->y()+5);
            break;

        case Qt::Key_S:
            jugador->setPos(jugador->x(),jugador->y()+5);
            jugador->setRotation(90);

            if(jugador->collidesWithItem(muro1) or jugador->collidesWithItem(muro2) or jugador->collidesWithItem(muro3) or jugador->collidesWithItem(muro4) or jugador->collidesWithItem(muro5) or jugador->collidesWithItem(muro6) or jugador->collidesWithItem(muro7) or jugador->collidesWithItem(muro8))
                jugador->setPos(jugador->x(),jugador->y()-5);

            if(jugador->collidesWithItem(muro9) or jugador->collidesWithItem(muro10) or jugador->collidesWithItem(muro11) or jugador->collidesWithItem(muro12) or jugador->collidesWithItem(muro13) or jugador->collidesWithItem(muro14) or jugador->collidesWithItem(muro15) or jugador->collidesWithItem(muro16))
                jugador->setPos(jugador->x(),jugador->y()-5);

            if(jugador->collidesWithItem(muro17) or jugador->collidesWithItem(muro18) or jugador->collidesWithItem(muro19) or jugador->collidesWithItem(muro20) or jugador->collidesWithItem(muro21) or jugador->collidesWithItem(muro22) or jugador->collidesWithItem(muro23) or jugador->collidesWithItem(muro24))
                jugador->setPos(jugador->x(),jugador->y()-5);

           if(jugador->collidesWithItem(muro25) or jugador->collidesWithItem(muro26) or jugador->collidesWithItem(muro27) or jugador->collidesWithItem(muro28) or jugador->collidesWithItem(muro29) or jugador->collidesWithItem(muro30) or jugador->collidesWithItem(muro31) or jugador->collidesWithItem(muro32))
                jugador->setPos(jugador->x(),jugador->y()-5);

           if(jugador->collidesWithItem(muro33) or jugador->collidesWithItem(muro34) or jugador->collidesWithItem(muro35) or jugador->collidesWithItem(muro36) or jugador->collidesWithItem(muro37) or jugador->collidesWithItem(muro38) or jugador->collidesWithItem(muro39) or jugador->collidesWithItem(muro40))
                jugador->setPos(jugador->x(),jugador->y()-5);

           if(jugador->collidesWithItem(muro41) or jugador->collidesWithItem(muro42) or jugador->collidesWithItem(muro43) or jugador->collidesWithItem(muro44) or jugador->collidesWithItem(muro45) or jugador->collidesWithItem(muro46) or jugador->collidesWithItem(muro47) or jugador->collidesWithItem(muro48))
               jugador->setPos(jugador->x(),jugador->y()-5);

           if(jugador->collidesWithItem(muro49) or jugador->collidesWithItem(muro50) or jugador->collidesWithItem(muro51) or jugador->collidesWithItem(muro52) or jugador->collidesWithItem(muro53) or jugador->collidesWithItem(muro54) or jugador->collidesWithItem(muro55))
               jugador->setPos(jugador->x(),jugador->y()-5);
            break;
        case Qt::Key_A:
            jugador->setPos(jugador->x()-5,jugador->y());
            jugador->setRotation(180);

            if(jugador->collidesWithItem(Muro62))
                jugador->setPos(975,460);

            if(jugador->collidesWithItem(muro1) or jugador->collidesWithItem(muro2) or jugador->collidesWithItem(muro3) or jugador->collidesWithItem(muro4) or jugador->collidesWithItem(muro5) or jugador->collidesWithItem(muro6) or jugador->collidesWithItem(muro7) or jugador->collidesWithItem(muro8))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro9) or jugador->collidesWithItem(muro10) or jugador->collidesWithItem(muro11) or jugador->collidesWithItem(muro12) or jugador->collidesWithItem(muro13) or jugador->collidesWithItem(muro14) or jugador->collidesWithItem(muro15) or jugador->collidesWithItem(muro16))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro17) or jugador->collidesWithItem(muro18) or jugador->collidesWithItem(muro19) or jugador->collidesWithItem(muro20) or jugador->collidesWithItem(muro21) or jugador->collidesWithItem(muro22) or jugador->collidesWithItem(muro23) or jugador->collidesWithItem(muro24))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro25) or jugador->collidesWithItem(muro26) or jugador->collidesWithItem(muro27) or jugador->collidesWithItem(muro28) or jugador->collidesWithItem(muro29) or jugador->collidesWithItem(muro30) or jugador->collidesWithItem(muro31) or jugador->collidesWithItem(muro32))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro33) or jugador->collidesWithItem(muro34) or jugador->collidesWithItem(muro35) or jugador->collidesWithItem(muro36) or jugador->collidesWithItem(muro37) or jugador->collidesWithItem(muro38) or jugador->collidesWithItem(muro39) or jugador->collidesWithItem(muro40))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro41) or jugador->collidesWithItem(muro42) or jugador->collidesWithItem(muro43) or jugador->collidesWithItem(muro44) or jugador->collidesWithItem(muro45) or jugador->collidesWithItem(muro46) or jugador->collidesWithItem(muro47) or jugador->collidesWithItem(muro48))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro49) or jugador->collidesWithItem(muro50) or jugador->collidesWithItem(muro51) or jugador->collidesWithItem(muro52) or jugador->collidesWithItem(muro53) or jugador->collidesWithItem(muro54) or jugador->collidesWithItem(muro55))
                jugador->setPos(jugador->x()+5,jugador->y());


            break;
        case Qt::Key_D:
            jugador->setPos(jugador->x()+5,jugador->y());
            jugador->setRotation(0);

            if(jugador->collidesWithItem(Muro61))
                jugador->setPos(-150,460);

            if(jugador->collidesWithItem(muro1) or jugador->collidesWithItem(muro2) or jugador->collidesWithItem(muro3) or jugador->collidesWithItem(muro4) or jugador->collidesWithItem(muro5) or jugador->collidesWithItem(muro6) or jugador->collidesWithItem(muro7) or jugador->collidesWithItem(muro8))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro9) or jugador->collidesWithItem(muro10) or jugador->collidesWithItem(muro11) or jugador->collidesWithItem(muro12) or jugador->collidesWithItem(muro13) or jugador->collidesWithItem(muro14) or jugador->collidesWithItem(muro15) or jugador->collidesWithItem(muro16))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro17) or jugador->collidesWithItem(muro18) or jugador->collidesWithItem(muro19) or jugador->collidesWithItem(muro20) or jugador->collidesWithItem(muro21) or jugador->collidesWithItem(muro22) or jugador->collidesWithItem(muro23) or jugador->collidesWithItem(muro24))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro25) or jugador->collidesWithItem(muro26) or jugador->collidesWithItem(muro27) or jugador->collidesWithItem(muro28) or jugador->collidesWithItem(muro29) or jugador->collidesWithItem(muro30) or jugador->collidesWithItem(muro31) or jugador->collidesWithItem(muro32))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro33) or jugador->collidesWithItem(muro34) or jugador->collidesWithItem(muro35) or jugador->collidesWithItem(muro36) or jugador->collidesWithItem(muro37) or jugador->collidesWithItem(muro38) or jugador->collidesWithItem(muro39) or jugador->collidesWithItem(muro40))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro41) or jugador->collidesWithItem(muro42) or jugador->collidesWithItem(muro43) or jugador->collidesWithItem(muro44) or jugador->collidesWithItem(muro45) or jugador->collidesWithItem(muro46) or jugador->collidesWithItem(muro47) or jugador->collidesWithItem(muro48))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro49) or jugador->collidesWithItem(muro50) or jugador->collidesWithItem(muro51) or jugador->collidesWithItem(muro52) or jugador->collidesWithItem(muro53) or jugador->collidesWithItem(muro54) or jugador->collidesWithItem(muro55))
                jugador->setPos(jugador->x()-5,jugador->y());

            break;
        }
    }
    else if(getNivel()==2){
        switch (evento->key()) {
        case Qt::Key_W:
            jugador->setPos(jugador->x(),jugador->y()-5);
            jugador->setRotation(270);

            if(jugador->collidesWithItem(muro1) or jugador->collidesWithItem(muro2) or jugador->collidesWithItem(muro3) or jugador->collidesWithItem(muro4) or jugador->collidesWithItem(muro5) or jugador->collidesWithItem(muro6) or jugador->collidesWithItem(muro7) or jugador->collidesWithItem(muro8))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro9) or jugador->collidesWithItem(muro10) or jugador->collidesWithItem(muro11) or jugador->collidesWithItem(muro12) or jugador->collidesWithItem(muro13) or jugador->collidesWithItem(muro14) or jugador->collidesWithItem(muro15) or jugador->collidesWithItem(muro16))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro17) or jugador->collidesWithItem(muro18) or jugador->collidesWithItem(muro19) or jugador->collidesWithItem(muro20) or jugador->collidesWithItem(muro21) or jugador->collidesWithItem(muro22) or jugador->collidesWithItem(muro23) or jugador->collidesWithItem(muro24))
                jugador->setPos(jugador->x(),jugador->y()+5);

            if(jugador->collidesWithItem(muro25) or jugador->collidesWithItem(muro26) or jugador->collidesWithItem(muro27) or jugador->collidesWithItem(muro28) or jugador->collidesWithItem(muro29) or jugador->collidesWithItem(muro30) or jugador->collidesWithItem(muro31))
                jugador->setPos(jugador->x(),jugador->y()+5);

            break;
        case Qt::Key_S:
            jugador->setPos(jugador->x(),jugador->y()+5);
            jugador->setRotation(90);

            if(jugador->collidesWithItem(muro1) or jugador->collidesWithItem(muro2) or jugador->collidesWithItem(muro3) or jugador->collidesWithItem(muro4) or jugador->collidesWithItem(muro5) or jugador->collidesWithItem(muro6) or jugador->collidesWithItem(muro7) or jugador->collidesWithItem(muro8))
                jugador->setPos(jugador->x(),jugador->y()-5);

            if(jugador->collidesWithItem(muro9) or jugador->collidesWithItem(muro10) or jugador->collidesWithItem(muro11) or jugador->collidesWithItem(muro12) or jugador->collidesWithItem(muro13) or jugador->collidesWithItem(muro14) or jugador->collidesWithItem(muro15) or jugador->collidesWithItem(muro16))
                jugador->setPos(jugador->x(),jugador->y()-5);

            if(jugador->collidesWithItem(muro17) or jugador->collidesWithItem(muro18) or jugador->collidesWithItem(muro19) or jugador->collidesWithItem(muro20) or jugador->collidesWithItem(muro21) or jugador->collidesWithItem(muro22) or jugador->collidesWithItem(muro23) or jugador->collidesWithItem(muro24))
                jugador->setPos(jugador->x(),jugador->y()-5);

            if(jugador->collidesWithItem(muro25) or jugador->collidesWithItem(muro26) or jugador->collidesWithItem(muro27) or jugador->collidesWithItem(muro28) or jugador->collidesWithItem(muro29) or jugador->collidesWithItem(muro30) or jugador->collidesWithItem(muro31))
                jugador->setPos(jugador->x(),jugador->y()-5);
            break;
        case Qt::Key_A:
            jugador->setPos(jugador->x()-5,jugador->y());
            jugador->setRotation(180);

            if(jugador->collidesWithItem(muro1) or jugador->collidesWithItem(muro2) or jugador->collidesWithItem(muro3) or jugador->collidesWithItem(muro4) or jugador->collidesWithItem(muro5) or jugador->collidesWithItem(muro6) or jugador->collidesWithItem(muro7) or jugador->collidesWithItem(muro8))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro9) or jugador->collidesWithItem(muro10) or jugador->collidesWithItem(muro11) or jugador->collidesWithItem(muro12) or jugador->collidesWithItem(muro13) or jugador->collidesWithItem(muro14) or jugador->collidesWithItem(muro15) or jugador->collidesWithItem(muro16))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro17) or jugador->collidesWithItem(muro18) or jugador->collidesWithItem(muro19) or jugador->collidesWithItem(muro20) or jugador->collidesWithItem(muro21) or jugador->collidesWithItem(muro22) or jugador->collidesWithItem(muro23) or jugador->collidesWithItem(muro24))
                jugador->setPos(jugador->x()+5,jugador->y());

            if(jugador->collidesWithItem(muro25) or jugador->collidesWithItem(muro26) or jugador->collidesWithItem(muro27) or jugador->collidesWithItem(muro28) or jugador->collidesWithItem(muro29) or jugador->collidesWithItem(muro30) or jugador->collidesWithItem(muro31))
                jugador->setPos(jugador->x()+5,jugador->y());
            break;
        case Qt::Key_D:
            jugador->setPos(jugador->x()+5,jugador->y());
            jugador->setRotation(0);

            if(jugador->collidesWithItem(muro1) or jugador->collidesWithItem(muro2) or jugador->collidesWithItem(muro3) or jugador->collidesWithItem(muro4) or jugador->collidesWithItem(muro5) or jugador->collidesWithItem(muro6) or jugador->collidesWithItem(muro7) or jugador->collidesWithItem(muro8))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro9) or jugador->collidesWithItem(muro10) or jugador->collidesWithItem(muro11) or jugador->collidesWithItem(muro12) or jugador->collidesWithItem(muro13) or jugador->collidesWithItem(muro14) or jugador->collidesWithItem(muro15) or jugador->collidesWithItem(muro16))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro17) or jugador->collidesWithItem(muro18) or jugador->collidesWithItem(muro19) or jugador->collidesWithItem(muro20) or jugador->collidesWithItem(muro21) or jugador->collidesWithItem(muro22) or jugador->collidesWithItem(muro23) or jugador->collidesWithItem(muro24))
                jugador->setPos(jugador->x()-5,jugador->y());

            if(jugador->collidesWithItem(muro25) or jugador->collidesWithItem(muro26) or jugador->collidesWithItem(muro27) or jugador->collidesWithItem(muro28) or jugador->collidesWithItem(muro29) or jugador->collidesWithItem(muro30) or jugador->collidesWithItem(muro31))
                jugador->setPos(jugador->x()-5,jugador->y());
            break;
        }
    }
    else if(getNivel()==3){

    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::getNivel() const
{
    return Nivel;
}

void MainWindow::setNivel(int value)
{
    Nivel = value;
}

void MainWindow::ganar()
{
    if(puntos->getPuntaje()>=1){
        scene->clear();
        muros.clear();
        monedas.clear();
        setNivel(2);
        muros.clear();
        monedas.clear();

        muro1 = new Muros(-950,10,-110,-100);
        //suelo
        muro2 = new Muros(-950,10,-100,500);
        //techo
        muro3 = new Muros(-950,10,-100,0);
        //muro izquierdo
        muro4 = new Muros(10,-500,-100,0);
        //muro derecho
        muro5 = new Muros(10,-490,850,0);




        //**ZONA INFERIOR**//
        //zona izquierda
        muro6 = new Muros(-150,35,-50,433);
        muro7 = new Muros(-110,40,-100,340);
        muro8 = new Muros(-130,40,67,340);
        muro9 = new Muros(40,-90,197,340);
        muro10 = new Muros(-60,40,-100,250);
        muro11 = new Muros(-180,40,20,250);
        muro16 = new Muros(20,-135,297,298);
        muro17 = new Muros(-200,20,297,433);
        muro18 = new Muros(20,-135,497,298);
        muro19 = new Muros(-60,20,297,318);
        muro20 = new Muros(60,20,477,318);
        muro21 = new Muros(-220,50,277,204);
        muro22 = new Muros(-40,130,277,238);
        muro23 = new Muros(-40,130,457,238);
        muro24 = new Muros(-220,50,277,50);
        muro25 = new Muros(-33,47,370,97);
        //Zona derecha


        //**ZONA SUPERIOR**//
        //Zona izquierda
        muro12 = new Muros(-130,45,-40,150);
        muro13 = new Muros(80,45,90,105);
        muro14 = new Muros(50,50,-50,50);
        muro15 = new Muros(40,95,200,150);

        //Zona derecha
        muro26 = new Muros(-220,50,557,110);
        muro27 = new Muros(120,-80,777,110);
        muro28 = new Muros(-40,-265,557,170);
        muro29 = new Muros(-140,-40,596,250);
        muro30 = new Muros(-40,-40,800,250);
        muro31 = new Muros(120,80,777,433);

        QGraphicsRectItem *Muro63 = new QGraphicsRectItem;
        QGraphicsEllipseItem *vida1 = new QGraphicsEllipseItem;

        QGraphicsRectItem *Muro64 = new QGraphicsRectItem;
        QGraphicsEllipseItem *vida2 = new QGraphicsEllipseItem;

        QGraphicsRectItem *Muro65 = new QGraphicsRectItem;
        QGraphicsEllipseItem *vida3 = new QGraphicsEllipseItem;

        vida1->setRect(770,655,20,20);
        vida1->setBrush(Qt::yellow);

        Muro63->setRect(780,655,10,10);
        Muro63->setBrush(Qt::black);

        vida2->setRect(800,655,20,20);
        vida2->setBrush(Qt::yellow);

        Muro64->setRect(810,655,10,10);
        Muro64->setBrush(Qt::black);

        vida3->setRect(830,655,20,20);
        vida3->setBrush(Qt::yellow);

        Muro65->setRect(840,655,10,10);
        Muro65->setBrush(Qt::black);

        scene->addItem(muro1);
        scene->addItem(muro2);
        scene->addItem(muro3);
        scene->addItem(muro4);
        scene->addItem(muro5);
        scene->addItem(muro6);
        scene->addItem(muro7);
        scene->addItem(muro8);
        scene->addItem(muro9);
        scene->addItem(muro10);
        scene->addItem(muro11);
        scene->addItem(muro12);
        scene->addItem(muro13);
        scene->addItem(muro14);
        scene->addItem(muro15);
        scene->addItem(muro16);
        scene->addItem(muro17);
        scene->addItem(muro18);
        scene->addItem(muro19);
        scene->addItem(muro20);
        scene->addItem(muro21);
        scene->addItem(muro22);
        scene->addItem(muro23);
        scene->addItem(muro24);
        scene->addItem(muro25);
        scene->addItem(muro26);
        scene->addItem(muro27);
        scene->addItem(muro28);
        scene->addItem(muro29);
        scene->addItem(muro30);
        scene->addItem(muro31);


        scene->addItem(vida1);
        scene->addItem(Muro63);
        scene->addItem(vida2);
        scene->addItem(Muro64);
        scene->addItem(vida3);
        scene->addItem(Muro65);

        jugador = new Sprite();
        jugador->setPos(120,100);
        scene->addItem(jugador);

        tiempo = new Reloj;
        scene->addItem(tiempo);
        tiempo->setPos(650,680);

        health = new Vidas;
        scene->addItem(health);
        health->setPos(650,640);

        puntos = new Puntaje;
        scene->addItem(puntos);
        puntos->setPos(650,600);
    }
    else if(tiempo->getReloj()<=0){
        health->Decrementar();
        jugador->setPos(500,600);
        if(health->getVidas()==2){
            scene->removeItem(vida3);
            scene->removeItem(Muro65);
        }
        else if(health->getVidas()==1){
            scene->removeItem(vida2);
            scene->removeItem(Muro64);
        }
        else if(health->getVidas()==0){
            setNivel(4);
            scene->clear();
            /*puntos = new Puntaje;
            puntos->perderVida();
            scene->addItem(puntos);
            puntos->setPos(400,500);*/
            disconnect(nivel,SIGNAL(timeout()),this,SLOT(ganar()));
        }
        monedas.clear();
        for (int I=20;I<950;I+=50) {
            for (int i=-70;i<850 ;i+=50) {
                if(i!=700 and I !=380){
                    monedas.push_back(new Monedas(i,I));
                    scene->removeItem(monedas.back());
                }

            }
        }
        monedas.clear();
        for (int I=20;I<950;I+=50) {
            for (int i=-70;i<850 ;i+=50) {
                if(i!=700 and I !=380){
                    monedas.push_back(new Monedas(i,I));
                    scene->addItem(monedas.back());
                }

            }
        }

        for (int I=0;I<muros.size() ;I++) {
            for (int i=0;i<monedas.size() ;i++) {
                if(monedas[i]->collidesWithItem(muros[I])){
                    scene->removeItem(monedas[i]);
                }
            }
        }
        _sleep(2000);
        puntos->setPuntaje(0);
        tiempo->setReloj(160);
        puntos->perderVida();
    }
}


