#include "qledlabel.h"
#include "supervision.h"
#include "ui_supervision.h"
#include <QDebug>


//Couleur de la pompe
static const int SIZE = 20;
static const QString greenSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.145, y1:0.16, x2:1, y2:1, stop:0 rgba(20, 252, 7, 255), stop:1 rgba(25, 134, 5, 255));").arg(SIZE/2);
static const QString redSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.145, y1:0.16, x2:0.92, y2:0.988636, stop:0 rgba(255, 12, 12, 255), stop:0.869347 rgba(103, 0, 0, 255));").arg(SIZE/2);
static const QString orangeSS = QString("color: white;border-radius: %1;background-color: qlineargradient(spread:pad, x1:0.232, y1:0.272, x2:0.98, y2:0.959773, stop:0 rgba(255, 113, 4, 255), stop:1 rgba(91, 41, 7, 255))").arg(SIZE/2);



void QLedLabel::setState(Etat state)
{
    qDebug() << "setState" << state;
    switch(state){
        case 2:
            qDebug() << "orange" << state;
            setStyleSheet(orangeSS);

        break;
        case 3:
            qDebug() << "red" << state;
            setStyleSheet(redSS);

        break;
        case 1:
             qDebug() << "green" << state;
             setStyleSheet(greenSS);
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
    //    pompe1 = pompe.getEtatPompe();
    //    if(pompe1 == "Pompe 1 en marche")
    //    {
    //        setState(Marche);
    //    }
      if (modeParc=="Gravitaire")
      {
          setState(Arret);
      }
      else if (modeParc=="Circuit Ferme")
      {
          setState(Marche);
      }
      else
      {
          if (debit>=10)setState(Marche);
              else if (debit>=5 && debit<10) setState(EtatWarning);
              else  setState(Arret);
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

void QLedLabel::couleurPompe()
{

    debit = getDebit();
    qDebug()<<"test debit"<<debit;
    modeParc = getModeParc();
    qDebug()<<"test mode"<<modeParc;
    setFixedSize(SIZE, SIZE);

//    pompe1 = pompe.getEtatPompe();
//    if(pompe1 == "Pompe 1 en marche")
//    {
//    setState(Marche);
//    }

    if (modeParc=="Gravitaire")
    {
        setState(3);
    }
    else if (modeParc=="Circuit Ferme")
    {
        setState(1);
    }

    if (debit >=10)
    {
        setState(Marche);
        qDebug()<<"led verte d>10";
    }
    else
    {
        setState(Arret);
    }


}


//int QLedLabel::gestionDebit(int debit3)
//{
//    debit=debit3;
//    qDebug()<<"charo"<<debit;
//    return debit;
//}

//QString QLedLabel::gestionModeParc(QString modeParc3)
//{
//    modeParc=modeParc3;
//    return modeParc;
//}



