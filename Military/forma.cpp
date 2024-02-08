#include "forma.h"
#include "ui_forma.h"
#include "forminf.h"

Forma::Forma(QWidget *parent, int image_default, int text_default)
    : QWidget(parent)
    , ui(new Ui::Forma),image_default(image_default),  text_default(text_default)
{
    ui->setupUi(this);
    Func_of_array();
    FuncSet(image_default, text_default);
}

Forma::~Forma()
{
    delete ui;
}

void Forma::on_pushButton_clicked()
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
void Forma::Func_of_array(){
    arr_image.push_back(":/resimg/IMage/imgarta/m777.jpg");
    arr_text.push_back("Рома лох");
}
void Forma::FuncSet(int image, int text){
    // Створюємо об'єкт QPixmap та завантажуємо зображення
    QPixmap pixmap(arr_image[image]);

    // Перевірка, чи вдалося завантажити зображення
    if (!pixmap.isNull()) {
        // Встановлюємо зображення для QLabel
        ui->label->setPixmap(pixmap);
    } else {
        // Обробляємо помилку завантаження зображення
        qDebug() << "Помилка завантаження зображення";
    }
    ui->Textui->setText(arr_text[text]);
}
