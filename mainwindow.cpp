#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "supervision.h"

#include "QMessageBox"
#include "QString"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->ModeParc->addItem("Gravitaire");
    ui->ModeParc->addItem("Mixte");
    ui->ModeParc->addItem("Circuit Fermé");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//***********************************************BOUTON DES VANNES************************************************
void MainWindow::on_BoutonVanne1_clicked()
{
    QMessageBox::about(this,"Vanne 1","Information Vanne 1 : \n Ouverutre Vanne :");
}

void MainWindow::on_BoutonVanne2_clicked()
{
    QMessageBox::about(this,"Vanne 2","Information Vanne 2 : \n Ouverutre Vanne : ");
}

void MainWindow::on_BoutonVanne3_clicked()
{
    QMessageBox::about(this,"Vanne 3","Information Vanne 3 : \n Ouverutre Vanne : ");
}

void MainWindow::on_BoutonVanne4_clicked()
{
    QMessageBox::about(this,"Vanne 4","Information Vanne 4 \n : \n Ouverutre Vanne : ");
}

void MainWindow::on_BoutonVanne5_clicked()
{
    QMessageBox::about(this,"Vanne 5","Information Vanne 5 : \n Ouverutre Vanne : ");
}


void MainWindow::on_BoutonVanne6_clicked()
{
    QMessageBox::about(this,"Vanne 6","Information Vanne 6 : \n Ouverutre Vanne : ");
}

void MainWindow::on_BoutonVanne7_clicked()
{
    QMessageBox::about(this,"Vanne 7","Information Vanne 7 : \n Ouverutre Vanne : ");
}

void MainWindow::on_Supervision_clicked()
{
    Supervision supervision;
    supervision.setModal(true);
    supervision.exec();
}

void MainWindow::on_ValiderDebit_clicked()
{
    QString debit = ui->lineDebit->text();
    qDebug() << "green" << debit;
}



