#ifndef RELOAD_H
#define RELOAD_H

#include <QDialog>

namespace Ui {
class Reload;
}

class Reload : public QDialog
{
    Q_OBJECT

public:
    explicit Reload(QWidget *parent = nullptr);
    ~Reload();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Reload *ui;
};

#endif // RELOAD_H
