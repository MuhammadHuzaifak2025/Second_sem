#include "reload.h"
#include "ui_reload.h"
#include<menu.h>

Reload::Reload(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Reload)
{
    ui->setupUi(this);
}

Reload::~Reload()
{
    delete ui;
}

void Reload::on_pushButton_clicked()
{
    menu c;
    c.setModal(true);

    this -> close();
    c.exec();
}

