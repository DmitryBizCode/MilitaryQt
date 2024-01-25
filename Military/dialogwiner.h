#ifndef DIALOGWINER_H
#define DIALOGWINER_H

#include <QDialog>
#include <QString>

namespace Ui {
class DialogWiner;
}

class DialogWiner : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWiner(QWidget *parent = nullptr, int Ta = 0, int Sa = 0, int Va = 0, int Da = 0, int Tb = 0, int Sb = 0, int Vb = 0, int Db = 0);
    ~DialogWiner();

private:
    Ui::DialogWiner *ui;
    void setupdatenew();
    int Ta, Sa, Va, Da, Tb, Sb, Vb, Db;
};

#endif // DIALOGWINER_H
