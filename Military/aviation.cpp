#include "aviation.h"
#include "ui_aviation.h"
#include "forminf.h"

Aviation::Aviation(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Aviation)
{
    ui->setupUi(this);
}

Aviation::~Aviation()
{
    delete ui;
}

void Aviation::on_pushButton_clicked()
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


void Aviation::on_f16_clicked()
{
    Forma *foo = new Forma(6, 6);
    hide();
    foo->show();
}


void Aviation::on_Mig29_clicked()
{
    Forma *foo = new Forma(7, 7);
    hide();
    foo->show();
}


void Aviation::on_Su25_clicked()
{
    Forma *foo = new Forma(8, 8);
    hide();
    foo->show();
}


void Aviation::on_Su27_clicked()
{
    Forma *foo = new Forma(9, 9);
    hide();
    foo->show();
}


void Aviation::on_Su30_clicked()
{
    Forma *foo = new Forma(10, 10);
    hide();
    foo->show();
}

