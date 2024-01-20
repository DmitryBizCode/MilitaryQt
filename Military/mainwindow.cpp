#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Information_clicked()
{
    std::cout<<"1"<<std::endl;

}


void MainWindow::on_Filtration_clicked()
{
    std::cout<<"1"<<std::endl;


}


void MainWindow::on_Simulation_clicked()
{
    std::cout<<"1"<<std::endl;
    Simulation S("Plain");
    Fight F;

    F.AddOP(10, 80, 4, 5);
    F.AddMY(0, 20, 201, 0);
    F.Parse();
    F.printMaps();
    S.Sim();
    F.printMaps();
}
/*
void MainWindow::on_Msell_clicked()
{
    hide();
    window2.showMaximized();
}

void MainWindow::on_Macc_clicked()
{
    hide();
    window1.showMaximized();
}
void MainWindow::on_Mrep_clicked()
{
    hide();
    window3.showMaximized();
}
void MainWindow::on_Setting_clicked()
{
    hide();
    windows.showMaximized();
}*/
