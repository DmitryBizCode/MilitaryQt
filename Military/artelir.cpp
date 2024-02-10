#include "artelir.h"
#include "ui_artelir.h"
#include "forminf.h"

Artelir::Artelir(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Artelir)
{
    ui->setupUi(this);
}

Artelir::~Artelir()
{
    delete ui;
}

void Artelir::on_pushButton_7_clicked()
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

void Artelir::on_C19_clicked()
{
    Forma *foo = new Forma(0, 0);
    hide();
    foo->show();
}

void Artelir::on_bogdana22_clicked()
{
    Forma *foo = new Forma(1, 1);
    hide();
    foo->show();
}

void Artelir::on_C3Akatsia_clicked()
{
    Forma *foo = new Forma(2, 2);
    hide();
    foo->show();
}

void Artelir::on_M109_clicked()
{
    Forma *foo = new Forma(3, 3);
    hide();
    foo->show();
}

void Artelir::on_M777_clicked()
{
    Forma *foo = new Forma(4, 4);
    hide();
    foo->show();
}

void Artelir::on_pzh2000_clicked()
{
    Forma *foo = new Forma(5, 5);
    hide();
    foo->show();
}

