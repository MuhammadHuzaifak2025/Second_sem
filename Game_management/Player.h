#ifndef PLAYER_H
#define PLAYER_H
#include"mainwindow.h"
#include <QDialog>
#include<score.h>

namespace Ui {
class Player;
}

class player : public QDialog, public Person
{
    Q_OBJECT
    long int score;
    QString Acheivement;

public:
    Score s;
    QString get_Acheivement(){
        return Acheivement;
    }

    explicit player(QWidget *parent = nullptr);
    ~player();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Player *ui;
};

#endif // PLAYER_H
