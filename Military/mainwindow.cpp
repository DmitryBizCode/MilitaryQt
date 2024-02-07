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
    hide();
    information.show();
}


void MainWindow::on_Filtration_clicked()
{
    hide();
    filtration.show();
}


void MainWindow::on_Simulation_clicked()
{
    hide();
    simulation.show();
}

