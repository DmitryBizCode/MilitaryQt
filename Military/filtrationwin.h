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

private:
    Ui::FiltrationWin *ui;
};

#endif // FILTRATIONWIN_H
