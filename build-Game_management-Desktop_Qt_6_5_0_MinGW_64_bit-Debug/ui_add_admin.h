/********************************************************************************
** Form generated from reading UI file 'add_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ADMIN_H
#define UI_ADD_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Add_Admin
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Add_Admin)
    {
        if (Add_Admin->objectName().isEmpty())
            Add_Admin->setObjectName("Add_Admin");
        Add_Admin->resize(1280, 720);
        lineEdit = new QLineEdit(Add_Admin);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 70, 113, 24));
        lineEdit_2 = new QLineEdit(Add_Admin);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(240, 70, 113, 24));
        lineEdit_3 = new QLineEdit(Add_Admin);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(90, 110, 113, 24));
        lineEdit_4 = new QLineEdit(Add_Admin);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(240, 110, 113, 24));
        pushButton = new QPushButton(Add_Admin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 150, 80, 24));

        retranslateUi(Add_Admin);

        QMetaObject::connectSlotsByName(Add_Admin);
    } // setupUi

    void retranslateUi(QDialog *Add_Admin)
    {
        Add_Admin->setWindowTitle(QCoreApplication::translate("Add_Admin", "Dialog", nullptr));
        lineEdit->setText(QCoreApplication::translate("Add_Admin", "User_name", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Add_Admin", "Name", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("Add_Admin", "Password", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("Add_Admin", "pin", nullptr));
        pushButton->setText(QCoreApplication::translate("Add_Admin", "Add Manager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_Admin: public Ui_Add_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ADMIN_H
