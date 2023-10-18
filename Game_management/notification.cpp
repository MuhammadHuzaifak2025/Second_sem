#include "notification.h"
#include "ui_notification.h"

notification::notification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::notification)
{
    ui->setupUi(this);
}

notification::~notification()
{
    delete ui;
}
