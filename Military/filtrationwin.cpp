#include "filtrationwin.h"
#include "ui_filtrationwin.h"
#include "Filtration.h"

FiltrationWin::FiltrationWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FiltrationWin)
{
    ui->setupUi(this);
}

FiltrationWin::~FiltrationWin()
{
    delete ui;
}

void FiltrationWin::FiltrationWin12(int dis, int calib)
{
    Filtration fil("data.json");
    fil.PrintObjectsWithGreaterThan(dis, calib);
}

void FiltrationWin::on_FiltrationOn__clicked()
{
    int DisEd = ui->distanceEd->text().toInt();
    int CalibEd = ui->caliberEd->text().toInt();

    FiltrationWin12(DisEd,CalibEd);
}

