#include "gestionxml.h"
#include "sockettest.h"
#include <QByteArray>

SocketTest::SocketTest(QObject *parent) :
    QObject(parent)
{
}

void SocketTest::Connect()
{
    gestionXml xml;
    socket = new QTcpSocket(this);
    socket->connectToHost("127.0.0.1", 9000);

    if(socket->waitForConnected(3000))
    {
        qDebug() << "Connected!";

        xml.openFile("C:/Users/Christian GROS/Documents/xmlClass/test3.xml");

        int id = xml.getNumberId();
        QString str;


        xml.setSenace(str.setNum(id));

        for (int i=0;i<=4;i++)
        {
            QString tab = xml.getTab(i);
            socket->write(tab.toUtf8());
            socket->waitForReadyRead(1000);
        }

        socket->write("fin de l'envoie");
        socket->waitForReadyRead(1000);
        qDebug() << "Reading: " << socket->bytesAvailable();

//        qDebug() << socket->readAll();    //lecture du serveur

        socket->close();
    }
    else
    {
        qDebug() << "Not connected!";
    }
}
