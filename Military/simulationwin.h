#ifndef SIMULATIONWIN_H
#define SIMULATIONWIN_H

#include <QMainWindow>
#include <QString>
#include <QComboBox>
#include <string>
#include "nlohmann/json.hpp"
#include "Serealization.h"
#include "Fight.h"
#include "Filtration.h"
#include "Simulation.h"
#include "dialogwiner.h"


namespace Ui {
class SimulationWin;
}

class SimulationWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit SimulationWin(QWidget *parent = nullptr);
    ~SimulationWin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SimulationWin *ui;
};

#endif // SIMULATIONWIN_H
