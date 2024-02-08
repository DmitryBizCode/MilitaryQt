#ifndef AVIATION_H
#define AVIATION_H

#include <QWidget>

namespace Ui {
class Aviation;
}

class Aviation : public QWidget
{
    Q_OBJECT

public:
    explicit Aviation(QWidget *parent = nullptr);
    ~Aviation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Aviation *ui;
};

#endif // AVIATION_H
