#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QFile>
#include<QTextStream>
#include <QMainWindow>
#include <QMessageBox>
class Person{
protected:
    QString Name;
    QString Age;
    QString Email;
    QString user_name;
    QString Password;
public:
    Person(){

    }
    Person(QString Name, QString Email,QString user_name,QString Password,QString Age){
        this -> Name = Name;
        this -> Email = Email;
        this -> user_name = user_name;
        this -> Password = Password;
        this -> Age = Age;

    }
    QString get_Name()const{
        return Name;
    }
    QString get_Age()const{
        return Age;
    }
    QString get_Email()const{
        return Email;
    }
    QString get_User_Name()const{
        return user_name;
    }
    QString get_password()const{
        return Password;
    }
    void set_Name(const QString a){
        Name = a;
    }
    void set_Email(const QString a){
        Email = a;
    }
    void set_Password(const QString a){
        Password = a;
    }
  void set_current_user(){
        QFile file1("Current_status.txt");
        if(!file1.open(QIODevice::WriteOnly)){

            qCritical() << file1.errorString();
//            QMessageBox::information(this, "Couldn't read file","File is not created or cannot be accessed");

            return;
        }
        QTextStream stream(&file1);

        stream << user_name << " " << Password << " " << Age << " " << Email << " " << Name << "\n";
        file1.close() ;
    }
  virtual void on_pushButton_clicked() = 0;

};


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow,public Person
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
