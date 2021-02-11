#ifndef QLEDLABEL_H
#define QLEDLABEL_H
#include "QString"
#include <QLabel>

class QLedLabel : public QLabel
{
    Q_OBJECT
    int debit;
    int charo;
    QString modeParc;
public:
    explicit QLedLabel(QWidget *parent = 0);

    enum Etat{
        EtatOk,
        EtatWarning,
        EtatError
    };



signals:

public slots:
    void setState(Etat state);
    void setState(bool state);
};

#endif // QLEDLABEL_H
