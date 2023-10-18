#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QDialog>
#include<rank.h>

namespace Ui {
class LeaderBoard;
}

class LeaderBoard : public QDialog, public Rank
{
    Q_OBJECT

public:
    QStringList get_LeaderBoard();
    explicit LeaderBoard(QWidget *parent = nullptr);
    ~LeaderBoard();

private slots:


    void on_pushButton_clicked();

private:
    Ui::LeaderBoard *ui;
};

#endif // LEADERBOARD_H
