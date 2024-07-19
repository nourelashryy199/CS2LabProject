/********************************************************************************
** Form generated from reading UI file 'adminregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINREGISTER_H
#define UI_ADMINREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminregister
{
public:
    QLabel *LabelPassRe;
    QLabel *label_6;
    QLineEdit *idEdit;
    QLabel *label;
    QLineEdit *repassEdit;
    QLabel *label_8;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *LabelPassError;
    QLineEdit *passwordEdit;
    QLabel *errorCheck;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *errorID;
    QLabel *errorExisting;

    void setupUi(QDialog *adminregister)
    {
        if (adminregister->objectName().isEmpty())
            adminregister->setObjectName("adminregister");
        adminregister->resize(648, 454);
        LabelPassRe = new QLabel(adminregister);
        LabelPassRe->setObjectName("LabelPassRe");
        LabelPassRe->setGeometry(QRect(100, 300, 121, 41));
        label_6 = new QLabel(adminregister);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(112, -10, 381, 61));
        label_6->setAlignment(Qt::AlignCenter);
        idEdit = new QLineEdit(adminregister);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(230, 180, 201, 41));
        label = new QLabel(adminregister);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 110, 61, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        repassEdit = new QLineEdit(adminregister);
        repassEdit->setObjectName("repassEdit");
        repassEdit->setGeometry(QRect(230, 300, 201, 41));
        repassEdit->setEchoMode(QLineEdit::Password);
        label_8 = new QLabel(adminregister);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 30, 331, 51));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_3 = new QLabel(adminregister);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 230, 141, 51));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        pushButton = new QPushButton(adminregister);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 358, 131, 71));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        LabelPassError = new QLabel(adminregister);
        LabelPassError->setObjectName("LabelPassError");
        LabelPassError->setGeometry(QRect(440, 300, 191, 41));
        passwordEdit = new QLineEdit(adminregister);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(230, 240, 201, 41));
        errorCheck = new QLabel(adminregister);
        errorCheck->setObjectName("errorCheck");
        errorCheck->setGeometry(QRect(330, 370, 161, 51));
        errorCheck->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_2 = new QLabel(adminregister);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 170, 141, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        nameEdit = new QLineEdit(adminregister);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(230, 120, 201, 41));
        errorID = new QLabel(adminregister);
        errorID->setObjectName("errorID");
        errorID->setGeometry(QRect(180, 70, 251, 51));
        errorID->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorExisting = new QLabel(adminregister);
        errorExisting->setObjectName("errorExisting");
        errorExisting->setGeometry(QRect(440, 170, 121, 51));
        errorExisting->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));

        retranslateUi(adminregister);

        QMetaObject::connectSlotsByName(adminregister);
    } // setupUi

    void retranslateUi(QDialog *adminregister)
    {
        adminregister->setWindowTitle(QCoreApplication::translate("adminregister", "Dialog", nullptr));
        LabelPassRe->setText(QCoreApplication::translate("adminregister", "Re-type Password:", nullptr));
        label_6->setText(QCoreApplication::translate("adminregister", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Please enter your details</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("adminregister", "Name:", nullptr));
        label_8->setText(QCoreApplication::translate("adminregister", "Note: Please Make sure that the ID starts with 00", nullptr));
        label_3->setText(QCoreApplication::translate("adminregister", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("adminregister", "Register", nullptr));
        LabelPassError->setText(QCoreApplication::translate("adminregister", "<html><head/><body><p><span style=\" color:#aa0000;\">*Password Does Not Match</span></p></body></html>", nullptr));
        errorCheck->setText(QCoreApplication::translate("adminregister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*All fields must be filled</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("adminregister", "ID:", nullptr));
        errorID->setText(QCoreApplication::translate("adminregister", "<html><head/><body><p><span style=\" color:#aa0000;\">ERROR: ID IS NOT STARTING WITH 00</span></p></body></html>", nullptr));
        errorExisting->setText(QCoreApplication::translate("adminregister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminregister: public Ui_adminregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINREGISTER_H
