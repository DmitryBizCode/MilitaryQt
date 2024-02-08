#ifndef FORMA_H
#define FORMA_H

#include <QWidget>
#include <QPixmap>
#include <vector>
namespace Ui {
class Forma;
}

class Forma : public QWidget
{
    Q_OBJECT

public:
    explicit Forma(QWidget *parent = nullptr, int image_default = 0, int text_default = 0);
    ~Forma();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Forma *ui;
    std::vector<QString> arr_image;
    std::vector<QString> arr_text;

    void Func_of_array();
    void FuncSet(int image, int text);
    int image_default;
    int text_default;
};

#endif // FORMA_H
