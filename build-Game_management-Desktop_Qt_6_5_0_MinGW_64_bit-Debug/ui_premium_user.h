/********************************************************************************
** Form generated from reading UI file 'premium_user.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREMIUM_USER_H
#define UI_PREMIUM_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Premium_User
{
public:
    QLabel *BACKGROUND;
    QLabel *HEADING;
    QLabel *USE_NAMEHEADING;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *USE_NAMEHEADING_2;
    QLabel *USE_NAMEHEADING_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *Credit_card;
    QLabel *label_4;
    QLineEdit *CVC;
    QLabel *label_5;
    QLineEdit *exp;

    void setupUi(QDialog *Premium_User)
    {
        if (Premium_User->objectName().isEmpty())
            Premium_User->setObjectName("Premium_User");
        Premium_User->resize(1280, 720);
        Premium_User->setToolTipDuration(6);
        BACKGROUND = new QLabel(Premium_User);
        BACKGROUND->setObjectName("BACKGROUND");
        BACKGROUND->setGeometry(QRect(-9, 0, 613, 720));
        BACKGROUND->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 613px;\n"
"height: 720px;\n"
"left: -9px;\n"
"top: 0px;\n"
"\n"
"background: #1E1F2E;"));
        HEADING = new QLabel(Premium_User);
        HEADING->setObjectName("HEADING");
        HEADING->setGeometry(QRect(106, 39, 481, 106));
        HEADING->setStyleSheet(QString::fromUtf8("width: 342px;\n"
"height: 87px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 72px;\n"
"line-height: 87px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"text-decoration-line: underline;\n"
"\n"
"color: #FFFFFF;\n"
"\n"
"\n"
"/* Inside auto layout */\n"
"\n"
"flex: none;\n"
"order: 0;\n"
"flex-grow: 0;"));
        USE_NAMEHEADING = new QLabel(Premium_User);
        USE_NAMEHEADING->setObjectName("USE_NAMEHEADING");
        USE_NAMEHEADING->setGeometry(QRect(81, 203, 251, 46));
        USE_NAMEHEADING->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 215px;\n"
"height: 46px;\n"
"left: 81px;\n"
"top: 203px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 38px;\n"
"line-height: 46px;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;\n"
""));
        lineEdit = new QLineEdit(Premium_User);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(360, 200, 181, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Inter")});
        font.setBold(true);
        font.setItalic(false);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 139px;\n"
"height: 44px;\n"
"left: 329px;\n"
"top: 204px;\n"
"background : #1E1F2E;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"border: none;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;"));
        lineEdit_2 = new QLineEdit(Premium_User);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(335, 297, 139, 44));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 139px;\n"
"height: 44px;\n"
"left: 329px;\n"
"top: 204px;\n"
"background : #1E1F2E;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"border: none;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;"));
        USE_NAMEHEADING_2 = new QLabel(Premium_User);
        USE_NAMEHEADING_2->setObjectName("USE_NAMEHEADING_2");
        USE_NAMEHEADING_2->setGeometry(QRect(81, 286, 215, 46));
        USE_NAMEHEADING_2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 180px;\n"
"height: 46px;\n"
"left: 81px;\n"
"top: 286px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 38px;\n"
"line-height: 46px;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;"));
        USE_NAMEHEADING_3 = new QLabel(Premium_User);
        USE_NAMEHEADING_3->setObjectName("USE_NAMEHEADING_3");
        USE_NAMEHEADING_3->setGeometry(QRect(80, 370, 215, 46));
        USE_NAMEHEADING_3->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 123px;\n"
"height: 46px;\n"
"left: 81px;\n"
"top: 360px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 38px;\n"
"line-height: 46px;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;"));
        lineEdit_3 = new QLineEdit(Premium_User);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(230, 370, 341, 44));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 139px;\n"
"height: 44px;\n"
"left: 329px;\n"
"top: 204px;\n"
"background : #1E1F2E;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"border: none;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;"));
        pushButton = new QPushButton(Premium_User);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(74, 483, 425, 110));
        pushButton->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 425px;\n"
"height: 110px;\n"
"left: 74px;\n"
"top: 483px;\n"
"\n"
"background: #BB5858;\n"
"border-radius: 30px;\n"
"position: absolute;\n"
"width: 302px;\n"
"height: 58px;\n"
"left: 135px;\n"
"top: 509px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;\n"
""));
        pushButton_2 = new QPushButton(Premium_User);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(74, 610, 425, 110));
        pushButton_2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 425px;\n"
"height: 110px;\n"
"left: 74px;\n"
"top: 610px;\n"
"\n"
"background: #BB5858;\n"
"border-radius: 30px;\n"
"position: absolute;\n"
"width: 302px;\n"
"height: 58px;\n"
"left: 135px;\n"
"top: 636px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;"));
        label = new QLabel(Premium_User);
        label->setObjectName("label");
        label->setGeometry(QRect(600, 5, 681, 731));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(Premium_User);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(650, 30, 591, 127));
        label_2->setStyleSheet(QString::fromUtf8("width: 441px;\n"
"height: 87px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 72px;\n"
"line-height: 87px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"text-decoration-line: underline;\n"
"\n"
"color: #252748;\n"
"\n"
"\n"
"/* Inside auto layout */\n"
"\n"
"flex: none;\n"
"order: 0;\n"
"flex-grow: 0;"));
        label_3 = new QLabel(Premium_User);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(630, 160, 651, 46));
        label_3->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 488px;\n"
"height: 46px;\n"
"left: 640px;\n"
"top: 159px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 38px;\n"
"line-height: 46px;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #252748;"));
        Credit_card = new QLineEdit(Premium_User);
        Credit_card->setObjectName("Credit_card");
        Credit_card->setGeometry(QRect(640, 240, 481, 81));
        Credit_card->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 488px;\n"
"height: 76px;\n"
"left: 640px;\n"
"top: 226px;\n"
"\n"
"background: rgba(37, 39, 72, 0.8);\n"
"border-radius: 30px;"));
        label_4 = new QLabel(Premium_User);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(640, 370, 481, 46));
        label_4->setStyleSheet(QString::fromUtf8("/* Enter CVC */\n"
"\n"
"\n"
"position: absolute;\n"
"width: 198px;\n"
"height: 46px;\n"
"left: 653px;\n"
"top: 331px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 38px;\n"
"line-height: 46px;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #252748;\n"
""));
        CVC = new QLineEdit(Premium_User);
        CVC->setObjectName("CVC");
        CVC->setGeometry(QRect(640, 450, 481, 81));
        CVC->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 488px;\n"
"height: 76px;\n"
"left: 640px;\n"
"top: 226px;\n"
"\n"
"background: rgba(37, 39, 72, 0.8);\n"
"border-radius: 30px;"));
        label_5 = new QLabel(Premium_User);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(640, 535, 481, 71));
        label_5->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 330px;\n"
"height: 46px;\n"
"left: 653px;\n"
"top: 499px;\n"
"\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 38px;\n"
"line-height: 46px;\n"
"/* identical to box height */\n"
"\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #252748;\n"
""));
        exp = new QLineEdit(Premium_User);
        exp->setObjectName("exp");
        exp->setGeometry(QRect(630, 620, 481, 81));
        exp->setStyleSheet(QString::fromUtf8("\n"
"position: absolute;\n"
"width: 488px;\n"
"height: 76px;\n"
"left: 640px;\n"
"top: 566px;\n"
"\n"
"background: rgba(37, 39, 72, 0.8);\n"
"border-radius: 30px;"));

        retranslateUi(Premium_User);

        QMetaObject::connectSlotsByName(Premium_User);
    } // setupUi

    void retranslateUi(QDialog *Premium_User)
    {
        Premium_User->setWindowTitle(QCoreApplication::translate("Premium_User", "Dialog", nullptr));
        BACKGROUND->setText(QString());
        HEADING->setText(QCoreApplication::translate("Premium_User", "PURCHASE", nullptr));
        USE_NAMEHEADING->setText(QCoreApplication::translate("Premium_User", "USER NAME:", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QCoreApplication::translate("Premium_User", "20$", nullptr));
        USE_NAMEHEADING_2->setText(QCoreApplication::translate("Premium_User", "PAYMENT", nullptr));
        USE_NAMEHEADING_3->setText(QCoreApplication::translate("Premium_User", "GAME", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("Premium_User", "FLAPPY BIRD", nullptr));
        pushButton->setText(QCoreApplication::translate("Premium_User", "MAKE PAYMENT", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Premium_User", "CANCEL", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Premium_User", "CARD DETAILS", nullptr));
        label_3->setText(QCoreApplication::translate("Premium_User", "ENTER CREDIT CARD NUMBER", nullptr));
        label_4->setText(QCoreApplication::translate("Premium_User", "CSV", nullptr));
        label_5->setText(QCoreApplication::translate("Premium_User", "Expiry Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Premium_User: public Ui_Premium_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREMIUM_USER_H
