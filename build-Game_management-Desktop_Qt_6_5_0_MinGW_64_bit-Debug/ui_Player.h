/********************************************************************************
** Form generated from reading UI file 'Player.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Player
{
public:
    QLabel *label;
    QTextEdit *textEdit;
    QLineEdit *Username;
    QLineEdit *Age;
    QLineEdit *Password;
    QLineEdit *Name;
    QLineEdit *Passsword2;
    QLineEdit *Email;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QDialog *Player)
    {
        if (Player->objectName().isEmpty())
            Player->setObjectName("Player");
        Player->resize(1280, 720);
        Player->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Player);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 30, 960, 660));
        label->setStyleSheet(QString::fromUtf8("background: rgba(30,31,46,0.70);\n"
"border-radius: 80px;\n"
"opacity:"));
        textEdit = new QTextEdit(Player);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(340, 50, 551, 101));
        textEdit->setAutoFillBackground(true);
        textEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 48px;\n"
"line-height: 58px;\n"
"color: #FFFFFF;\n"
"background: rgba(0,0,0,0.0)\n"
""));
        Username = new QLineEdit(Player);
        Username->setObjectName("Username");
        Username->setGeometry(QRect(190, 190, 329, 61));
        Username->setAutoFillBackground(false);
        Username->setStyleSheet(QString::fromUtf8("background: #D9D9D9;\n"
"border-radius: 30px;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 48px;\n"
"line-height: 58px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align::placeholder: center;\n"
""));
        Username->setAlignment(Qt::AlignCenter);
        Username->setReadOnly(false);
        Username->setClearButtonEnabled(false);
        Age = new QLineEdit(Player);
        Age->setObjectName("Age");
        Age->setGeometry(QRect(190, 360, 329, 61));
        Age->setStyleSheet(QString::fromUtf8("background: #D9D9D9;\n"
"border-radius: 30px;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 48px;\n"
"line-height: 58px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
""));
        Age->setAlignment(Qt::AlignCenter);
        Password = new QLineEdit(Player);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(190, 510, 329, 61));
        Password->setStyleSheet(QString::fromUtf8("background: #D9D9D9;\n"
"border-radius: 30px;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 48px;\n"
"line-height: 58px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
""));
        Password->setAlignment(Qt::AlignCenter);
        Name = new QLineEdit(Player);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(710, 190, 329, 61));
        Name->setStyleSheet(QString::fromUtf8("background: #D9D9D9;\n"
"border-radius: 30px;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 48px;\n"
"line-height: 58px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
""));
        Name->setAlignment(Qt::AlignCenter);
        Passsword2 = new QLineEdit(Player);
        Passsword2->setObjectName("Passsword2");
        Passsword2->setGeometry(QRect(710, 510, 329, 61));
        Passsword2->setStyleSheet(QString::fromUtf8("background: #D9D9D9;\n"
"border-radius: 30px;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 48px;\n"
"line-height: 58px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
""));
        Passsword2->setAlignment(Qt::AlignCenter);
        Email = new QLineEdit(Player);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(710, 360, 329, 61));
        Email->setStyleSheet(QString::fromUtf8("background: #D9D9D9;\n"
"border-radius: 30px;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 48px;\n"
"line-height: 58px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
""));
        Email->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Player);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 580, 457, 94));
        pushButton->setStyleSheet(QString::fromUtf8("background: #BB5858;\n"
"display: flex;\n"
"border-radius: 30px;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 58px;\n"
"line-height: 70px;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;\n"
""));
        label_2 = new QLabel(Player);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 1280, 720));
        label_2->raise();
        label->raise();
        textEdit->raise();
        Username->raise();
        Age->raise();
        Password->raise();
        Name->raise();
        Passsword2->raise();
        Email->raise();
        pushButton->raise();

        retranslateUi(Player);

        QMetaObject::connectSlotsByName(Player);
    } // setupUi

    void retranslateUi(QDialog *Player)
    {
        Player->setWindowTitle(QCoreApplication::translate("Player", "Dialog", nullptr));
        label->setText(QString());
        textEdit->setHtml(QCoreApplication::translate("Player", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Inter'; font-size:48px; font-weight:900; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:48pt; font-weight:400;\">Create An Account</span></p></body></html>", nullptr));
        Username->setText(QString());
        Name->setText(QString());
        pushButton->setText(QCoreApplication::translate("Player", "Sign Up", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Player: public Ui_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
