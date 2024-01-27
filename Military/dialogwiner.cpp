#include "dialogwiner.h"
#include "ui_dialogwiner.h"
#include "Simulation.h"

DialogWiner::DialogWiner(QWidget *parent, int Ta, int Sa, int Va, int Da, int Tb, int Sb, int Vb, int Db, bool winer, int time, std::string weather)
    : QDialog(parent), ui(new Ui::DialogWiner),Ta(Ta),Sa(Sa),Va(Va),Da(Da),Tb(Tb),Sb(Sb),Vb(Vb),Db(Db),resault(winer),time(time),weather(weather)
{
    // Constructor implementation here
    ui->setupUi(this);
    setupdatenew();
}

DialogWiner::~DialogWiner()
{
    delete ui;
}

void DialogWiner::setupdatenew()
{
    if(resault){
        ui->label->setText("Перемога");
        ui->label_2->setText("Поразка");
    }
    else{
        ui->label->setText("Поразка");
        ui->label_2->setText("Перемога");
    }
    if(weather == "Plain")
        weather = "Рівнина";
    else
        weather = "Болото";
    Simulation S(weather);
    ui->TimerQt->setText("Час бою:  " + QString::number(time) + " хвилин");
    tuple<int, int, int, int, int, int, int, int> res = S.GetData();
    ui->weatherLabel->setText("Місцевість: " + QString::fromStdString(weather));
    ui->Ta->setText("Танки    "+QString::number(Ta) + "         ("+  QString::number((-1) * (Ta - get<2>(res)))+ ")");
    ui->Tb->setText("Танки    "+QString::number(Tb) + "         ("+ QString::number((-1) * (Tb - get<3>(res)))+ ")");
    ui->Sa->setText("Піхотинці    "+QString::number(Sa) + "      ("+ QString::number((-1) * (Sa - get<0>(res)))+ ")");
    ui->Sb->setText("Піхотинці    "+QString::number(Sb) + "      ("+ QString::number((-1) * (Sb - get<1>(res)))+ ")");
    ui->Va->setText("Бронемашини    "+QString::number(Va) + "      ("+ QString::number((-1) * (Va - get<6>(res)))+ ")");
    ui->Vb->setText("Бронемашини    "+QString::number(Vb) + "      ("+ QString::number((-1) * (Vb - get<7>(res)))+ ")");
    ui->Da->setText("Дрони    "+QString::number(Da) + "        ("+ QString::number((-1) * (Da - get<4>(res)))+ ")");
    ui->Db->setText("Дрони    "+QString::number(Db) + "        ("+ QString::number((-1) * (Db - get<5>(res)))+ ")");
}
