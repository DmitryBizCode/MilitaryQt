#ifndef SHOOT_H
#define SHOOT_H

#include <QWidget>

namespace Ui {
class Shoot;
}

class Shoot : public QWidget
{
    Q_OBJECT

public:
    explicit Shoot(QWidget *parent = nullptr);
    ~Shoot();

private slots:
    void on_HomeB_clicked();

    void on_ak_clicked();

    void on_pushButton_3_clicked();

    void on_ar_clicked();

private:
    Ui::Shoot *ui;
};

#endif // SHOOT_H
