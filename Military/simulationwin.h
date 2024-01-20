#ifndef SIMULATIONWIN_H
#define SIMULATIONWIN_H

#include <QMainWindow>

namespace Ui {
class SimulationWin;
}

class SimulationWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit SimulationWin(QWidget *parent = nullptr);
    ~SimulationWin();

private:
    Ui::SimulationWin *ui;
};

#endif // SIMULATIONWIN_H
