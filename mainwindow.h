#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>
#include <QMainWindow>
#include "supervision.h"
#include "qledlabel.h"
#include "gestionlog.h"
#include "ihmagenda.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:

    explicit MainWindow(QWidget *parent = 0);
    QString recupModeParc(QString modeParc2);
    ~MainWindow();

private slots:

    void on_BoutonVanne1_clicked();

    void on_BoutonVanne2_clicked();

    void on_BoutonVanne3_clicked();

    void on_BoutonVanne4_clicked();

    void on_BoutonVanne5_clicked();

    void on_BoutonVanne6_clicked();

    void on_BoutonVanne7_clicked();

    void on_Supervision_clicked();

    void on_ValiderDebit_clicked();

    void on_validerMode_clicked();

    void couleurPompe();

    void on_agenda_clicked();

    void on_ArreterTapis_clicked();

private:
    Ui::MainWindow *ui;
    int debit2;
    QString modeParc2;
    QLedLabel pompe;
};

#endif // MAINWINDOW_H
