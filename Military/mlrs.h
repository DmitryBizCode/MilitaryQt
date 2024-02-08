#ifndef MLRS_H
#define MLRS_H

#include <QWidget>

namespace Ui {
class MLRS;
}

class MLRS : public QWidget
{
    Q_OBJECT

public:
    explicit MLRS(QWidget *parent = nullptr);
    ~MLRS();

private slots:
    void on_HomeB_clicked();

    void on_Uragan_clicked();

    void on_smerch_clicked();

    void on_bm21Grad_clicked();

    void on_Himars_clicked();

private:
    Ui::MLRS *ui;
};

#endif // MLRS_H
