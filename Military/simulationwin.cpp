#include "simulationwin.h"
#include "ui_simulationwin.h"

SimulationWin::SimulationWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SimulationWin)
{
    ui->setupUi(this);
}

SimulationWin::~SimulationWin()
{
    delete ui;
}
