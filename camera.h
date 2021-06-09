#ifndef CAMERA_H
#define CAMERA_H

#include <QDialog>
#include <QDateTime>
#include <QTimer>

namespace Ui {
class camera;
}

class camera : public QDialog
{
    Q_OBJECT

public:
    explicit camera(QWidget *parent = nullptr);
    ~camera();

private:
    Ui::camera *ui;
    QTimer *timer;
};

#endif // CAMERA_H
