#include "qledlabel.h"
#include "supervision.h"
#include "ui_supervision.h"
#include <QDebug>


//Couleur de la pompe
static const int SIZE = 25;
static const QString greenSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.145, y1:0.16, x2:1, y2:1, stop:0 rgba(0, 255, 0, 255), stop:1 rgba(25, 134, 5, 255));").arg(SIZE/2);
static const QString orangeSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.232, y1:0.272, x2:0.98, y2:0.959773, stop:0 rgba(255, 113, 4, 255), stop:1 rgba(91, 41, 7, 255))").arg(SIZE/2);
static const QString redSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.145, y1:0.16, x2:0.92, y2:0.988636, stop:0 rgba(255, 0, 0, 255), stop:0.869347 rgba(255, 20, 15, 255));").arg(SIZE/2);



void QLedLabel::setState(Etat state)
{
    qDebug() << "setEtat" << state;
    switch(state)
    {
        case 1:
            qDebug() << "green" << state;
            setStyleSheet(greenSS);

        break;
        case 2:
            qDebug() << "orange" << state;
            setStyleSheet(orangeSS);

        break;
        case 3:
            qDebug() << "red" << state;
            setStyleSheet(redSS);
        break;
    default:
        setStyleSheet(redSS);
    }
}

void QLedLabel::setModeParc(QString modeParc3)
{
    modeParc=modeParc3;

}

void QLedLabel::setDebit2(int debit3)
{
    debit=debit3;
}

int QLedLabel::getDebit()
{
    return debit;
}

QString QLedLabel::getModeParc()
{
    return modeParc;
}

QLedLabel::QLedLabel(QWidget *parent) :
    QLabel(parent)
{
    setFixedSize(SIZE, SIZE);

//    if (modeParc=="Gravitaire")
//    {
//        setState(Arret);
//    }
//    else if (modeParc=="Circuit Ferme")
//    {
//        setState(Marche);
//    }
//    else if(debit>=10)setState(Marche);
//    else if (debit>=5 && debit<10) setState(EtatWarning);
//    else  setState(Arret);

    if (modeParc=="Gravitaire"||debit<=5)
    {
        setState(Arret);
    }
    else if (modeParc=="Circuit Ferme"||debit>=10)
    {
        setState(Marche);
    }
    else
    {
        setState(EtatWarning);
    }
}

void QLedLabel::setState(bool state)
{
    setState(state ? Marche : Arret);
}

QString QLedLabel::getPompe1(QString stateP1)
{
    return stateP1;
}

void QLedLabel::couleurPompe(QLedLabel &c)
{
    setFixedSize(SIZE, SIZE);

    if (modeParc=="Gravitaire" || debit<=5)
    {
//        if(modeParc)
        c.setState(Arret);
    }
    else if (modeParc=="Circuit Ferme" || debit>=10)
    {
        c.setState(Marche);
    }
    else
    {
        c.setState(EtatWarning);
    }


}

QLedLabel::~QLedLabel()
{}
