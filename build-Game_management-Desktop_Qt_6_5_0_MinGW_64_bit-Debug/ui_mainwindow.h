/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuArcade;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        MainWindow->setStyleSheet(QString::fromUtf8("centralwidget {\n"
"  background: rgba(30,29,31,1);\n"
"background: -moz-linear-gradient(-45deg, rgba(30,29,31,1) 0%, rgba(223,64,90,1) 100%);\n"
"background: -webkit-gradient(left top, right bottom, color-stop(0%, rgba(30,29,31,1)), color-stop(100%, rgba(223,64,90,1)));\n"
"background: -webkit-linear-gradient(-45deg, rgba(30,29,31,1) 0%, rgba(223,64,90,1) 100%);\n"
"background: -o-linear-gradient(-45deg, rgba(30,29,31,1) 0%, rgba(223,64,90,1) 100%);\n"
"background: -ms-linear-gradient(-45deg, rgba(30,29,31,1) 0%, rgba(223,64,90,1) 100%);\n"
"background: linear-gradient(135deg, rgba(30,29,31,1) 0%, rgba(223,64,90,1) 100%);\n"
"filter: progid:DXImageTransform.Microsoft.gradient( startColorstr='#1e1d1f', endColorstr='#df405a', GradientType=1 );\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(666, 88, 563, 545));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	position: absolute;\n"
"	width: 563px;\n"
"	height: 546;\n"
"	left: 666px;\n"
"	top: 88px;\n"
"\n"
"	background: #1E1F2E;\n"
"	border-radius: 53px;\n"
"}"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 150, 286, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(30);
        font.setBold(false);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border-radius: 30px;\n"
"position: absolute;\n"
"left: 806px;\n"
"top: 262px;\n"
"background: #6A6868;\n"
"color:#FFF;\n"
"}"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 240, 286, 64));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"position: absolute;\n"
"width: 286px;\n"
"height: 64px;\n"
"left: 806px;\n"
"top: 360px;\n"
"\n"
"background: #6A6868;\n"
"border-radius: 30px;\n"
"color:#FFF;\n"
"}"));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 410, 328, 61));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Inter")});
        font1.setBold(true);
        font1.setItalic(false);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background: #BB5858;\n"
"border-radius:30px;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 40px;\n"
"line-height: 48px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"\n"
"color: #FFFFFF;\n"
""));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 320, 471, 61));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background: #BB5858;\n"
"font-family: 'Inter';\n"
"font-style: normal;\n"
"font-weight: 900;\n"
"font-size: 40px;\n"
"line-height: 48px;\n"
"display: flex;\n"
"align-items: center;\n"
"text-align: center;\n"
"border-radius:30px;\n"
"\n"
"color: #FFFFFF;\n"
""));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        plainTextEdit = new QPlainTextEdit(frame);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(130, 0, 361, 131));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(31);
        plainTextEdit->setFont(font2);
        plainTextEdit->setStyleSheet(QString::fromUtf8("color: #FFF"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(160, 490, 261, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(9, 0, 1281, 720));
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        label_3->raise();
        frame->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        menuArcade = new QMenu(menubar);
        menuArcade->setObjectName("menuArcade");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArcade->menuAction());

        retranslateUi(MainWindow);

        pushButton->setDefault(false);
        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Create An Account", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "ENTER LOGIN\n"
"    DETAILS", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "LOGIN AS ADMIN", nullptr));
        label_3->setText(QString());
        menuArcade->setTitle(QCoreApplication::translate("MainWindow", "Arcade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
