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

