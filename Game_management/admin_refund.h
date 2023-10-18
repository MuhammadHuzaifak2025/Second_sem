#ifndef ADMIN_REFUND_H
#define ADMIN_REFUND_H

#include <QDialog>

namespace Ui {
class Admin_Refund;
}

class Admin_Refund : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_Refund(QWidget *parent = nullptr);

    ~Admin_Refund();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Admin_Refund *ui;
};

#endif // ADMIN_REFUND_H
