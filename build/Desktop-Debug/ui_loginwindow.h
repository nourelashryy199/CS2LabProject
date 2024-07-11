/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_error;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;

    void setupUi(QDialog *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName("loginWindow");
        loginWindow->resize(549, 337);
        label = new QLabel(loginWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 10, 291, 51));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(loginWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 70, 31, 41));
        label_3 = new QLabel(loginWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 130, 71, 41));
        label_error = new QLabel(loginWindow);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(130, 180, 261, 41));
        lineEdit_id = new QLineEdit(loginWindow);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(180, 70, 181, 41));
        lineEdit_password = new QLineEdit(loginWindow);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(180, 130, 181, 41));
        pushButton_login = new QPushButton(loginWindow);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(110, 240, 121, 71));
        pushButton_login->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        pushButton_register = new QPushButton(loginWindow);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(290, 240, 121, 71));
        pushButton_register->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QDialog *loginWindow)
    {
        loginWindow->setWindowTitle(QCoreApplication::translate("loginWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#0000ff;\">Hospital Managment System</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("loginWindow", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("loginWindow", "Password", nullptr));
        label_error->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">ERROR: Wrong Username Or Password</span></p></body></html>", nullptr));
        pushButton_login->setText(QCoreApplication::translate("loginWindow", "Login", nullptr));
        pushButton_register->setText(QCoreApplication::translate("loginWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
