#ifndef ADD_ADMIN_H
#define ADD_ADMIN_H
#include<mainwindow.h>
#include <QDialog>

namespace Ui {
class Add_Admin;
}

class Add_Admin : public QDialog, public Person
{
    Q_OBJECT

public:
    explicit Add_Admin(QWidget *parent = nullptr);
    ~Add_Admin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Add_Admin *ui;
};

#endif // ADD_ADMIN_H
