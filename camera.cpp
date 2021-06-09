#include "camera.h"
#include "ui_camera.h"

camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);
    ui->dateCam->setText(QDateTime::currentDateTime().toString("dd/MM/yyyy  hh:mm:ss"));
    timer = new QTimer (this);
    timer->start(100);
}

camera::~camera()
{
    delete ui;
}
