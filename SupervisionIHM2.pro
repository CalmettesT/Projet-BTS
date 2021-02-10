#-------------------------------------------------
#
# Project created by QtCreator 2021-02-09T14:41:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SupervisionIHM2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    supervision.cpp \
    qledlabel.cpp

HEADERS  += mainwindow.h \
    supervision.h \
    qledlabel.h

FORMS    += mainwindow.ui \
    supervision.ui

RESOURCES += \
    img/image.qrc
