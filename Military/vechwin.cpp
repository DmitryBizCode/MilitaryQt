#include "vechwin.h"
#include "ui_vechwin.h"
#include "forminf.h"

Vechwin::Vechwin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Vechwin)
{
    ui->setupUi(this);
}

Vechwin::~Vechwin()
{
    delete ui;
}

void Vechwin::on_HomeB_clicked()
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


void Vechwin::on_bmp1_clicked()
{

}


void Vechwin::on_bmp2_clicked()
{

}


void Vechwin::on_Bradley_clicked()
{

}


void Vechwin::on_BTR80_clicked()
{

}


void Vechwin::on_Cv90_clicked()
{

}


void Vechwin::on_kozak_clicked()
{

}


void Vechwin::on_m113_clicked()
{

}


void Vechwin::on_Marder_clicked()
{

}


void Vechwin::on_Tigr_clicked()
{

}

