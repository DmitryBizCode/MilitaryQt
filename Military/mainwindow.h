#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <iostream>
#include <Windows.h>
#include <random>



#include "simulationwin.h"
#include "filtrationwin.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Information_clicked();

    void on_Filtration_clicked();

    void on_Simulation_clicked();

private:
    Ui::MainWindow *ui;
    SimulationWin simulation;
    FiltrationWin filtration;
};
#endif // MAINWINDOW_H
