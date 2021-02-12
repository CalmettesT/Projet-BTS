#ifndef QLEDLABEL_H
#define QLEDLABEL_H
#include "QString"
#include <QLabel>

class QLedLabel : public QLabel
{
    Q_OBJECT
    int debit;
    QString modeParc;
public:
    explicit QLedLabel(QWidget *parent = 0);

    enum Etat{Marche,EtatWarning,Arret};
    int gestionDebit(int debit3);
    QString gestionModeParc(QString modeParc3);



signals:

public slots:
    void setState(Etat state);
    void setState(bool state);
};

#endif // QLEDLABEL_H
