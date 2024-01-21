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

void SimulationWin::on_pushButton_clicked()
{
    int shoo_My = ui->ShooterMy->text().toInt();
    int shoo_Op = ui->ShooterOp->text().toInt();

    int tan_My = ui->TanksMy->text().toInt();
    int tan_Op = ui->TanksOp->text().toInt();

    int dro_My = ui->DronesMy->text().toInt();
    int dro_Op = ui->DronesOp->text().toInt();

    int vec_My = ui->VechileMy->text().toInt();
    int vec_Op = ui->VechileOp->text().toInt();
    QString qWeather = ui->comboBox->currentText();
    std::string weather = qWeather.toStdString();
    Simulation S(weather);
    Fight F;
    F.AddOP(tan_Op, shoo_Op, dro_Op, vec_Op);
    F.AddMY(tan_My, shoo_My, dro_My, vec_My);
    F.Parse();
    F.printMaps();
    S.Sim();
    F.printMaps();
}
