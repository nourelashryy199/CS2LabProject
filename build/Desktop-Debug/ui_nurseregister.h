/********************************************************************************
** Form generated from reading UI file 'nurseregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NURSEREGISTER_H
#define UI_NURSEREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nurseregister
{
public:
    QLabel *label_8;
    QPushButton *pushButton;
    QLineEdit *assistantEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *errorID;
    QLabel *errorCheck;
    QLineEdit *passwordEdit;
    QLineEdit *repassEdit;
    QLabel *LabelPassError;
    QLabel *label_4;
    QLineEdit *idEdit;
    QLabel *LabelPassRe;
    QLabel *label_7;
    QLineEdit *nameEdit;
    QLabel *label_9;
    QLabel *errorExisting_2;

    void setupUi(QDialog *nurseregister)
    {
        if (nurseregister->objectName().isEmpty())
            nurseregister->setObjectName("nurseregister");
        nurseregister->resize(617, 720);
        label_8 = new QLabel(nurseregister);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 50, 331, 51));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        pushButton = new QPushButton(nurseregister);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 438, 131, 71));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        assistantEdit = new QLineEdit(nurseregister);
        assistantEdit->setObjectName("assistantEdit");
        assistantEdit->setGeometry(QRect(210, 380, 201, 41));
        label_5 = new QLabel(nurseregister);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 370, 111, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_6 = new QLabel(nurseregister);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(92, 10, 381, 61));
        label_6->setAlignment(Qt::AlignCenter);
        errorID = new QLabel(nurseregister);
        errorID->setObjectName("errorID");
        errorID->setGeometry(QRect(160, 90, 251, 51));
        errorID->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorCheck = new QLabel(nurseregister);
        errorCheck->setObjectName("errorCheck");
        errorCheck->setGeometry(QRect(260, 450, 161, 51));
        errorCheck->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        passwordEdit = new QLineEdit(nurseregister);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(210, 260, 201, 41));
        repassEdit = new QLineEdit(nurseregister);
        repassEdit->setObjectName("repassEdit");
        repassEdit->setGeometry(QRect(210, 320, 201, 41));
        repassEdit->setEchoMode(QLineEdit::Password);
        LabelPassError = new QLabel(nurseregister);
        LabelPassError->setObjectName("LabelPassError");
        LabelPassError->setGeometry(QRect(420, 320, 191, 41));
        label_4 = new QLabel(nurseregister);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 130, 61, 51));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        idEdit = new QLineEdit(nurseregister);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(210, 200, 201, 41));
        LabelPassRe = new QLabel(nurseregister);
        LabelPassRe->setObjectName("LabelPassRe");
        LabelPassRe->setGeometry(QRect(80, 320, 121, 41));
        label_7 = new QLabel(nurseregister);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 250, 141, 51));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        nameEdit = new QLineEdit(nurseregister);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(210, 140, 201, 41));
        label_9 = new QLabel(nurseregister);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(80, 190, 141, 51));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorExisting_2 = new QLabel(nurseregister);
        errorExisting_2->setObjectName("errorExisting_2");
        errorExisting_2->setGeometry(QRect(420, 190, 121, 51));
        errorExisting_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));

        retranslateUi(nurseregister);

        QMetaObject::connectSlotsByName(nurseregister);
    } // setupUi

    void retranslateUi(QDialog *nurseregister)
    {
        nurseregister->setWindowTitle(QCoreApplication::translate("nurseregister", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("nurseregister", "Note: Please Make sure that the ID starts with 02", nullptr));
        pushButton->setText(QCoreApplication::translate("nurseregister", "Register", nullptr));
        label_5->setText(QCoreApplication::translate("nurseregister", "Your Supervisor:", nullptr));
        label_6->setText(QCoreApplication::translate("nurseregister", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Please enter your details</span></p></body></html>", nullptr));
        errorID->setText(QCoreApplication::translate("nurseregister", "<html><head/><body><p><span style=\" color:#aa0000;\">ERROR: ID IS NOT STARTING WITH 02</span></p></body></html>", nullptr));
        errorCheck->setText(QCoreApplication::translate("nurseregister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*All fields must be filled</span></p></body></html>", nullptr));
        LabelPassError->setText(QCoreApplication::translate("nurseregister", "<html><head/><body><p><span style=\" color:#aa0000;\">*Password Does Not Match</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("nurseregister", "Name:", nullptr));
        LabelPassRe->setText(QCoreApplication::translate("nurseregister", "Re-type Password:", nullptr));
        label_7->setText(QCoreApplication::translate("nurseregister", "Password:", nullptr));
        label_9->setText(QCoreApplication::translate("nurseregister", "ID:", nullptr));
        errorExisting_2->setText(QCoreApplication::translate("nurseregister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nurseregister: public Ui_nurseregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NURSEREGISTER_H
