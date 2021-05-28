#ifndef QLEDLABEL_H
#define QLEDLABEL_H

#include "QString"
#include <QLabel>
#include <QDebug>
#include "gestionlog.h"

class QLedLabel : public QLabel
{
    Q_OBJECT

public:

    explicit QLedLabel(QWidget *parent = 0);
    void setDebit2(int debit3);
    void couleurPompe(QLedLabel &c);
    void setModeParc(QString modeParc);

private:
    int debit;
    QString modeParc;
    QString pompe1;
};

#endif // QLEDLABEL_H
