#include <QFile>
#include <QDataStream>
#include "score.h"
#include <algorithm>

void Score::updateScore(const QString &username, int newScore){

    QFile file("score.dat");
    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading and writing: %s", qPrintable(file.errorString()));
        return;
    }

    QByteArray data = file.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);

    QList<Score> scores;
    while (!in.atEnd()) {

        in >> score >> User_name;
        scores.append(Score(score, User_name));
    }

    bool found = false;
    for (int i = 0; i < scores.count(); i++) {
        if (scores[i].User_name == username) {
            scores[i].score += newScore;
            found = true;
            break;
        }
    }

    if (!found) {
        scores.append(Score(newScore, username));
    }

    file.resize(0);
    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_15);

    for (int i = 0; i < scores.count(); i++) {
        out << scores[i].score << scores[i].User_name;
    }
}

int Score::get_score(QString name){
    QFile file("score.dat");
    if (!file.open(QIODevice::ReadWrite)) {
        qWarning("Cannot open file for reading and writing: %s", qPrintable(file.errorString()));
        return 0;
    }

    QByteArray data = file.readAll();
    QDataStream in(&data, QIODevice::ReadOnly);
    in.setVersion(QDataStream::Qt_5_15);

    QList<Score> scores;
    while (!in.atEnd()) {
        in >> score >> User_name;
        scores.append(Score(score, User_name));
    }
    for (int i = 0; i < scores.count(); i++) {
        if (scores[i].User_name == name) {
            return scores[i].score;
        }
    }
    return 0;
}
void Score::set_new_user(QString username){
    QFile file("score.dat");
    if (!file.open(QIODevice::Append)) {
        qWarning("Cannot open file for appending: %s", qPrintable(file.errorString()));
        return;
    }
    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_15);
    out << 0 << username;
}
