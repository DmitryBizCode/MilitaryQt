#include "filtrationwin.h"
#include "ui_filtrationwin.h"

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
