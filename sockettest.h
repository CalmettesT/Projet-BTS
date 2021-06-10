#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class SocketTest : public QObject
{
    Q_OBJECT
public:
    explicit SocketTest(QObject *parent = 0);

void Connect();
    
signals:
    
public slots:

private:
    QTcpSocket *socket;
    QString pathG = "/Users/calmettesthomas/BTS/Projet-Bts/xml/test3.xml";
    
};

#endif // SOCKETTEST_H
