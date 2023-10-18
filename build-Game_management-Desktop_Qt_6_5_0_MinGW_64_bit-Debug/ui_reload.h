/********************************************************************************
** Form generated from reading UI file 'reload.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELOAD_H
#define UI_RELOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Reload
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Reload)
    {
        if (Reload->objectName().isEmpty())
            Reload->setObjectName("Reload");
        Reload->resize(400, 300);
        pushButton = new QPushButton(Reload);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 50, 80, 24));

        retranslateUi(Reload);

        QMetaObject::connectSlotsByName(Reload);
    } // setupUi

    void retranslateUi(QDialog *Reload)
    {
        Reload->setWindowTitle(QCoreApplication::translate("Reload", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Reload", "Reload", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reload: public Ui_Reload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELOAD_H
