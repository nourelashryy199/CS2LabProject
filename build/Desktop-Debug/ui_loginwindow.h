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
    QLabel *IDLoginlabel;
    QLabel *Passwordlabel;
    QLabel *label_error;
    QLineEdit *IDlineEdit;
    QLineEdit *PasswordlineEdit;
    QPushButton *LoginpushButton;
    QPushButton *RegisterpushButton;

    void setupUi(QDialog *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName("loginWindow");
        loginWindow->resize(549, 337);
        label = new QLabel(loginWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 10, 291, 51));
        label->setAlignment(Qt::AlignCenter);
        IDLoginlabel = new QLabel(loginWindow);
        IDLoginlabel->setObjectName("IDLoginlabel");
        IDLoginlabel->setGeometry(QRect(120, 70, 31, 41));
        Passwordlabel = new QLabel(loginWindow);
        Passwordlabel->setObjectName("Passwordlabel");
        Passwordlabel->setGeometry(QRect(100, 130, 71, 41));
        label_error = new QLabel(loginWindow);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(130, 180, 261, 41));
        IDlineEdit = new QLineEdit(loginWindow);
        IDlineEdit->setObjectName("IDlineEdit");
        IDlineEdit->setGeometry(QRect(180, 70, 181, 41));
        PasswordlineEdit = new QLineEdit(loginWindow);
        PasswordlineEdit->setObjectName("PasswordlineEdit");
        PasswordlineEdit->setGeometry(QRect(180, 130, 181, 41));
        PasswordlineEdit->setEchoMode(QLineEdit::Password);
        LoginpushButton = new QPushButton(loginWindow);
        LoginpushButton->setObjectName("LoginpushButton");
        LoginpushButton->setGeometry(QRect(110, 240, 121, 71));
        LoginpushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        RegisterpushButton = new QPushButton(loginWindow);
        RegisterpushButton->setObjectName("RegisterpushButton");
        RegisterpushButton->setGeometry(QRect(290, 240, 121, 71));
        RegisterpushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QDialog *loginWindow)
    {
        loginWindow->setWindowTitle(QCoreApplication::translate("loginWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#0000ff;\">Hospital Managment System</span></p></body></html>", nullptr));
        IDLoginlabel->setText(QCoreApplication::translate("loginWindow", "ID", nullptr));
        Passwordlabel->setText(QCoreApplication::translate("loginWindow", "Password", nullptr));
        label_error->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">ERROR: Wrong Username Or Password</span></p></body></html>", nullptr));
        LoginpushButton->setText(QCoreApplication::translate("loginWindow", "Login", nullptr));
        RegisterpushButton->setText(QCoreApplication::translate("loginWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
