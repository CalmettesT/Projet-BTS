#ifndef QLEDLABEL_H
#define QLEDLABEL_H

#include "QString"
#include <QLabel>
#include <QDebug>
#include "gestionlog.h"

class QLedLabel : public QLabel
{
    Q_OBJECT

    QString modeParc;
    QString pompe1;

public:

    explicit QLedLabel(QWidget *parent = 0);

    enum Etat{Marche=1,EtatWarning=2,Arret=3};
    void setDebit2(int debit3);
    int getDebit();

    void couleurPompe(QLedLabel &c);

    void setModeParc(QString modeParc3);
    QString getModeParc();

    QString getPompe1(QString stateP1);

    ~QLedLabel();

private:
    int debit;


signals:

public slots:
    void setState(Etat state);
    void setState(bool state);
};

#endif // QLEDLABEL_H
