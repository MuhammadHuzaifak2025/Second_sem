
#ifndef SCORE_H
#define SCORE_H


#include <QObject>
#include<QString>


class Score
{
    int score;
    QString User_name;

public:
    Score(int a , QString name){
        score = a;
        User_name = name;
    }
    Score(){
        score = 0;

    }
    int get_score(){
        return score;
    }
    int inc_score(int new_score){
        score = new_score + score;
        return score;
    }

    void updateScore(const QString &username, int score);
    int get_score(QString name);
    void set_new_user(QString username);
    void Ranking();
    void get_Rank(QString name);
    bool scoreCompare(const Score &a, const Score &b)
    {
        return a.score > b.score;
    }
};

#endif // SCORE_H
