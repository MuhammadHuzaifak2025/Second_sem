#include "manage_player.h"
#include "ui_manage_player.h"
#include<QFile>
#include<QString>
#include<QMessageBox>
#include<admin.h>

Manage_Player::Manage_Player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Manage_Player)
{
    ui->setupUi(this);
    QStringList banned_user = Get_banned_Names();
    ui->textEdit->setText(banned_user.join("\n"));
}

Manage_Player::~Manage_Player()
{
    delete ui;
}


void Manage_Player::on_pushButton_clicked()
{
    QString username = ui->Ba_player->text();
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
        if (fields.size() > 0 && fields.at(0) == username) {
            isBanned = true;
            break;
        }
    }

    banFile.close();

    if (isBanned) {
        QMessageBox::information(this, "Banned", "The account is already banned");
        return;
    }

    QFile player("player.txt");
    if (!player.exists()) {
        qCritical() << "File not found";
        return;
    }

    if (player.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&player);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList stringList = line.split(" ");
            if (stringList[0] == ui->Ba_player->text()) {
                QFile ban("ban.txt");
                if (!ban.exists()) {
                    qCritical() << "File not found";
                    QFile create("ban.txt");
                    create.open(QIODevice::WriteOnly | QIODevice::Text);
                    create.close();
                    return;
                }
                if (ban.open(QIODevice::Append | QIODevice::Text)) {
                    QTextStream out(&ban);
                    out << stringList[0] << "\n";
                    ban.close();
                }
                QMessageBox::information(this, "Successful", "Account Banned");
                break;
            }
        }
        if (in.atEnd()) {
            QMessageBox::information(this, "Failure", "No Name Found");
        }
    }
    player.close();
    QStringList banned_user = Get_banned_Names();
    ui->textEdit->setText(banned_user.join("\n"));
}
void Manage_Player::Ban_player(QString user_name){
    QFile ban("ban.txt");

    if (ban.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&ban);
        out << user_name << "\n";
        ban.close();
    }

}
QStringList Manage_Player:: Get_banned_Names(){
    QFile file("ban.txt");
    QStringList banned_User;
    if(!file.exists()){
        qCritical() << "File not found";
    }
    if(file.open(QIODevice::ReadOnly|QIODevice::Text)){
        QTextStream in(&file);
        while(!in.atEnd()){
            QString line = in.readLine();
            banned_User.append(line);
        }
        file.close();
    }
    return banned_User;

}


void Manage_Player::on_pushButton_2_clicked()
{
    QString username = ui->Ba_player_2->text();
    QStringList A = Get_banned_Names();

    QFile ban("ban.txt");
    ban.open(QIODevice::WriteOnly| QIODevice::Text);
    ban.close();
    bool flag = false;
    QTextStream out(&ban);
    if (ban.open(QIODevice::Append | QIODevice::Text)) {
        for(int i = 0; i< (A.size()); i++){
                if(A[i] == username){
                    QMessageBox::information(this, "Succes", "Account Unbanned");
                flag = true;
                }
                else{
                    out << A[i] << "\n";
                }
        }
    }
    ban.close();
    if(!flag){
        QMessageBox::information(this, "Failure", "Couldnot Find User_Name");
    }
    QStringList banned_user = Get_banned_Names();
    ui->textEdit->setText(banned_user.join("\n"));
}

void Manage_Player::on_pushButton_3_clicked()
{
    admin c;
    c.setModal(true);

    this->close();
    c.exec();
}
