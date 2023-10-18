/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QTextEdit *textEdit;
    QTextEdit *textEdit_5;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(1280, 720);
        textEdit = new QTextEdit(admin);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 30, 271, 121));
        textEdit->setStyleSheet(QString::fromUtf8("\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 68px;\n"
"line-height: 82px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"text-decoration-line: underline;\n"
"background: #1E1F2E;\n"
"color: #FFF;"));
        textEdit_5 = new QTextEdit(admin);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(440, 220, 391, 91));
        textEdit_5->setStyleSheet(QString::fromUtf8("font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 68px;\n"
"line-height: 82px;\n"
"color: #252748;\n"
"border: none;\n"
"background: #f0f0f0;"));
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(720, 30, 301, 141));
        QFont font;
        font.setFamilies({QString::fromUtf8("Inter")});
        font.setBold(true);
        font.setUnderline(true);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"font-family: 'Inter';\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"\n"
"color: #FFFFFF;\n"
"background: #252748;"));
        label_2 = new QLabel(admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(404, 0, 876, 200));
        label_2->setStyleSheet(QString::fromUtf8("position: absolute;\n"
"width: 876px;\n"
"height: 199px;\n"
"left: 404px;\n"
"top: 0px;\n"
"\n"
"background: #252748;"));
        pushButton_4 = new QPushButton(admin);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(50, 30, 301, 141));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"font-family: 'Inter';\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"\n"
"color: #FFFFFF;\n"
"background: #252748;"));
        label = new QLabel(admin);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 404, 720));
        label->setStyleSheet(QString::fromUtf8("\n"
"position: absolute;\n"
"width: 404px;\n"
"height: 720px;\n"
"left: 0px;\n"
"top: 0px;\n"
"\n"
"background: #1E1F2E;"));
        lineEdit_3 = new QLineEdit(admin);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(440, 590, 811, 91));
        lineEdit_3->setStyleSheet(QString::fromUtf8("font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 42px;\n"
"line-height: 82px;\n"
"color: #252748;\n"
"\n"
"background: #f0f0f0;"));
        label_3 = new QLabel(admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(410, 210, 876, 520));
        label_3->setStyleSheet(QString::fromUtf8("background: #f0f0f0;"));
        lineEdit_2 = new QLineEdit(admin);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(440, 480, 811, 91));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 42px;\n"
"line-height: 82px;\n"
"color: #252748;\n"
"\n"
"background: #f0f0f0;"));
        pushButton_3 = new QPushButton(admin);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1310, 260, 241, 141));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"font-family: 'Inter';\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"\n"
"color: #FFFFFF;\n"
"background: #252748;"));
        pushButton = new QPushButton(admin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 30, 301, 141));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"font-family: 'Inter';\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"\n"
"color: #FFFFFF;\n"
"background: #252748;"));
        lineEdit = new QLineEdit(admin);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(440, 370, 811, 91));
        lineEdit->setStyleSheet(QString::fromUtf8("font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 42px;\n"
"line-height: 82px;\n"
"color: #252748;\n"
"\n"
"background: #f0f0f0;"));
        pushButton_5 = new QPushButton(admin);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(1030, 30, 241, 141));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"font-family: 'Inter';\n"
"font-weight: 900;\n"
"font-size: 36px;\n"
"line-height: 44px;\n"
"\n"
"color: #FFFFFF;\n"
"background: #252748;"));
        label_3->raise();
        label_2->raise();
        label->raise();
        textEdit->raise();
        textEdit_5->raise();
        pushButton_2->raise();
        pushButton_4->raise();
        lineEdit_3->raise();
        lineEdit_2->raise();
        pushButton_3->raise();
        pushButton->raise();
        lineEdit->raise();
        pushButton_5->raise();

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Inter'; font-size:68px; font-weight:900; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:68px; text-decoration: underline;\">ADMIN</span></p></body></html>", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Inter'; font-size:68px; font-weight:900; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:36pt; font-weight:700; text-decoration: underline;\">Latest Purchases</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "Manage Admin", nullptr));
        label_2->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("admin", "ADMIN", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("admin", "Reports", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "Manage Player", nullptr));
        pushButton_5->setText(QCoreApplication::translate("admin", "Reports", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
