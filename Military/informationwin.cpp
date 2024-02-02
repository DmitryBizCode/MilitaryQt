#include "informationwin.h"
#include "ui_informationwin.h"
#include "mainwindow.h"

InformationWin::InformationWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InformationWin)
{
    ui->setupUi(this);
}

InformationWin::~InformationWin()
{
    delete ui;
}

void InformationWin::on_Return_to_home_clicked()
{
        // Check if a MainWindow instance already exists
        QList<QWidget*> topLevelWidgets = QApplication::topLevelWidgets();
        for (QWidget* widget : topLevelWidgets)
        {
            MainWindow* mainWindow = qobject_cast<MainWindow*>(widget);
            if (mainWindow)
            {
                // MainWindow instance already exists, bring it to front and close this window
                mainWindow->show();
                this->close();
                return;
            }
        }
        // If no MainWindow instance exists, create a new one
        MainWindow* mainWindow = new MainWindow();
        mainWindow->show();
        mainWindow->setAttribute(Qt::WA_DeleteOnClose);
        this->close();
}
