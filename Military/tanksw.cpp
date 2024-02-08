#include "tanksw.h"
#include "ui_tanksw.h"
#include "forminf.h"

Tanksw::Tanksw(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Tanksw)
{
    ui->setupUi(this);
}

Tanksw::~Tanksw()
{
    delete ui;
}

void Tanksw::on_HomeB_clicked()
{
    // Check if a MainWindow instance already exists
    QList<QWidget*> topLevelWidgets = QApplication::topLevelWidgets();
    for (QWidget* widget : topLevelWidgets)
    {
        Forminf* mainWindow = qobject_cast<Forminf*>(widget);
        if (mainWindow)
        {
            // MainWindow instance already exists, bring it to front and close this window
            mainWindow->show();
            this->close();
            return;
        }
    }
    // If no MainWindow instance exists, create a new one
    Forminf* mainWindow = new Forminf();
    mainWindow->show();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);
    this->close();
}


void Tanksw::on_Abrams_clicked()
{

}


void Tanksw::on_Chelenger_clicked()
{

}


void Tanksw::on_Leopard1_clicked()
{

}


void Tanksw::on_Leopard2_clicked()
{

}


void Tanksw::on_t54_clicked()
{

}


void Tanksw::on_t55_clicked()
{

}


void Tanksw::on_t62_clicked()
{

}


void Tanksw::on_t64_clicked()
{

}


void Tanksw::on_t72_clicked()
{

}


void Tanksw::on_t80_clicked()
{

}


void Tanksw::on_t90_clicked()
{

}

