#ifndef QTAPIS_H
#define QTAPIS_H
#include "QString"
#include <QLabel>


class QTapis
{
    Q_OBJECT
    int charo;

public:
    explicit QTapis(QWidget *parent = 0);

    enum Etat{
        Marche=1,
        Arret=2
    };



signals:

public slots:
    void setEtat(Etat etat);
    void setEtat(bool etat);
};
};

#endif // QTAPIS_H
