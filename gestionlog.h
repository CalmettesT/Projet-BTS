#ifndef GESTIONLOG_H
#define GESTIONLOG_H

#include <QDateTime>
#include <QDebug>
#include <QString>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class GestionLog
{
public:
    GestionLog();
    void ajoutLog(string data);
    void clear();
private:
    string const chemin = "/Users/calmettesthomas/BTS/Projet-BTS/Fichier_Log.txt";
};

#endif // GESTIONLOG_H
