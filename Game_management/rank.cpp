#include <QDataStream>
#include <QFile>
#include <QDebug>
#include <algorithm>
#include<rank.h>
#include<QString>

void Rank:: sort_scores(){
    QFile file("score.dat");
    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading and writing: %s", qPrintable(file.errorString()));
        return;
    }

    QByteArray data = file.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);

    QList<Rank> ranks;
    while (!in.atEnd()) {
        Rank obj;
        in >> obj.score >> obj.name;
        ranks.append(obj);
    }
    int n = ranks.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ranks[j].score < ranks[j + 1].score) {
                std::swap(ranks[j], ranks[j + 1]);
            }
        }
    }
    if (!file.resize(0)) {
        qWarning("Cannot clear file: %s", qPrintable(file.errorString()));
        return;
    }
    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_15);
    for (const auto& rank : ranks) {
        out << rank.score << rank.name;
    }

}
int Rank::get_rank(QString user_name){
    sort_scores();
    QFile file("score.dat");
    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading and writing: %s", qPrintable(file.errorString()));
        return 0 ;
    }

    QByteArray data = file.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);
    int count = 0;
    while (!in.atEnd()) {
        Rank obj;
        in >> obj.score >> obj.name;
        if(obj.name == user_name){
            return count;
        }
        else{
            count++;
        }
    }
     return 0;
}

