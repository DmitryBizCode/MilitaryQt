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

