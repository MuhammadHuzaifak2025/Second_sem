#include "notify.h"
#include "ui_notify.h"

Notify::Notify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Notify)
{
    ui->setupUi(this);
}

Notify::~Notify()
{
    delete ui;
}
