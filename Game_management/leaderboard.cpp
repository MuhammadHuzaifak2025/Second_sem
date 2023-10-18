#include "leaderboard.h"
#include "ui_leaderboard.h"
#include<QString>
#include<QFile>
#include<menu.h>
#include<score.h>
#include<rank.h>

LeaderBoard::LeaderBoard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeaderBoard)
{
    QFile file("Current_status.txt");
    if(!file.exists()){
        qCritical() << "File not found";
        return;
    }

    QStringList data;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){

        QTextStream in(&file);
        QString line = in.readLine();
        QStringList stringList = line.split(" ");
        data.append(stringList);
        file.close();
    }
    ui->setupUi(this);
    get_LeaderBoard();
    ui->lineEdit->setText(data[0]);
    ui->lineEdit->setReadOnly(true);

    ui->lineEdit_2->setText(data[1]);
    ui->lineEdit_2->setReadOnly(true);

//    Rank R;

//    Score S;
//    int a = S.get_score(data[0]);
//    ui->lineEdit_3->setText(QString::number(a));
//    ui->lineEdit_3->setReadOnly(true);
//    int b = R.get_rank(data[0]);
//    ui->lineEdit_5->setText(QString::number(b));
//    ui->lineEdit_5->setReadOnly(true);


}

LeaderBoard::~LeaderBoard()
{
    delete ui;
}
QStringList LeaderBoard:: get_LeaderBoard(){

    sort_scores();
    QFile file("score.dat");
    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading and writing: %s", qPrintable(file.errorString()));

    }
    QList<Rank> ranks;
    QByteArray data = file.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);

    while (!in.atEnd()) {
        Rank obj;
        in >> obj.score >> obj.name;
        ranks.append(obj);
    }
    //Rank 01
    if(ranks.size()> 1 ){
        ui->lineEdit_7->setText("1");
        ui->lineEdit_7->setReadOnly(true);

        ui->lineEdit_8->setText(ranks[1].name);
        ui->lineEdit_8->setReadOnly(true);

        ui->lineEdit_9->setText(QString::number(ranks[1].score));
        ui->lineEdit_9->setReadOnly(true);
    }
//    Rank 02
    if(ranks.size()>2){
        ui->lineEdit_12->setText("2");
        ui->lineEdit_12->setReadOnly(true);

        ui->lineEdit_11->setText(ranks[2].name);
        ui->lineEdit_11->setReadOnly(true);

        ui->lineEdit_10->setText(QString::number(ranks[2].score));
        ui->lineEdit_10->setReadOnly(true);
    }

//    Rank 03
    if(ranks.size()>3){
        ui->lineEdit_14->setText("3");
        ui->lineEdit_14->setReadOnly(true);

        ui->lineEdit_15->setText(ranks[3].name);
        ui->lineEdit_15->setReadOnly(true);

        ui->lineEdit_13->setText(QString::number(ranks[3].score));
        ui->lineEdit_13->setReadOnly(true);
    }

////Rank 04
    if(ranks.size()>4){

        ui->lineEdit_17->setText("4");
        ui->lineEdit_17->setReadOnly(true);

        ui->lineEdit_18->setText(ranks[4].name);
        ui->lineEdit_18->setReadOnly(true);

        ui->lineEdit_16->setText(QString::number(ranks[4].score));
        ui->lineEdit_16->setReadOnly(true);
    }

////    Rank 05
//
    if(ranks.size()>5){

        ui->lineEdit_21->setText("5");
        ui->lineEdit_21->setReadOnly(true);

        ui->lineEdit_20->setText(ranks[5].name);
        ui->lineEdit_20->setReadOnly(true);

        ui->lineEdit_19->setText(QString::number(ranks[5].score));
        ui->lineEdit_19->setReadOnly(true);
    }

}



void LeaderBoard::on_pushButton_clicked()
{
    menu c;
    c.setModal(true);

    this -> close();
    c.exec();
}

