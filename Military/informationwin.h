#ifndef INFORMATIONWIN_H
#define INFORMATIONWIN_H

#include <QMainWindow>

namespace Ui {
class InformationWin;
}

class InformationWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit InformationWin(QWidget *parent = nullptr);
    ~InformationWin();

private:
    Ui::InformationWin *ui;
};

#endif // INFORMATIONWIN_H
