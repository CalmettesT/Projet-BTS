#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "supervision.h"
#include "QMessageBox"
#include "QString"




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
    QMessageBox::about(this,"Vanne 4","Information Vanne 4 : \n Ouverutre Vanne : \n");
}

void MainWindow::on_BoutonVanne5_clicked()
{
    QMessageBox::about(this,"Vanne 5","Information Vanne 5 : \n Ouverutre Vanne : \n");
}

void MainWindow::on_BoutonVanne6_clicked()
{
    QMessageBox::about(this,"Vanne 6","Information Vanne 6 : \n Ouverutre Vanne : \n");
}

void MainWindow::on_BoutonVanne7_clicked()
{
    QMessageBox::about(this,"Vanne 7","Information Vanne 7 : \n Ouverutre Vanne : \n");
}

void MainWindow::on_Supervision_clicked()
{
    Supervision supervision;
    supervision.setModal(true);
    supervision.exec();
}

void MainWindow::on_ValiderDebit_clicked()
{
    QString d= ui->lineDebit->text();
    debit2 = d.toInt();
    pompe.gestionDebit(debit2);
    qDebug() << "Debit :" << debit2;
}

void MainWindow::on_validerMode_clicked()
{
    modeParc2 = ui->ModeParc->currentText();
    pompe.gestionModeParc(modeParc2);
    qDebug()<<"Mode Parc :"<<modeParc2;
}

//void MainWindow::setDebit()
//{
//    QString d= ui->lineDebit->text();
//    debit = d.toInt();
//}

//int MainWindow::getDebit()
//{
//    return debit;
//}

//MainWindow::setModeParc()
//{
//    modeParc = ui->ModeParc->currentText();
//}

//QString MainWindow::getModeParc()
//{
//    return modeParc;
//}
