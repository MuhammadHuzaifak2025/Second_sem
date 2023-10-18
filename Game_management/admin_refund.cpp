#include "admin_refund.h"
#include "ui_admin_refund.h"
#include<refund.h>
#include<QMessageBox>
#include<refund.h>

Admin_Refund::Admin_Refund(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_Refund)
{
    Refund R;
    ui->setupUi(this);
    ui->lineEdit_2->setReadOnly(true);
    QList<Refund> Data = R.Get_Refund_details();
    QString allDetails; // Variable to store all refund details

    for (int i = 0; i < Data.size(); i++) {
        QString userDetails = Data[i].get_User_Name() + " " + Data[i].get_Complain() + "\n";
        allDetails += userDetails;
    }

    ui->textEdit->setText(allDetails);
    ui->textEdit->setReadOnly(true);

}

Admin_Refund::~Admin_Refund()
{
    delete ui;
}

void Admin_Refund::on_pushButton_clicked()
{
    Refund R;
    bool flag;
    flag = R.Accept_Refund(ui->lineEdit_3->text());
    if(flag){
        QMessageBox::information(this,"SuccesFull","Amount Refunded");
    }
    else{
        QMessageBox::information(this,"Failed","No Reports Found");
    }
}


void Admin_Refund::on_pushButton_2_clicked()
{
    Refund R;
    bool flag = R.Deny_Refund(ui->lineEdit_3->text());
    if(flag)
        QMessageBox::information(this,"SuccesFull","Denied");
    else
        QMessageBox::information(this,"Failed","No Reports found");
}

