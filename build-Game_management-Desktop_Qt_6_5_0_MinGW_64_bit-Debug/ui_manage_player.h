/********************************************************************************
** Form generated from reading UI file 'manage_player.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGE_PLAYER_H
#define UI_MANAGE_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Manage_Player
{
public:
    QLineEdit *Ba_player;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLineEdit *Ba_player_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Manage_Player)
    {
        if (Manage_Player->objectName().isEmpty())
            Manage_Player->setObjectName("Manage_Player");
        Manage_Player->resize(1280, 720);
        Ba_player = new QLineEdit(Manage_Player);
        Ba_player->setObjectName("Ba_player");
        Ba_player->setGeometry(QRect(270, 150, 113, 24));
        pushButton = new QPushButton(Manage_Player);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 150, 80, 24));
        textEdit = new QTextEdit(Manage_Player);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(210, 180, 341, 141));
        Ba_player_2 = new QLineEdit(Manage_Player);
        Ba_player_2->setObjectName("Ba_player_2");
        Ba_player_2->setGeometry(QRect(240, 350, 113, 24));
        pushButton_2 = new QPushButton(Manage_Player);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(380, 350, 80, 24));
        pushButton_3 = new QPushButton(Manage_Player);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(300, 400, 80, 24));

        retranslateUi(Manage_Player);

        QMetaObject::connectSlotsByName(Manage_Player);
    } // setupUi

    void retranslateUi(QDialog *Manage_Player)
    {
        Manage_Player->setWindowTitle(QCoreApplication::translate("Manage_Player", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Manage_Player", "Ban Player", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Manage_Player", "Un Ban", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Manage_Player", "Go back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manage_Player: public Ui_Manage_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGE_PLAYER_H
