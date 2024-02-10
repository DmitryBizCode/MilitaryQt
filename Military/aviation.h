#ifndef AVIATION_H
#define AVIATION_H

#include <QWidget>
#include "forma.h"

namespace Ui {
class Aviation;
}

class Aviation : public QWidget
{
    Q_OBJECT

public:
    explicit Aviation(QWidget *parent = nullptr);
    ~Aviation();

private slots:
    void on_pushButton_clicked();

    void on_f16_clicked();

    void on_Mig29_clicked();

    void on_Su25_clicked();

    void on_Su27_clicked();

    void on_Su30_clicked();

private:
    Ui::Aviation *ui;
};

#endif // AVIATION_H
