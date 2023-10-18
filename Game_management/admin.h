#ifndef ADMIN_H
#define ADMIN_H
#include<QList>
#include<QString>
#include<QFile>
#include <QDialog>


namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    QString get_latest_purchase_one();
    QString get_latest_purchase_two();
    QString get_latest_purchase_three();
    QStringList latest_purchase();
    int Get_number_player();
    int get_refunds_num();
    int countAdminsInFile();
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
