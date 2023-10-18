#ifndef NOTIFY_H
#define NOTIFY_H

#include <QDialog>

namespace Ui {
class Notify;
}

class Notify : public QDialog
{
    Q_OBJECT

public:
    explicit Notify(QWidget *parent = nullptr);
    ~Notify();

private:
    Ui::Notify *ui;
};

#endif // NOTIFY_H
