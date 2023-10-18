/********************************************************************************
** Form generated from reading UI file 'refresh.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFRESH_H
#define UI_REFRESH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Refresh
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Refresh)
    {
        if (Refresh->objectName().isEmpty())
            Refresh->setObjectName("Refresh");
        Refresh->resize(1280, 720);
        pushButton = new QPushButton(Refresh);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 200, 221, 61));

        retranslateUi(Refresh);

        QMetaObject::connectSlotsByName(Refresh);
    } // setupUi

    void retranslateUi(QDialog *Refresh)
    {
        Refresh->setWindowTitle(QCoreApplication::translate("Refresh", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Refresh", "Refresh Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Refresh: public Ui_Refresh {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFRESH_H
