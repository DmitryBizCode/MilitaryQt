#include "filtrationwin.h"
#include "ui_filtrationwin.h"
#include "Filtration.h"

FiltrationWin::FiltrationWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FiltrationWin)
{

    ui->setupUi(this);
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(1);  // Одна колонка
    ui->tableWidget->setRowCount(1);
    QTableWidgetItem *item = new QTableWidgetItem;

    item->setText("фівasd");
    ui->tableWidget->setItem(0, 0, item);
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
    for (const string& element : arr_filtr) {
        // Додаємо новий елемент у таблицю
        QString res = QString::fromLocal8Bit(element.data(), element.size());        QTableWidgetItem *item = new QTableWidgetItem;
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

