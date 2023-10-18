#include "add_admin.h"
#include "ui_add_admin.h"
#include<QString>
#include<QFile>
#include<QMessageBox>
#include "admin.h"

Add_Admin::Add_Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Admin)
{
    ui->setupUi(this);

}

Add_Admin::~Add_Admin()
{
    delete ui;
}

void Add_Admin::on_pushButton_clicked()//creating An Account
{
    bool flag = true;
    user_name = ui->lineEdit->text();
    Name = ui->lineEdit_2->text();
    Password = ui->lineEdit_3->text();
    QString pin = ui->lineEdit_3->text();

    QFile Admin ("Admin.txt");
    QTextStream stream(&Admin);
    if(!Admin.open(QIODevice::Append)) {
        qCritical() << "File not found";
        return;
    }

    else{

        Admin.open(QIODevice::ReadOnly);
        while(!stream.atEnd()) {
            QStringList data;
            QString line = stream.readLine();
            QStringList stringList = line.split(" ");
            data.append(stringList);
            qCritical() << data[0];

            if(user_name == data[0]) {
                QMessageBox::information(this, "Failure","Admin is already created..");
                flag = false;
                //                break;
            }
        }

        if(flag == true){
            stream << user_name << " " << Password << "\n";

            QMessageBox::information(this,"Sign Up Successful", "You have successfully signed up");
            Admin.close();
            this->close();
            admin a;
            a.setModal(true);
            a.exec();
        }
    }







    //    while(!in.atEnd()) {
    //        QStringList Data;
    //        QString line = in.readLine();
    //        QStringList stringList = line.split(" ");
    //        Data.append(stringList);

    //        if(Data[0] == user_name) {
    //            QMessageBox::information(this, "Failure","Admin is already created..");
    //            flag = false;
    //            break;
    //        }
    //    }
    //    if(flag){
    //        if( Admin.open(QIODevice::Append|QIODevice::Text)) {
    //            in<<user_name<<" "<<Name<<" "<<Password<<" "<<pin<<"\n";
    //            QMessageBox::information(this, "Success","Admin created..");
    //            Admin.close();
    //        }
    //    }

}
