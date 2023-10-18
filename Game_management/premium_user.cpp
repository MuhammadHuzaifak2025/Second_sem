#include "premium_user.h"
#include "ui_premium_user.h"
#include<QFile>
#include<QString>
#include<QTextStream>
#include<menu.h>
#include<QMessageBox>
#include<manage_player.h>
#include<mainwindow.h>
QString user_name;
int count = 0;

Premium_User::Premium_User(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Premium_User)
{
    ui->setupUi(this);
    QFile file("Current_status.txt");
    if(!file.exists()){
        qCritical() << "File not found";
        return;
    }
    QString current_User_name;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){

        QTextStream in(&file);
        QStringList data;
        QString line = in.readLine();
        QStringList stringList = line.split(" ");
        data.append(stringList);
        file.close();
        current_User_name = data[0];
        user_name = data[0];
        file.close();
    }
    ui->lineEdit->setText(current_User_name);
    ui->lineEdit->setReadOnly(true);
    ui->lineEdit_2->setReadOnly(true);
    ui->lineEdit_3->setReadOnly(true);

}
Premium_User::~Premium_User()
{
    delete ui;
}

void Premium_User::on_pushButton_clicked()
{
    bool flag = false;
    if(ui->Credit_card->text() == "123456" && ui->CVC->text() == "001" && ui->exp->text() == "1/1/1")
    {
        flag = true;
    }

        if(flag){
            QFile file("Current_status.txt");
            if(!file.exists()){
                qCritical() << "File not found";
                return;
            }

            if(file.open(QIODevice::ReadOnly | QIODevice::Text)){

                QTextStream in(&file);
                QStringList data;
                QString line = in.readLine();
                QStringList stringList = line.split(" ");
                data.append(stringList);
                file.close();
                QString current_User_name = data[0];
                file.close();

                if (flag){
                    QFile file2("Premium_User.txt");
                    if(!file2.open(QIODevice::Append)){

                        qCritical() << file2.errorString();
                        //            QMessageBox::information(this, "Couldn't read file","File is not created or cannot be accessed");
                        return;
                    }
                    QTextStream stream(&file2);

                    stream << current_User_name<< "\n";
                    file2.close() ;
                }
            }
            QMessageBox::information(this, "SUCCESFULL","PAYMENT COMPLETED! ENJOY YOUR GAME");
            menu c;
            c.setModal(true);

            this -> close();
            c.exec();

        }
        else{
            QMessageBox::information(this, "Failed","Invalid Card Details");
            count++;
        }
        if(count >= 3){
            Manage_Player M;
            M.Ban_player(user_name);
             QMessageBox::information(this, "Blocked","Your Account Banned");

            MainWindow m;
            m.show();
            hide();
        }
    }

void Premium_User::on_pushButton_2_clicked()
{
    menu c;
    c.setModal(true);
    this -> close();
    c.exec();
}
