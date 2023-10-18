#ifndef PREMIUM_USER_H
#define PREMIUM_USER_H

#include <QDialog>

namespace Ui {
class Premium_User;
}

class Premium_User : public QDialog
{
    Q_OBJECT

public:
    explicit Premium_User(QWidget *parent = nullptr);
    ~Premium_User();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Premium_User *ui;
};

#endif // PREMIUM_USER_H
