#ifndef MANAGE_PLAYER_H
#define MANAGE_PLAYER_H

#include <QDialog>

namespace Ui {
class Manage_Player;
}

class Manage_Player : public QDialog
{
    Q_OBJECT

public:
    explicit Manage_Player(QWidget *parent = nullptr);
    ~Manage_Player();
    QStringList Get_banned_Names();
    void Ban_player(QString user_name);


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Manage_Player *ui;
};

#endif // MANAGE_PLAYER_H
