#ifndef SUPERVISION_H
#define SUPERVISION_H
#include <QMessageBox>
#include <QDialog>
#include <QDebug>

namespace Ui {
class Supervision;
}

class Supervision : public QDialog
{
    Q_OBJECT
    
public:
    explicit Supervision(QWidget *parent = 0);
    ~Supervision();
    
private slots:

    void on_BoutonVannes_clicked();

    void on_BoutonPompes_clicked();

    void on_ArreterTapis_clicked();

    void on_BoutonCapteur_clicked();

    void on_modifValeurVanne1_clicked();

private:
    Ui::Supervision *ui;
};

#endif // SUPERVISION_H
