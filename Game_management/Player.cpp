#include "Player.h"
#include "ui_player.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "mainwindow.h"
#include "menu.h"
#include<score.h>

player::player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Player)
{
    ui->setupUi(this);
    QString main = ":images/mainscreen.png";
    ui->label_2->setStyleSheet("background-image:url("+main+")");

    ui->Username->setPlaceholderText("Username");
    ui->Age->setPlaceholderText("Age");
    ui->Password->setPlaceholderText("Password");
    ui->Passsword2->setPlaceholderText("Re-Password");
    ui->Email->setPlaceholderText("Email");
    ui->Name->setPlaceholderText("Name");
    ui->textEdit->setReadOnly(true);
    ui->Password->setEchoMode(QLineEdit::Password);
    ui->Passsword2->setEchoMode(QLineEdit::Password);
}

player::~player()
{
    delete ui;
}

void player::on_pushButton_clicked()
{
    user_name = ui->Username->text();
    Password = ui->Password->text();
    Age = ui->Age->text();
    Email = ui->Email->text();
    Name = ui->Name->text();
    QString pass2 = ui->Passsword2->text();
    if(pass2 != "" && user_name != ""){
        if(Password == pass2){
            QFile file("Player.txt");


            if(!file.open(QIODevice::Append)){

                qCritical() << file.errorString();
                QMessageBox::information(this, "Couldn't read file","File is not created or cannot be accessed");

                return;
            }
            bool valid = true;
            QFile file1("Player.txt");
            file1.open(QIODevice::ReadOnly);
            QTextStream in(&file1);


            while(!in.atEnd()){

                QStringList data1;
                QString line = in.readLine();
                QStringList stringList = line.split(" ");
                data1.append(stringList);


                if(data1[0]==user_name){


                    valid = false;
                }
            }

            if(valid==true){

                QTextStream stream(&file);

                stream << user_name << " " << Password << " " << Age << " " << Email << " " << Name << "\n";

                QMessageBox::information(this,"Sign Up Successful", "You have successfully signed up");
                s.set_new_user(user_name);
                file.close();
                MainWindow m;
                this->hide();
                m.show();
            }
            else{
                QMessageBox::information(this,"Warning", "User Alreay Created Create a New User");
            }

        }

        else{

            QMessageBox::information(this,"Error","Sign Up Failed, Make sure the password and confirm password content matches");
        }
    }
    else{
        QMessageBox::information(this,"Error","Enter Credietials to Signup");
    }
}
