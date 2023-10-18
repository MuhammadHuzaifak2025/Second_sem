
#ifndef REFUND_H
#define REFUND_H
#include<menu.h>
#include<QString>



class Refund
{
    QString Name, User_Name, Complain;
public:
    QString get_Name(){
        return Name;
    }
    QString get_User_Name(){
        return User_Name;
    }
    QString get_Complain(){
        return Complain;
    }
    Refund(){

    }
    Refund(QString a, QString b, QString c){
        Name = a;
        User_Name = b;
        Complain = c;
    }
    bool Ask_refund(QString name, QString user, QString comp);
    bool Accept_Refund(QString User_Name);
    bool Deny_Refund(QString User_Name);
    bool check_Refunds(QString);
    QList<Refund> Get_Refund_details();
};

#endif // REFUND_H
