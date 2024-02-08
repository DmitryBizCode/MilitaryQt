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

    void on_C3_clicked();

    void on_C19_clicked();

    void on_ttt_clicked();

    void on_bogdana_clicked();

    void on_m109_clicked();

    void on_pzh2000_clicked();

private:
    Ui::Artelir *ui;
};

#endif // ARTELIR_H
