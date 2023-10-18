#include "admin.h"
#include "ui_admin.h"
#include<vector>
#include<QString>
#include<QFile>
#include<manage_player.h>
#include<add_admin.h>
#include<admin_refund.h>
#include<refund.h>

QString admin::get_latest_purchase_one(){
    QStringList Users = latest_purchase();
    int FS = Users.size();
    return Users[FS-1];
}


QString admin::get_latest_purchase_two(){
    QStringList Users = latest_purchase();
    int FS = Users.size();
    return Users[FS-2];
}

QString admin::get_latest_purchase_three(){
    QStringList Users = latest_purchase();
    int FS = Users.size();
    return Users[FS-3];
}

QStringList admin::latest_purchase(){
    QFile file("Premium_User.txt");

    if(!file.exists()){
        qCritical() << "File not found";
    }
//    QStringList Users;
    QStringList data;
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while(!in.atEnd())
        {
            QString line = in.readLine();
            data.append(line);
        }
        file.close();
    }
    return data;
}

admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    QString A = get_latest_purchase_one();
    ui->lineEdit->setText(A+" Purchased Flappy Bird");
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit_2->setText(get_latest_purchase_two()+" Purchased Flappy Bird");
    ui->lineEdit_2->setReadOnly(true);
    ui->lineEdit_3->setText(get_latest_purchase_three()+" Purchased Flappy Bird");
    ui->lineEdit_3->setReadOnly(true);
    ui->lineEdit_4->setText("Number Of Player Are: "+QString::number(Get_number_player() ));
    ui->lineEdit_5->setText("Number of Refunds Are: "+ QString::number(get_refunds_num() ));
    ui->lineEdit_6->setText("Number of Admins Are: "+ QString::number(countAdminsInFile() ));
    ui->lineEdit_4->setReadOnly(true);
    ui->lineEdit_5->setReadOnly(true);
    ui->lineEdit_6->setReadOnly(true);
}

admin::~admin()
{
    delete ui;
}


void admin::on_pushButton_clicked()
{
    Manage_Player c;
    c.setModal(true);

    this->close();
    c.exec();
}


void admin::on_pushButton_2_clicked()
{
    Add_Admin c;
    c.setModal(true);
    this->close();
    c.exec();
}

void admin::on_pushButton_5_clicked()
{
    Admin_Refund c;
    c.setModal(true);
    this->close();
    c.exec();
}
int admin:: Get_number_player(){
    QString fileName = "Player.txt"; // Replace this with your actual file name
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open the file.";

    }

    QTextStream in(&file);
    int playerCount = 0;

    while (!in.atEnd()) {
        QString line = in.readLine();
        if (!line.isEmpty()) {
            playerCount++;
        }
    }

    file.close();


    qDebug()<<playerCount;
    return playerCount;
}
int admin::get_refunds_num(){
    QString fileName = "Refund.dat"; // Replace this with your actual file name
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "Failed to open the file.";

    }

    QDataStream in(&file);
    int refundCount = 0;

    while (!in.atEnd()) {
        QString A, B, C;
        in >> A >> B >> C;
        refundCount++;
    }

    file.close();

    return refundCount;
}
int admin::countAdminsInFile()
{
    QFile file("Admin.txt");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading: %s", qPrintable(file.errorString()));
        return 0;
    }

    int adminCount = 0;
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (!line.isEmpty()) {
            adminCount++;
        }
    }
    file.close();

    return adminCount;
}
