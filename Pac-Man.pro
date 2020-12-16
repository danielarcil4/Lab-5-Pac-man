QT       += core gui\
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ghosts.cpp \
    main.cpp \
    mainwindow.cpp \
    monedas.cpp \
    muros.cpp \
    puntaje.cpp \
    reloj.cpp \
    sprite.cpp \
    vidas.cpp

HEADERS += \
    ghosts.h \
    mainwindow.h \
    monedas.h \
    muros.h \
    puntaje.h \
    reloj.h \
    sprite.h \
    vidas.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    sprites.qrc
