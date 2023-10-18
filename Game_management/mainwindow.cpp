#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QTextStream>
#include <QFile>
#include <Player.h>
#include <Player.h>
#include "menu.h"
#include<admin.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

    ui->lineEdit->setPlaceholderText("user_name");
    ui->lineEdit_2->setPlaceholderText("Password");
    QString ABCD = ":images/mainscreen.png";
    ui->label_3->setStyleSheet("background-image:url("+ABCD+")");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    user_name = ui->lineEdit->text();
    Password = ui->lineEdit_2->text();
    bool isBanned = false;
    QFile banFile("ban.txt");
    if (!banFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qCritical() << "Failed to open ban file";
        return;
    }

    QTextStream in(&banFile);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(" ");
        if (fields.size() > 0 && fields.at(0) == user_name) {
            isBanned = true;
            break;
        }
    }

    banFile.close();

    QStringList creds;

    creds.append(user_name);
    creds.append(Password);
    if(!isBanned){
        QFile file("Player.txt");
        if(!file.exists()){
            qCritical() << "File not found";
            return;
        }

        bool flag = 0;
        if(file.open(QIODevice::ReadOnly | QIODevice::Text)){

            QTextStream in(&file);

            while(!in.atEnd()){

                QStringList data;
                QString line = in.readLine();
                QStringList stringList = line.split(" ");
                data.append(stringList);

                if(data[0] == user_name && data[1] == Password){
                    QMessageBox::information(this,"Login Successful","Login was successfull, welcome to the arcade");
                    flag = 1;
                    QFile file2("Current_status.txt");
                    if(!file2.open(QIODevice::WriteOnly)){

                        qCritical() << file2.errorString();
                        //            QMessageBox::information(this, "Couldn't read file","File is not created or cannot be accessed");
                        return;
                    }
                    QTextStream stream(&file2);

                    stream << user_name << " " << Password << " " << data[2] << " " << data[3] << " " << data[4] << "\n";
                    file2.close() ;
                    break;
                }
            }
        }

        if(flag == 0){
            QMessageBox::information(this,"Login Failed","Invalid credentials entered");
        }
        else{

            menu menu;

            menu.setModal(true);
            this->close();
            menu.exec();
        }
    }
    if(isBanned){
        QMessageBox::information(this,"Account Banned","Your Account Has been Banned");
    }
}


void MainWindow::on_pushButton_2_clicked()
{

    player c;
    c.setModal(true);


    c.exec();
}





void MainWindow::on_pushButton_4_clicked()
{
    QFile file("Admin.txt");
    bool flag = false;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        while(!in.atEnd()){

            QStringList data;
            QString line = in.readLine();
            QStringList stringList = line.split(" ");
            data.append(stringList);

            if(ui->lineEdit->text() == " " && ui->lineEdit_2->text() == " "){
                    break;
                }
            else if( ui->lineEdit->text() == data[0] && ui->lineEdit_2->text() == data[1]){
                QMessageBox::information(this,"Login Successful","Login was successfull, welcome Admin");
                    flag = true;
                break;
            }

        }
    }

        if(flag){
            admin c;
            c.setModal(true);

            this->close();
            c.exec();
        }
        else{
             QMessageBox::information(this,"Login Failed","Incorrect Details");
        }

}

