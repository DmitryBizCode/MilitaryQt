#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//#include "informationwin.h"
//#include "simulationwin.h"
#include "filtrationwin.h"
#include "forminf.h"
#include "simulationwindow.h"


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
    Simulationwindow simulation;
    FiltrationWin filtration;
    Forminf information;
};
#endif // MAINWINDOW_H
