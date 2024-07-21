/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QRadioButton *radioButtonDoc;
    QRadioButton *radioButtonNurse;
    QRadioButton *radioButtonPatient;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(622, 523);
        pushButton = new QPushButton(admin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 220, 93, 29));
        label = new QLabel(admin);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 271, 41));
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 440, 93, 29));
        groupBox = new QGroupBox(admin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 160, 151, 141));
        radioButtonDoc = new QRadioButton(groupBox);
        radioButtonDoc->setObjectName("radioButtonDoc");
        radioButtonDoc->setGeometry(QRect(0, 30, 141, 24));
        radioButtonNurse = new QRadioButton(groupBox);
        radioButtonNurse->setObjectName("radioButtonNurse");
        radioButtonNurse->setGeometry(QRect(0, 70, 141, 24));
        radioButtonPatient = new QRadioButton(groupBox);
        radioButtonPatient->setObjectName("radioButtonPatient");
        radioButtonPatient->setGeometry(QRect(0, 110, 141, 24));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "Search", nullptr));
        label->setText(QCoreApplication::translate("admin", "Welcome to your admin account", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "Logout", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admin", "Search profiles:", nullptr));
        radioButtonDoc->setText(QCoreApplication::translate("admin", "Doctor Account", nullptr));
        radioButtonNurse->setText(QCoreApplication::translate("admin", "Nurse Account", nullptr));
        radioButtonPatient->setText(QCoreApplication::translate("admin", "Patient Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
