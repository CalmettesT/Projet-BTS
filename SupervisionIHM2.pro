#-------------------------------------------------
#
# Project created by QtCreator 2021-02-09T14:41:33
#
#-------------------------------------------------

QT       += core gui
QT += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SupervisionIHM2
TEMPLATE = app


SOURCES += main.cpp\
    ajouter.cpp \
    capteur.cpp \
    editseance.cpp \
    gestionlog.cpp \
    gestionxml.cpp \
    interfaceagenda.cpp \
        mainwindow.cpp \
    supervision.cpp \
    qledlabel.cpp \
    supseance.cpp

HEADERS  += mainwindow.h \
    ajouter.h \
    capteur.h \
    editseance.h \
    gestionlog.h \
    gestionxml.h \
    interfaceagenda.h \
    supervision.h \
    qledlabel.h \
    supseance.h

FORMS    += mainwindow.ui \
    ajouter.ui \
    capteur.ui \
    editseance.ui \
    interfaceagenda.ui \
    supervision.ui \
    supseance.ui

RESOURCES += \
    img/image.qrc \
    rsc.qrc
