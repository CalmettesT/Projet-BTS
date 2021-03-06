#-------------------------------------------------
#
# Project created by QtCreator 2021-02-09T14:41:33
#
#-------------------------------------------------

QT       += core gui
QT += xml
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SupervisionIHM2
TEMPLATE = app


SOURCES += main.cpp\
    ajouter.cpp \
    camera.cpp \
    capteur.cpp \
    config.cpp \
    editseance.cpp \
    gestionlog.cpp \
    gestionxml.cpp \
    ihmagenda.cpp \
        mainwindow.cpp \
    sockettest.cpp \
    supervision.cpp \
    qledlabel.cpp \
    supseance.cpp

HEADERS  += mainwindow.h \
    ajouter.h \
    camera.h \
    capteur.h \
    config.h \
    editseance.h \
    gestionlog.h \
    gestionxml.h \
    ihmagenda.h \
    sockettest.h \
    supervision.h \
    qledlabel.h \
    supseance.h

FORMS    += mainwindow.ui \
    ajouter.ui \
    camera.ui \
    capteur.ui \
    config.ui \
    editseance.ui \
    ihmagenda.ui \
    supervision.ui \
    supseance.ui

RESOURCES += \
    img/image.qrc \
    rsc.qrc

DISTFILES += \
    ../../Desktop/img stade cam.jpeg \
    img/img stade cam.jpeg
