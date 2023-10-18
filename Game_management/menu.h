#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include<score.h>
#include<rank.h>
#include<acheivement.h>
namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    Score s; // A player has a score so composition
    Rank R;// A player has a Rank so composition
    Acheivement A; // A player has an acheivement so composition
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_toolButton_2_clicked();

    void on_Home2_clicked();

    void on_Setting_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

//    void on_pushButton_3_clicked();

    void on_LeaderBoard_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_Setting_triggered(QAction *arg1);

    void on_pushButton_5_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
