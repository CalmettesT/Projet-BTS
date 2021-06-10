#ifndef CONFIG_H
#define CONFIG_H

#include <QDialog>
#include <fstream>
#include <string>
#include <QString>
#include <QDebug>
#include <QStringList>
#include <QList>
#include <QFile>
#include <QDir>
#include <iostream>
//#include <direct.h>

namespace Ui {
class config;
}

class config : public QDialog
{
    Q_OBJECT

public:
    explicit config(QWidget *parent = nullptr);
    ~config();

private:
    Ui::config *ui;
};

#endif // CONFIG_H
