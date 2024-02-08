#include "forminf.h"
#include "ui_forminf.h"
#include "mainwindow.h"

Forminf::Forminf(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Forminf)
{
    ui->setupUi(this);
    connect(ui->HomeB, &QPushButton::clicked, this, &Forminf::on_HomeB_clicked);
    installEventFilter(this);
}

Forminf::~Forminf()
{
    delete ui;
}

void Forminf::on_Arta_clicked()
{
    hide();
    windArt.show();
}


void Forminf::on_HomeB_clicked()
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


void Forminf::on_Mlrs_clicked()
{
    hide();
    mlwin.show();
}


void Forminf::on_Vech_clicked()
{
    hide();
    vecwin.show();
}


void Forminf::on_Tanks_clicked()
{
    hide();
    tanwin.show();
}


void Forminf::on_Shoot_clicked()
{
    hide();
    shwin.show();
}


void Forminf::on_Avia_clicked()
{
    hide();
    avia.show();
}

