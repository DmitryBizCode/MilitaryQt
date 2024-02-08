#ifndef VECHWIN_H
#define VECHWIN_H

#include <QWidget>

namespace Ui {
class Vechwin;
}

class Vechwin : public QWidget
{
    Q_OBJECT

public:
    explicit Vechwin(QWidget *parent = nullptr);
    ~Vechwin();

private slots:
    void on_HomeB_clicked();

    void on_bmp1_clicked();

    void on_bmp2_clicked();

    void on_Bradley_clicked();

    void on_BTR80_clicked();

    void on_Cv90_clicked();

    void on_kozak_clicked();

    void on_m113_clicked();

    void on_Marder_clicked();

    void on_Tigr_clicked();

private:
    Ui::Vechwin *ui;
};

#endif // VECHWIN_H
