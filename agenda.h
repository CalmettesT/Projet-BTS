#ifndef AGENDA_H
#define AGENDA_H

#include <QDialog>



namespace Ui {
class Agenda;
}

class Agenda : public QDialog
{
    Q_OBJECT

public:
    explicit Agenda(QWidget *parent = nullptr);
    ~Agenda();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Agenda *ui;
};

#endif // AGENDA_H









