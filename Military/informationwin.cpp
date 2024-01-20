#include "informationwin.h"
#include "ui_informationwin.h"

InformationWin::InformationWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InformationWin)
{
    ui->setupUi(this);
}

InformationWin::~InformationWin()
{
    delete ui;
}
