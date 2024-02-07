#ifndef SIMULATIONWINDOW_H
#define SIMULATIONWINDOW_H

#include <QWidget>
#include <QString>
#include <QComboBox>
#include "nlohmann/json.hpp"
#include "Serealization.h"
#include "Fight.h"
#include "Filtration.h"
#include "Simulation.h"
#include "dialogwiner.h"
namespace Ui {
class Simulationwindow;
}

class Simulationwindow : public QWidget
{
    Q_OBJECT

public:
    explicit Simulationwindow(QWidget *parent = nullptr);
    ~Simulationwindow();

private slots:
    void on_pushButton_clicked();

    void on_Return_to_home_clicked();

private:
    Ui::Simulationwindow *ui;
};

#endif // SIMULATIONWINDOW_H
