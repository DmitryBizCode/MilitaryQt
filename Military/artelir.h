#ifndef ARTELIR_H
#define ARTELIR_H

#include <QWidget>

namespace Ui {
class Artelir;
}

class Artelir : public QWidget
{
    Q_OBJECT

public:
    explicit Artelir(QWidget *parent = nullptr);
    ~Artelir();

private slots:
    void on_pushButton_7_clicked();

private:
    Ui::Artelir *ui;
};

#endif // ARTELIR_H
