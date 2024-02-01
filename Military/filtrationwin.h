#ifndef FILTRATIONWIN_H
#define FILTRATIONWIN_H

#include <QMainWindow>
#include <vector>

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

private:
    Ui::FiltrationWin *ui;
    void FiltrationWin12(int dis, int calib);
};

#endif // FILTRATIONWIN_H
