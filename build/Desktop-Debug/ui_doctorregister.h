/********************************************************************************
** Form generated from reading UI file 'doctorregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORREGISTER_H
#define UI_DOCTORREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_doctorRegister
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *nameEdit;
    QLineEdit *idEdit;
    QLineEdit *passwordEdit;
    QLineEdit *assistantEdit;
    QLabel *errorExisting;
    QLabel *label_8;
    QPushButton *pushButton;
    QLabel *errorCheck;
    QLabel *errorID;
    QLabel *LabelPassRe;
    QLineEdit *repassEdit;
    QLabel *LabelPassError;
    QComboBox *comboBox;

    void setupUi(QDialog *doctorRegister)
    {
        if (doctorRegister->objectName().isEmpty())
            doctorRegister->setObjectName("doctorRegister");
        doctorRegister->resize(627, 596);
        label = new QLabel(doctorRegister);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 130, 61, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_2 = new QLabel(doctorRegister);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 190, 141, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_3 = new QLabel(doctorRegister);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 250, 141, 51));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_4 = new QLabel(doctorRegister);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 370, 141, 51));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_5 = new QLabel(doctorRegister);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 430, 141, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_6 = new QLabel(doctorRegister);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(92, 10, 381, 61));
        label_6->setAlignment(Qt::AlignCenter);
        nameEdit = new QLineEdit(doctorRegister);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(210, 140, 201, 41));
        idEdit = new QLineEdit(doctorRegister);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(210, 200, 201, 41));
        passwordEdit = new QLineEdit(doctorRegister);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(210, 260, 201, 41));
        assistantEdit = new QLineEdit(doctorRegister);
        assistantEdit->setObjectName("assistantEdit");
        assistantEdit->setGeometry(QRect(210, 440, 201, 41));
        errorExisting = new QLabel(doctorRegister);
        errorExisting->setObjectName("errorExisting");
        errorExisting->setGeometry(QRect(420, 190, 121, 51));
        errorExisting->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_8 = new QLabel(doctorRegister);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 50, 331, 51));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        pushButton = new QPushButton(doctorRegister);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 498, 131, 71));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        errorCheck = new QLabel(doctorRegister);
        errorCheck->setObjectName("errorCheck");
        errorCheck->setGeometry(QRect(310, 510, 161, 51));
        errorCheck->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorID = new QLabel(doctorRegister);
        errorID->setObjectName("errorID");
        errorID->setGeometry(QRect(160, 90, 251, 51));
        errorID->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        LabelPassRe = new QLabel(doctorRegister);
        LabelPassRe->setObjectName("LabelPassRe");
        LabelPassRe->setGeometry(QRect(80, 320, 121, 41));
        repassEdit = new QLineEdit(doctorRegister);
        repassEdit->setObjectName("repassEdit");
        repassEdit->setGeometry(QRect(210, 320, 201, 41));
        repassEdit->setEchoMode(QLineEdit::Password);
        LabelPassError = new QLabel(doctorRegister);
        LabelPassError->setObjectName("LabelPassError");
        LabelPassError->setGeometry(QRect(420, 320, 191, 41));
        comboBox = new QComboBox(doctorRegister);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(209, 385, 201, 41));

        retranslateUi(doctorRegister);

        QMetaObject::connectSlotsByName(doctorRegister);
    } // setupUi

    void retranslateUi(QDialog *doctorRegister)
    {
        doctorRegister->setWindowTitle(QCoreApplication::translate("doctorRegister", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("doctorRegister", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("doctorRegister", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("doctorRegister", "Password:", nullptr));
        label_4->setText(QCoreApplication::translate("doctorRegister", "Specialization:", nullptr));
        label_5->setText(QCoreApplication::translate("doctorRegister", "Your Assistant:", nullptr));
        label_6->setText(QCoreApplication::translate("doctorRegister", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Please enter your details</span></p></body></html>", nullptr));
        errorExisting->setText(QCoreApplication::translate("doctorRegister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("doctorRegister", "Note: Please Make sure that the ID starts with 01", nullptr));
        pushButton->setText(QCoreApplication::translate("doctorRegister", "Register", nullptr));
        errorCheck->setText(QCoreApplication::translate("doctorRegister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*All fields must be filled</span></p></body></html>", nullptr));
        errorID->setText(QCoreApplication::translate("doctorRegister", "<html><head/><body><p><span style=\" color:#aa0000;\">ERROR: ID IS NOT STARTING WITH 01</span></p></body></html>", nullptr));
        LabelPassRe->setText(QCoreApplication::translate("doctorRegister", "Re-type Password:", nullptr));
        LabelPassError->setText(QCoreApplication::translate("doctorRegister", "<html><head/><body><p><span style=\" color:#aa0000;\">*Password Does Not Match</span></p></body></html>", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("doctorRegister", "Select Field", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("doctorRegister", "Cardiologist", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("doctorRegister", "Dermatologist", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("doctorRegister", "General Surgeon", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("doctorRegister", "Neurologists", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("doctorRegister", "Pediatrician", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("doctorRegister", "Psychiatrist", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("doctorRegister", "Optometrist", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("doctorRegister", "Dentist", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("doctorRegister", "Orthopedist", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("doctorRegister", "Dietitian", nullptr));

    } // retranslateUi

};

namespace Ui {
    class doctorRegister: public Ui_doctorRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORREGISTER_H
