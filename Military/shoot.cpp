#include "shoot.h"
#include "ui_shoot.h"
#include "forminf.h"

Shoot::Shoot(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Shoot)
{
    ui->setupUi(this);
}

Shoot::~Shoot()
{
    delete ui;
}

void Shoot::on_HomeB_clicked()
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


void Shoot::on_ak_clicked()
{
    Forma *foo = new Forma(15, 15);
    hide();
    foo->show();
}

void Shoot::on_ar_clicked()
{
    Forma *foo = new Forma(16, 16);
    hide();
    foo->show();
}

