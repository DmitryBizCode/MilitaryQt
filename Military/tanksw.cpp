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
    Forma *foo = new Forma(17, 17);
    hide();
    foo->show();
}


void Tanksw::on_Chelenger_clicked()
{
    Forma *foo = new Forma(18, 18);
    hide();
    foo->show();
}


void Tanksw::on_Leopard1_clicked()
{
    Forma *foo = new Forma(19, 19);
    hide();
    foo->show();
}


void Tanksw::on_Leopard2_clicked()
{
    Forma *foo = new Forma(20, 20);
    hide();
    foo->show();
}


void Tanksw::on_t54_clicked()
{
    Forma *foo = new Forma(21, 21);
    hide();
    foo->show();
}


void Tanksw::on_t55_clicked()
{
    Forma *foo = new Forma(22, 22);
    hide();
    foo->show();
}


void Tanksw::on_t62_clicked()
{
    Forma *foo = new Forma(23, 23);
    hide();
    foo->show();
}


void Tanksw::on_t64_clicked()
{
    Forma *foo = new Forma(24, 24);
    hide();
    foo->show();
}


void Tanksw::on_t72_clicked()
{
    Forma *foo = new Forma(25, 25);
    hide();
    foo->show();
}


void Tanksw::on_t80_clicked()
{
    Forma *foo = new Forma(26, 26);
    hide();
    foo->show();
}


void Tanksw::on_t90_clicked()
{
    Forma *foo = new Forma(27, 27);
    hide();
    foo->show();
}

