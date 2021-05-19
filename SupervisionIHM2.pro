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
    capteur.cpp \
    gestionlog.cpp \
        mainwindow.cpp \
    supervision.cpp \
    qledlabel.cpp

HEADERS  += mainwindow.h \
    capteur.h \
    gestionlog.h \
    supervision.h \
    qledlabel.h

FORMS    += mainwindow.ui \
    capteur.ui \
    supervision.ui

RESOURCES += \
    img/image.qrc \
    rsc.qrc
