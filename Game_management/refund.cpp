
#include "refund.h"
#include<QFile>
#include<QString>
#include<menu.h>


bool Refund::Ask_refund(QString name, QString user, QString comp){
    Refund a(name, user, comp);
    QFile file("Refund.dat");
    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading and writing: %s", qPrintable(file.errorString()));
    }

    QByteArray data = file.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);
    bool flag = false;
    while (!in.atEnd()) {
        Refund obj;
        in >> obj.User_Name >> obj.Name >> obj.Complain;
        if (obj.User_Name == user) {
            flag = true;
            break;
        }
    }
    file.close();

    if (!flag) {
        if (!file.open(QIODevice::Append)) {
            qWarning("Cannot open file for reading and writing: %s", qPrintable(file.errorString()));
        }
        QDataStream out(&file);
        out.setVersion(QDataStream::Qt_5_15);
        out << user << name << comp;
        file.close();
        return true;
    }

    return false;


}
bool Refund::check_Refunds(QString User_Name){
    QFile ref("Refund.dat");
    if (!ref.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading and writing: %s", qPrintable(ref.errorString()));
    }

    QList<Refund> list;
    QByteArray data = ref.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);
    while (!in.atEnd()) {
        Refund obj;
        in >> obj.User_Name >> obj.Name >> obj.Complain;
        if (obj.User_Name == User_Name) {
            return true;
        }
    }
    return false;
}
bool Refund::Accept_Refund(QString User_Name){
    QStringList userNames;
    bool flag;
    flag = check_Refunds(User_Name);
    if(!flag){
        return false;
    }
    QFile file("Premium_User.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        //  Read the file contents
        while (!in.atEnd()) {
            QString line = in.readLine();
            userNames.append(line);
        }

        //  Remove the specific name
        userNames.removeAll(User_Name);


        file.close();
    }

    //   write mode
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);

        //  Write the modified contents
        for (const QString& userName : userNames) {
            out << userName << '\n';
        }

        //  Close the file
        file.close();
    }
    QFile ref("Refund.dat");
    if (!ref.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading and writing: %s", qPrintable(ref.errorString()));
    }

    QList<Refund> list;
    QByteArray data = ref.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);
    while (!in.atEnd()) {
        Refund obj;
        in >> obj.User_Name >> obj.Name >> obj.Complain;
        if (obj.User_Name == User_Name) {

        }
        else {
            list.append(obj);
        }
    }
    ref.close();

    if (!ref.open(QIODevice::WriteOnly)) {
        qWarning("Cannot open file for writing: %s", qPrintable(ref.errorString()));
    }
    QDataStream out(&ref);
    out.setVersion(QDataStream::Qt_5_15);
    for (const Refund& obj : list) {
        out << obj.User_Name << obj.Name << obj.Complain;
    }
    ref.close();

}
bool Refund::Deny_Refund(QString User_Name){
    bool flag = check_Refunds(User_Name);
    if(!flag){
        return false;
    }
    QFile ref ("Refund.dat");
    QList<Refund> list;
    QByteArray data = ref.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);

    while (!in.atEnd()) {
        Refund obj;
        in >> obj.User_Name >> obj.Name >> obj.Complain;
        if (obj.User_Name == User_Name) {
        }
        else {
            list.append(obj);
        }
    }
    ref.close();

    if (!ref.open(QIODevice::WriteOnly)) {
        qWarning("Cannot open file for writing: %s", qPrintable(ref.errorString()));
    }
    QDataStream out(&ref);
    out.setVersion(QDataStream::Qt_5_15);
    for (const Refund& obj : list) {
        out << obj.User_Name << obj.Name << obj.Complain;
    }
    ref.close();
}
QList<Refund> Refund:: Get_Refund_details(){
    QList<Refund> refunds;
    QFile file("Refund.dat");
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning("Cannot open file for reading: %s", qPrintable(file.errorString()));
        return refunds;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_15);
    while (!in.atEnd()) {
        Refund obj;
        in >> obj.User_Name >> obj.Name >> obj.Complain;
        refunds.append(obj);
    }
    file.close();

    return refunds;
}
