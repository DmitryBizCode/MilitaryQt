#include "dialogwiner.h"
#include "ui_dialogwiner.h"

DialogWiner::DialogWiner(QWidget *parent, int Ta, int Sa, int Va, int Da, int Tb, int Sb, int Vb, int Db, bool winer, int time)
    : QDialog(parent), ui(new Ui::DialogWiner),Ta(Ta),Sa(Sa),Va(Va),Da(Da),Tb(Tb),Sb(Sb),Vb(Vb),Db(Db),resault(winer),time(time)
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
        ui->label->setText("Winner");
        ui->label_2->setText("Lose");
    }
    else{
        ui->label->setText("Lose");
        ui->label_2->setText("Winner");
    }
    //Get_Shooter_My();
    ui->Ta->setText(QString::number(Ta) + "         (-");
    ui->Tb->setText(QString::number(Tb) + "         (-");
    ui->Sa->setText(QString::number(Sa) + "         (-");
    ui->Sb->setText(QString::number(Sb) + "         (-");
    ui->Va->setText(QString::number(Va) + "         (-");
    ui->Vb->setText(QString::number(Vb) + "         (-");
    ui->Da->setText(QString::number(Da) + "         (-");
    ui->Db->setText(QString::number(Db) + "         (-");
}
