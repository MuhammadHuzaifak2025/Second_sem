
#ifndef RANK_H
#define RANK_H




class Rank
{
public:
    Rank(){

    }

        QString name;
        int score;
        void sort_scores();
        int get_rank(QString user_name);
};

#endif // RANK_H
