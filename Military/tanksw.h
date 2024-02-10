#ifndef TANKSW_H
#define TANKSW_H

#include <QWidget>
#include "forma.h"

namespace Ui {
class Tanksw;
}

class Tanksw : public QWidget
{
    Q_OBJECT

public:
    explicit Tanksw(QWidget *parent = nullptr);
    ~Tanksw();

private slots:
    void on_HomeB_clicked();

    void on_Abrams_clicked();

    void on_Chelenger_clicked();

    void on_Leopard1_clicked();

    void on_Leopard2_clicked();

    void on_t54_clicked();

    void on_t55_clicked();

    void on_t62_clicked();

    void on_t64_clicked();

    void on_t72_clicked();

    void on_t80_clicked();

    void on_t90_clicked();

private:
    Ui::Tanksw *ui;
};

#endif // TANKSW_H
