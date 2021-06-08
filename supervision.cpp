#include "supervision.h"
#include "ui_supervision.h"
#include "capteur.h"
#include "ui_capteur.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>


GestionLog supervisionLog;


Supervision::Supervision(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Supervision)
{


    supervisionLog.ajoutLog("ouverture de Supervision \n");
    ui->setupUi(this);

    ui->boutonEffacerLog->hide();
    ui->textEditLog->hide();
    //**************************************POMPE**************************************************
    ui->ArretPompe1->hide();
    ui->ArretPompe2->hide();
    ui->ArretPompe3->hide();
    ui->Etatpompe1->hide();
    ui->Etatpompe2->hide();
    ui->Etatpompe3->hide();
    ui->MarchePompe1->hide();
    ui->MarchePompe2->hide();
    ui->MarchePompe3->hide();
    ui->infoPompe1->hide();
    ui->infoPompe2->hide();
    ui->infoPompe3->hide();
    ui->labelEtatPompe->hide();
    ui->labelInfoPompe->hide();
    ui->labelPompe1->hide();
    ui->labelPompe2->hide();
    ui->labelPompe3->hide();
    ui->groupBoxP1->hide();
    ui->groupBoxP2->hide();
    ui->groupBoxP3->hide();
    ui->lcdP1->hide();
    ui->lcdP2->hide();
    ui->lcdP3->hide();
    ui->Etatpompe1->setText(etatP1);
    ui->Etatpompe2->setText(etatP2);
    ui->Etatpompe3->setText(etatP3);
    ui->boutonValidePompe1->hide();
    ui->boutonValidePompe2->hide();
    ui->boutonValidePompe3->hide();
    //**************************************Vannes**************************************************
    ui->SliderVanne1->hide();
    ui->SliderVanne2->hide();
    ui->SliderVanne3->hide();
    ui->SliderVanne4->hide();
    ui->SliderVanne5->hide();
    ui->SliderVanne6->hide();
    ui->SliderVanne7->hide();
    ui->groupBoxV1->hide();
    ui->groupBoxV2->hide();
    ui->groupBoxV3->hide();
    ui->groupBoxV4->hide();
    ui->groupBoxV5->hide();
    ui->groupBoxV6->hide();
    ui->groupBoxV7->hide();
    ui->boutonModifValeurVanne1->hide();
    ui->boutonModifVanne2->hide();
    ui->boutonModifVanne3->hide();
    ui->boutonModifVanne4->hide();
    ui->boutonModifVanne5->hide();
    ui->boutonModifVanne6->hide();
    ui->boutonModifVanne7->hide();
    ui->labelModifValVanne->hide();
    ui->labelvanne->hide();


}

Supervision::~Supervision()
{
    delete ui;
    supervisionLog.ajoutLog("Fermeture Supervision \n");
}

void Supervision::on_BoutonVannes_clicked()
{
    ui->boutonEffacerLog->hide();
    ui->textEditLog->hide();
    supervisionLog.ajoutLog("Ouverture des informations des vannes\n");

    infoVanne1 = 67;
    infoVanne2 = 59;
    infoVanne3 = 24;
    infoVanne4 = 12;
    infoVanne5 = 89;
    infoVanne6 = 56;
    infoVanne7 = 45;

    ui->lcdV1->display(infoVanne1);
    ui->SliderVanne1->setValue(infoVanne1);

    ui->lcdV2->display(infoVanne2);
    ui->SliderVanne2->setValue(infoVanne2);

    ui->lcdV3->display(infoVanne3);
    ui->SliderVanne3->setValue(infoVanne3);

    ui->lcdV4->display(infoVanne4);
    ui->SliderVanne4->setValue(infoVanne4);

    ui->lcdV5->display(infoVanne5);
    ui->SliderVanne5->setValue(infoVanne5);

    ui->lcdV6->display(infoVanne6);
    ui->SliderVanne6->setValue(infoVanne6);

    ui->lcdV7->display(infoVanne7);
    ui->SliderVanne7->setValue(infoVanne7);

    ui->ArretPompe1->hide();
    ui->ArretPompe2->hide();
    ui->ArretPompe3->hide();
    ui->Etatpompe1->hide();
    ui->Etatpompe2->hide();
    ui->Etatpompe3->hide();
    ui->MarchePompe1->hide();
    ui->MarchePompe2->hide();
    ui->MarchePompe3->hide();
    ui->infoPompe1->hide();
    ui->infoPompe2->hide();
    ui->infoPompe3->hide();
    ui->labelEtatPompe->hide();
    ui->labelInfoPompe->hide();
    ui->labelPompe1->hide();
    ui->labelPompe2->hide();
    ui->labelPompe3->hide();
    ui->groupBoxP1->hide();
    ui->groupBoxP2->hide();
    ui->groupBoxP3->hide();
    ui->lcdP1->hide();
    ui->lcdP2->hide();
    ui->lcdP3->hide();
    ui->boutonValidePompe1->hide();
    ui->boutonValidePompe2->hide();
    ui->boutonValidePompe3->hide();

    ui->videP->hide();
    ui->SliderVanne1->show();
    ui->SliderVanne2->show();
    ui->SliderVanne3->show();
    ui->SliderVanne4->show();
    ui->SliderVanne5->show();
    ui->SliderVanne6->show();
    ui->SliderVanne7->show();
    ui->groupBoxV1->show();
    ui->groupBoxV2->show();
    ui->groupBoxV3->show();
    ui->groupBoxV4->show();
    ui->groupBoxV5->show();
    ui->groupBoxV6->show();
    ui->groupBoxV7->show();
    ui->boutonModifValeurVanne1->show();
    ui->boutonModifVanne2->show();
    ui->boutonModifVanne3->show();
    ui->boutonModifVanne4->show();
    ui->boutonModifVanne5->show();
    ui->boutonModifVanne6->show();
    ui->boutonModifVanne7->show();
    ui->labelModifValVanne->show();
    ui->labelvanne->show();
}

void Supervision::on_BoutonPompes_clicked()
{
    ui->boutonEffacerLog->hide();
    ui->textEditLog->hide();
    supervisionLog.ajoutLog("Ouverture des informations des pompes\n");
    etatP1 = "Pompe 1 en marche";
    ui->Etatpompe1->setText(etatP1);

    etatP2 = "Pompe 2 arrete";
    ui->Etatpompe2->setText(etatP2);

    etatP3 = "Pompe 3 en marche";
    ui->Etatpompe3->setText(etatP3);

    ui->ArretPompe1->show();
    ui->ArretPompe2->show();
    ui->ArretPompe3->show();
    ui->Etatpompe1->show();
    ui->Etatpompe2->show();
    ui->Etatpompe3->show();
    ui->MarchePompe1->show();
    ui->MarchePompe2->show();
    ui->MarchePompe3->show();
    ui->infoPompe1->show();
    ui->infoPompe2->show();
    ui->infoPompe3->show();
    ui->labelEtatPompe->show();
    ui->labelInfoPompe->show();
    ui->labelPompe1->show();
    ui->labelPompe2->show();
    ui->labelPompe3->show();
    ui->groupBoxP1->show();
    ui->groupBoxP2->show();
    ui->groupBoxP3->show();
    ui->lcdP1->show();
    ui->lcdP2->show();
    ui->lcdP3->show();
    ui->boutonValidePompe1->show();
    ui->boutonValidePompe2->show();
    ui->boutonValidePompe3->show();


    ui->videP->show();
    ui->SliderVanne1->hide();
    ui->SliderVanne2->hide();
    ui->SliderVanne3->hide();
    ui->SliderVanne4->hide();
    ui->SliderVanne5->hide();
    ui->SliderVanne6->hide();
    ui->SliderVanne7->hide();
    ui->groupBoxV1->hide();
    ui->groupBoxV2->hide();
    ui->groupBoxV3->hide();
    ui->groupBoxV4->hide();
    ui->groupBoxV5->hide();
    ui->groupBoxV6->hide();
    ui->groupBoxV7->hide();
    ui->boutonModifValeurVanne1->hide();
    ui->boutonModifVanne2->hide();
    ui->boutonModifVanne3->hide();
    ui->boutonModifVanne4->hide();
    ui->boutonModifVanne5->hide();
    ui->boutonModifVanne6->hide();
    ui->boutonModifVanne7->hide();
    ui->labelModifValVanne->hide();
    ui->labelvanne->hide();
}

void Supervision::on_BoutonCapteur_clicked()
{
    ui->boutonEffacerLog->hide();
    ui->textEditLog->hide();

    Capteur cap;
    cap.setModal(false);
    cap.exec();
}

void Supervision::on_boutonModifValeurVanne1_clicked()
{
    infoVanne1 = ui->SliderVanne1->value();
    qDebug() << "modif V1 marche : " << infoVanne1;
    //ajout dans log
    supervisionLog.ajoutLog("modification vanne 1\n");
}

void Supervision::on_boutonModifVanne2_clicked()
{
    infoVanne2 = ui->SliderVanne2->value();
    qDebug() << "modif V2 marche : " << infoVanne2;
    //ajout dans log
    supervisionLog.ajoutLog("modification vanne 2\n");
}

void Supervision::on_boutonModifVanne3_clicked()
{
    infoVanne3 = ui->SliderVanne3->value();
    qDebug() << "modif V3 marche : " << infoVanne3;
    //ajout dans log
    supervisionLog.ajoutLog("modification vanne 3\n");
}

void Supervision::on_boutonModifVanne4_clicked()
{
    infoVanne4 = ui->SliderVanne4->value();
    qDebug() << "modif V4 marche : " << infoVanne4;
    //ajout dans log
    supervisionLog.ajoutLog("modification vanne 4\n");
}

void Supervision::on_boutonModifVanne5_clicked()
{
    infoVanne5 = ui->SliderVanne5->value();
    qDebug() << "modif V5 marche : " << infoVanne5;
    //ajout dans log
    supervisionLog.ajoutLog("modification vanne 5\n");
}

void Supervision::on_boutonModifVanne6_clicked()
{
    infoVanne6 = ui->SliderVanne6->value();
    qDebug() << "modif V6 marche : " << infoVanne6;
    //ajout dans log
    supervisionLog.ajoutLog("modification vanne 6\n");
}

void Supervision::on_boutonModifVanne7_clicked()
{
    infoVanne7 = ui->SliderVanne7->value();
    qDebug() << "modif V7 marche : " << infoVanne7;
    //ajout dans log
    supervisionLog.ajoutLog("modification vanne 7\n");
}

void Supervision::on_MarchePompe1_clicked()
{
    etatP1 = "Pompe 1 en marche";
    ui->Etatpompe1->setText(etatP1);
    //ajout dans log
    supervisionLog.ajoutLog("pompe 1 mis en marche\n");

}

void Supervision::on_MarchePompe2_clicked()
{
    etatP2 = "Pompe 2 en marche";
    ui->Etatpompe2->setText(etatP2);
    //ajout dans log
    supervisionLog.ajoutLog("pompe 2 mis en marche\n");
}

void Supervision::on_MarchePompe3_clicked()
{
    etatP3 = "Pompe 3 en marche";
    ui->Etatpompe3->setText(etatP3);
    //ajout dans log
    supervisionLog.ajoutLog("pompe 3 mis en marche\n");
}

void Supervision::on_ArretPompe1_clicked()
{
    etatP1 = "Pompe 1 arrete";
    ui->Etatpompe1->setText(etatP1);
    //ajout dans log
    supervisionLog.ajoutLog("pompe 1 arreté\n");
}

void Supervision::on_ArretPompe2_clicked()
{
    etatP2 = "Pompe 2 arrete";
    ui->Etatpompe2->setText(etatP2);
    //ajout dans log
    supervisionLog.ajoutLog("pompe 2 arreté\n");
}

void Supervision::on_ArretPompe3_clicked()
{
    etatP3 = "Pompe 3 arrete";
    ui->Etatpompe3->setText(etatP3);
    //ajout dans log
    supervisionLog.ajoutLog("pompe 3 arreté\n");
}

void Supervision::on_FichierLog_clicked()
{
    //affichage des log
    ui->boutonEffacerLog->show();
    ui->textEditLog->show();
    QFile file("/Users/calmettesthomas/BTS/Projet-BTS/Fichier_Log.txt");

    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not open");
    }

    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEditLog->setPlainText(text);
    file.close();


    supervisionLog.ajoutLog("ouverture fichier log \n");
    QDesktopServices::openUrl(QUrl("/Users/calmettesthomas/BTS/Projet-BTS/Fichier_Log.txt"));



    ui->videP->show();
    ui->SliderVanne1->hide();
    ui->SliderVanne2->hide();
    ui->SliderVanne3->hide();
    ui->SliderVanne4->hide();
    ui->SliderVanne5->hide();
    ui->SliderVanne6->hide();
    ui->SliderVanne7->hide();
    ui->groupBoxV1->hide();
    ui->groupBoxV2->hide();
    ui->groupBoxV3->hide();
    ui->groupBoxV4->hide();
    ui->groupBoxV5->hide();
    ui->groupBoxV6->hide();
    ui->groupBoxV7->hide();
    ui->boutonModifValeurVanne1->hide();
    ui->boutonModifVanne2->hide();
    ui->boutonModifVanne3->hide();
    ui->boutonModifVanne4->hide();
    ui->boutonModifVanne5->hide();
    ui->boutonModifVanne6->hide();
    ui->boutonModifVanne7->hide();
    ui->labelModifValVanne->hide();
    ui->labelvanne->hide();

    ui->ArretPompe1->hide();
    ui->ArretPompe2->hide();
    ui->ArretPompe3->hide();
    ui->Etatpompe1->hide();
    ui->Etatpompe2->hide();
    ui->Etatpompe3->hide();
    ui->MarchePompe1->hide();
    ui->MarchePompe2->hide();
    ui->MarchePompe3->hide();
    ui->infoPompe1->hide();
    ui->infoPompe2->hide();
    ui->infoPompe3->hide();
    ui->labelEtatPompe->hide();
    ui->labelInfoPompe->hide();
    ui->labelPompe1->hide();
    ui->labelPompe2->hide();
    ui->labelPompe3->hide();
    ui->groupBoxP1->hide();
    ui->groupBoxP2->hide();
    ui->groupBoxP3->hide();
    ui->lcdP1->hide();
    ui->lcdP2->hide();
    ui->lcdP3->hide();
    ui->boutonValidePompe1->hide();
    ui->boutonValidePompe2->hide();
    ui->boutonValidePompe3->hide();
}

void Supervision::on_boutonValidePompe1_clicked()
{
    supervisionLog.ajoutLog("modification Pompe 1 \n");
    puiP1 = ui->infoPompe1->value();
    qDebug() << "modif P1 : " << puiP1;
}

void Supervision::on_boutonValidePompe2_clicked()
{
    supervisionLog.ajoutLog("modification Pompe 2 \n");
    puiP2 = ui->infoPompe2->value();
    qDebug() << "modif P2 : " << puiP2;
}

void Supervision::on_boutonValidePompe3_clicked()
{
    supervisionLog.ajoutLog("modification Pompe 3 \n");
    puiP3 = ui->infoPompe3->value();
    qDebug() << "modif P3 : " << puiP3;
}

void Supervision::on_boutonEffacerLog_clicked()
{
    ui->textEditLog->clear();
    supervisionLog.clear();
}
