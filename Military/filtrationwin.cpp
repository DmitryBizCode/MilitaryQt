#include "filtrationwin.h"
#include "ui_filtrationwin.h"
#include "Filtration.h"
#include "mainwindow.h"

FiltrationWin::FiltrationWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FiltrationWin)
{
    ui->setupUi(this);
    FiltrationWin12(0, 0);
    ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Не відфільтровані"));
}

FiltrationWin::~FiltrationWin()
{
    delete ui;
}

void FiltrationWin::FiltrationWin12(int dis, int calib)
{
    // Очищення таблиці перед додаванням нових елементів
    ui->tableWidget->clear();

    Filtration fil("data.json");
    vector<string> arr_filtr = fil.PrintObjectsWithGreaterThan(dis, calib);

    // Визначення кількості колонок та рядків у таблиці
    ui->tableWidget->setColumnCount(1);  // Одна колонка
    ui->tableWidget->setRowCount(arr_filtr.size());

    int row = 0;
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch); // Займає всю доступну ширину
    ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Відфільтровані"));
    if(arr_filtr.empty()){
        ui->tableWidget->setRowCount(2);
        QTableWidgetItem *item = new QTableWidgetItem;
        item->setText("Введені критерії не підходять до жодного з наявного озброєння");
        ui->tableWidget->setItem(0, 0, item);
        QTableWidgetItem *item2 = new QTableWidgetItem;
        item2->setText("Помилка в значеннях, спробуйте інші дані");
        ui->tableWidget->setItem(1, 0, item2);
        ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem("Помилка"));
    }
    for (const string& element : arr_filtr) {
        // Додаємо новий елемент у таблицю
        QString res = QString::fromLocal8Bit(element.data(), element.size());
        QTableWidgetItem *item = new QTableWidgetItem;
        item->setText(res);
        ui->tableWidget->setItem(row, 0, item);
        row++;
    }
}

void FiltrationWin::on_FiltrationOn__clicked()
{
    int DisEd = ui->distanceEd->text().toInt();
    int CalibEd = ui->caliberEd->text().toInt();

    FiltrationWin12(DisEd,CalibEd);
}


void FiltrationWin::on_Return_to_home_clicked()
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

