#include "mlrs.h"
#include "ui_mlrs.h"
#include "forminf.h"

MLRS::MLRS(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MLRS)
{
    ui->setupUi(this);
}

MLRS::~MLRS()
{
    delete ui;
}

void MLRS::on_HomeB_clicked()
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


void MLRS::on_Uragan_clicked()
{
    Forma *foo = new Forma(12, 12);
    hide();
    foo->show();
}


void MLRS::on_smerch_clicked()
{
    Forma *foo = new Forma(13, 13);
    hide();
    foo->show();
}


void MLRS::on_bm21Grad_clicked()
{
    Forma *foo = new Forma(11, 11);
    hide();
    foo->show();
}


void MLRS::on_Himars_clicked()
{
    Forma *foo = new Forma(14, 14);
    hide();
    foo->show();
}

