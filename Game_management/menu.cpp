#include "menu.h"
#include "ui_menu.h"
#include <QPixmap>
#include <QMessageBox>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QDialog>
#include <QMovie>
#include <QIcon>
#include<QFile>
#include<QTextStream>
#include<QProcess>
#include<premium_user.h>
#include<cstdlib>
#include<windows.h>
#include<leaderboard.h>
#include<reload.h>
#include<refund.h>
#include <mainwindow.h>

    bool purchsed = false ;
QString current_User_name;

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    QString pfp = ":images/pfp.png";
    ui->label_2->setStyleSheet("background-image:url("+pfp+")");
    QString flappy = ":images/fp.png";
    ui->label_5->setStyleSheet("background-image:url("+flappy+")");
    QString snake = ":images/snake.png";
    ui->label_6->setStyleSheet("background-image:url("+snake+")");

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
            current_User_name = data[0];
    ui->User_name->setReadOnly(true);
    ui->User_name->QLineEdit::setText(data[0]);
    ui->lineEdit_2->setReadOnly(true);

    ui->lineEdit_2->setText(data[4]);
    ui->lineEdit_3->setReadOnly(true);
    ui->lineEdit_4->setReadOnly(true);


    QFile score("currentUserScore.txt");
    score.open(QIODevice::ReadWrite|QIODevice::Text);

    QString AB = score.readLine();
    score.close();

    int ab = AB.toInt();
    QFile Hang_manscore("Current_User_hangman_Score.txt");
    Hang_manscore.open(QIODevice::ReadWrite|QIODevice::Text);

    QString ABC = Hang_manscore.readLine();
    Hang_manscore.close();

    int ab2 = ABC.toInt();
    s.updateScore(current_User_name,ab);
    s.updateScore(current_User_name,ab2);

    Hang_manscore.open(QIODevice::WriteOnly|QIODevice::Text);
    Hang_manscore.close();

    score.open(QIODevice::WriteOnly|QIODevice::Text);
    score.close();
    int a = s.get_score(current_User_name);
    ui->lineEdit_5->setText(QString::number(a));


    ui->lineEdit_5->setReadOnly(true);
    ui->textEdit->setReadOnly(true);
    ui->textEdit_2->setReadOnly(true);
    int b = R.get_rank(current_User_name);
    ui->lineEdit_3->setText(QString::number(b));
    ui->textEdit_3->setReadOnly(true);
    QString c = A.get_Acheivement(a);
    ui->lineEdit_4->setText(c);
    ui->lineEdit_4->setReadOnly(true);
    ui->textEdit_4->setReadOnly(true);
    ui->textEdit_5->setReadOnly(true);
    ui->textEdit->setReadOnly(true);
    ui->plainTextEdit->setReadOnly(true);
    ui->plainTextEdit_2->setReadOnly(true);
    ui->plainTextEdit_3->setReadOnly(true);
    ui->editage->setReadOnly(true);
    ui->editname->setReadOnly(true);
    ui->editpassword->setReadOnly(true);
    ui->editprofile->setReadOnly(true);


    }
    QFile premium("Premium_User.txt");
    if(!premium.exists()){
    qCritical() << "File not found";
    ui->pushButton->setText(" --");
    return;
    }
    if (premium.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QTextStream in(&premium);
    while (!in.atEnd()) {
        QStringList prem;
        QString line = in.readLine();
        QStringList stringList = line.split(" ");
        prem << stringList[0]; // Append the desired element to prem

        if (prem[0] == current_User_name) {
            purchsed = true;
            break;
        }


    }
    premium.close();
    if (purchsed) {
        ui->pushButton->setText("Play Game");
    } else {
        ui->pushButton->setText("Purhcase Game");
        purchsed = false;
    }
    }

}

menu::~menu()
{
    delete ui;
}

void menu::on_toolButton_2_clicked()
{


}



void menu::on_Home2_clicked()
{
    ui->screen2a->lower();
    ui->screen2b->lower();
    ui->Settings2->lower();
    ui->Home2->lower();
    ui->noti2->lower();
    ui->editname->lower();
    ui->editage->lower();
    ui->editpassword->lower();
    ui->editprofile->lower();
    ui->Refund_Name->lower();
    ui->Refund_userName->lower();
    ui->Refund_complain->lower();
    ui->pushButton_4->lower();
}


void menu::on_Setting_clicked()
{
    ui->screen2a->raise();
    ui->screen2b->raise();
    ui->Settings2->raise();
    ui->Home2->raise();
    ui->noti2->raise();
    ui->editname->raise();
    ui->editage->raise();
    ui->editpassword->raise();
    ui->editprofile->raise();
    ui->Refund_Name->raise();
    ui->Refund_userName->raise();
    ui->Refund_complain->raise();
    ui->pushButton_4->raise();
    ui->Refund_userName->setText(current_User_name);
}


void menu::on_pushButton_clicked()
{

    if(purchsed){

//    ShellExecute( NULL, NULL, "FlapppyBird.exe", NULL, NULL, SW_SHOW );
    system("start FlapppyBird.exe");
    }
    else{
     Premium_User c;
     c.setModal(true);

     this -> close();
     c.exec();

    }




}

void menu::on_pushButton_2_clicked()
{


    system("start HangMan.exe");


}

void menu::on_LeaderBoard_clicked()
{
    LeaderBoard c;
    c.setModal(true);

    this -> close();
    c.exec();
}


void menu::on_pushButton_3_clicked()
{
    Reload c;
    c.setModal(true);

    this -> close();
    c.exec();
}


void menu::on_pushButton_4_clicked()
{
    Refund R;
    bool A;
    if(purchsed){
     A = R.Ask_refund(ui->Refund_Name->text(),ui->Refund_userName->text(),ui->Refund_complain->text());
     if(A)
        QMessageBox::information(this,"Succesfull","Submitted");
     else{
        QMessageBox::information(this,"Failure","Already Submitted");
     }
    }
    else{
     QMessageBox::information(this,"Failure","Refund Feature only for the premium User");
    }
}




void menu::on_pushButton_5_clicked()
{
    MainWindow w;
    this->close();
    w.show();
}

