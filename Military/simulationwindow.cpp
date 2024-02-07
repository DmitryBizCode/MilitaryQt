#include "simulationwindow.h"
#include "ui_simulationwindow.h"
#include "mainwindow.h"

Simulationwindow::Simulationwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Simulationwindow)
{
    ui->setupUi(this);
}

Simulationwindow::~Simulationwindow()
{
    delete ui;
}
void Simulationwindow::on_pushButton_clicked()
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
    if(weather == "Рівнина")
        weather = "Plain";
    else
        weather = "Swamp";
    Simulation S(weather);
    Fight F;
    F.AddOP(tan_Op, shoo_Op, dro_Op, vec_Op);
    F.AddMY(tan_My, shoo_My, dro_My, vec_My);
    F.Parse();
    F.printMaps();
    tuple<bool, int> simulationresault = S.Sim();
    F.printMaps();

    DialogWiner D(nullptr,tan_My,shoo_My,vec_My,dro_My,tan_Op,shoo_Op,vec_Op,dro_Op,get<0>(simulationresault),get<1>(simulationresault),weather);
    D.setModal(true);
    D.exec();
}


void Simulationwindow::on_Return_to_home_clicked()
{
    // Check if a MainWindow instance already exists
    QList<QWidget*> topLevelWidgets = QApplication::topLevelWidgets();
    for (QWidget* widget : topLevelWidgets)
    {
        MainWindow* mainWindow = qobject_cast<MainWindow*>(widget);
        if (mainWindow)
        {
            // MainWindow instance already exists, bring it to front and close this window
            mainWindow->show();
            this->close();
            return;
        }
    }
    // If no MainWindow instance exists, create a new one
    MainWindow* mainWindow = new MainWindow();
    mainWindow->show();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}
