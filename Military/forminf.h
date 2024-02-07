#ifndef FORMINF_H
#define FORMINF_H

#include <QWidget>
#include "artelir.h"

namespace Ui {
class Forminf;
}

class Forminf : public QWidget
{
    Q_OBJECT

public:
    explicit Forminf(QWidget *parent = nullptr);
    ~Forminf();

private slots:
    void on_Arta_clicked();

    void on_HomeB_clicked();

    void on_Mlrs_clicked();

    void on_Vech_clicked();

    void on_Tanks_clicked();

    void on_Shoot_clicked();

    void on_Avia_clicked();

private:
    Ui::Forminf *ui;
    Artelir windArt;
};

#endif // FORMINF_H
