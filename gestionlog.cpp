#include "gestionlog.h"

GestionLog::GestionLog()
{

}


void GestionLog::ajoutLog(string data)
{
    string const nomDeFichier("/Users/calmettesthomas/BTS/Projet-BTS/Fichier_Log.txt");
    ofstream monFlux(nomDeFichier.c_str(), fstream::app|fstream::out);

    if(monFlux)
    {
        QString sDate = QDateTime::currentDateTime().toString("dd/MM/yyyy  hh:mm:ss");
        string date = sDate.toStdString();
        monFlux<<endl << date <<endl << data;
        monFlux.close();
    }
    else
    {
        qDebug()<<"erreur";
    }

}

void GestionLog::lectureLog()
{
    string ligne;
    string const nomDeFichier("/Users/calmettesthomas/BTS/Projet-BTS/Fichier_Log.txt");
    ifstream fichier("/Users/calmettesthomas/BTS/Projet-BTS/Fichier_Log.txt");
}

void GestionLog::clear()
{
    ofstream fichier("/Users/calmettesthomas/BTS/Projet-BTS/Fichier_Log.txt");
    fichier.close();
    if(remove("/Users/calmettesthomas/BTS/Projet-BTS/Fichier_Log.txt")==0)
    {
        qDebug()<<"supression reussi";
    }
    else
    {
        qDebug()<<"erreur supression";
    }
}

