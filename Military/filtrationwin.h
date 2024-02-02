#ifndef FILTRATIONWIN_H
#define FILTRATIONWIN_H

#include <QMainWindow>
namespace Ui {
class FiltrationWin;
}

class FiltrationWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit FiltrationWin(QWidget *parent = nullptr);
    ~FiltrationWin();

private slots:
    void on_FiltrationOn__clicked();

    void on_Return_to_home_clicked();

private:
    Ui::FiltrationWin *ui;
    void FiltrationWin12(int dis, int calib);

};

#endif // FILTRATIONWIN_H
