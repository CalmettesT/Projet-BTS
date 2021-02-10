#ifndef QLEDLABEL_H
#define QLEDLABEL_H
#include "QString"
#include <QLabel>

class QLedLabel : public QLabel
{
    Q_OBJECT
    int debit;
    int charo;
public:
    explicit QLedLabel(QWidget *parent = 0);

    enum Etat{
        EtatOk=1,
        EtatWarning=2,
        EtatError=3
    };



signals:

public slots:
    void setState(Etat state);
    void setState(bool state);
};

#endif // QLEDLABEL_H
