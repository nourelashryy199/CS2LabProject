/********************************************************************************
** Form generated from reading UI file 'patientregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTREGISTER_H
#define UI_PATIENTREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_patientregister
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_8;
    QLineEdit *passwordEdit;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *errorExisting;
    QLabel *label_6;
    QLineEdit *idEdit;
    QLabel *errorCheck;
    QLabel *errorID;
    QLabel *label_3;
    QLabel *LabelYear;
    QComboBox *ComboBoxMonth;
    QComboBox *ComboBoxDay;
    QLabel *LabelMonth;
    QLabel *LabelErrorAge;
    QComboBox *ComboBoxYear;
    QLabel *LabelDay;
    QLabel *LabelBirth;
    QLineEdit *repassEdit;
    QLabel *LabelPassError;
    QLabel *LabelPassRe;
    QGroupBox *GroupBoxGender;
    QRadioButton *RadioButtonMale;
    QRadioButton *RadioButtonFemale;

    void setupUi(QDialog *patientregister)
    {
        if (patientregister->objectName().isEmpty())
            patientregister->setObjectName("patientregister");
        patientregister->resize(627, 669);
        pushButton = new QPushButton(patientregister);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 578, 131, 71));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        label_2 = new QLabel(patientregister);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 190, 141, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_8 = new QLabel(patientregister);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 50, 331, 51));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        passwordEdit = new QLineEdit(patientregister);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(210, 260, 201, 41));
        label = new QLabel(patientregister);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 130, 61, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        nameEdit = new QLineEdit(patientregister);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(210, 140, 201, 41));
        errorExisting = new QLabel(patientregister);
        errorExisting->setObjectName("errorExisting");
        errorExisting->setGeometry(QRect(420, 190, 121, 51));
        errorExisting->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_6 = new QLabel(patientregister);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(92, 10, 381, 61));
        label_6->setAlignment(Qt::AlignCenter);
        idEdit = new QLineEdit(patientregister);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(210, 200, 201, 41));
        errorCheck = new QLabel(patientregister);
        errorCheck->setObjectName("errorCheck");
        errorCheck->setGeometry(QRect(260, 590, 161, 51));
        errorCheck->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorID = new QLabel(patientregister);
        errorID->setObjectName("errorID");
        errorID->setGeometry(QRect(160, 90, 251, 51));
        errorID->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_3 = new QLabel(patientregister);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 250, 141, 51));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        LabelYear = new QLabel(patientregister);
        LabelYear->setObjectName("LabelYear");
        LabelYear->setGeometry(QRect(340, 390, 111, 41));
        ComboBoxMonth = new QComboBox(patientregister);
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->addItem(QString());
        ComboBoxMonth->setObjectName("ComboBoxMonth");
        ComboBoxMonth->setGeometry(QRect(90, 430, 80, 26));
        ComboBoxDay = new QComboBox(patientregister);
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->addItem(QString());
        ComboBoxDay->setObjectName("ComboBoxDay");
        ComboBoxDay->setGeometry(QRect(220, 430, 80, 26));
        LabelMonth = new QLabel(patientregister);
        LabelMonth->setObjectName("LabelMonth");
        LabelMonth->setGeometry(QRect(90, 390, 111, 41));
        LabelErrorAge = new QLabel(patientregister);
        LabelErrorAge->setObjectName("LabelErrorAge");
        LabelErrorAge->setGeometry(QRect(440, 420, 191, 41));
        ComboBoxYear = new QComboBox(patientregister);
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->addItem(QString());
        ComboBoxYear->setObjectName("ComboBoxYear");
        ComboBoxYear->setGeometry(QRect(340, 430, 80, 26));
        LabelDay = new QLabel(patientregister);
        LabelDay->setObjectName("LabelDay");
        LabelDay->setGeometry(QRect(220, 390, 111, 41));
        LabelBirth = new QLabel(patientregister);
        LabelBirth->setObjectName("LabelBirth");
        LabelBirth->setGeometry(QRect(80, 360, 251, 41));
        repassEdit = new QLineEdit(patientregister);
        repassEdit->setObjectName("repassEdit");
        repassEdit->setGeometry(QRect(210, 320, 201, 41));
        repassEdit->setEchoMode(QLineEdit::Password);
        LabelPassError = new QLabel(patientregister);
        LabelPassError->setObjectName("LabelPassError");
        LabelPassError->setGeometry(QRect(420, 320, 191, 41));
        LabelPassRe = new QLabel(patientregister);
        LabelPassRe->setObjectName("LabelPassRe");
        LabelPassRe->setGeometry(QRect(80, 320, 121, 41));
        GroupBoxGender = new QGroupBox(patientregister);
        GroupBoxGender->setObjectName("GroupBoxGender");
        GroupBoxGender->setGeometry(QRect(70, 470, 161, 101));
        RadioButtonMale = new QRadioButton(GroupBoxGender);
        RadioButtonMale->setObjectName("RadioButtonMale");
        RadioButtonMale->setGeometry(QRect(20, 30, 110, 24));
        RadioButtonFemale = new QRadioButton(GroupBoxGender);
        RadioButtonFemale->setObjectName("RadioButtonFemale");
        RadioButtonFemale->setGeometry(QRect(20, 60, 110, 24));

        retranslateUi(patientregister);

        QMetaObject::connectSlotsByName(patientregister);
    } // setupUi

    void retranslateUi(QDialog *patientregister)
    {
        patientregister->setWindowTitle(QCoreApplication::translate("patientregister", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("patientregister", "Register", nullptr));
        label_2->setText(QCoreApplication::translate("patientregister", "ID:", nullptr));
        label_8->setText(QCoreApplication::translate("patientregister", "Note: Please Make sure that the ID starts with 02", nullptr));
        label->setText(QCoreApplication::translate("patientregister", "Name:", nullptr));
        errorExisting->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Please enter your details</span></p></body></html>", nullptr));
        errorCheck->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*All fields must be filled</span></p></body></html>", nullptr));
        errorID->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" color:#aa0000;\">ERROR: ID IS NOT STARTING WITH 02</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("patientregister", "Password:", nullptr));
        LabelYear->setText(QCoreApplication::translate("patientregister", "Year", nullptr));
        ComboBoxMonth->setItemText(0, QCoreApplication::translate("patientregister", "Jan", nullptr));
        ComboBoxMonth->setItemText(1, QCoreApplication::translate("patientregister", "Feb", nullptr));
        ComboBoxMonth->setItemText(2, QCoreApplication::translate("patientregister", "Mar", nullptr));
        ComboBoxMonth->setItemText(3, QCoreApplication::translate("patientregister", "Apr", nullptr));
        ComboBoxMonth->setItemText(4, QCoreApplication::translate("patientregister", "May", nullptr));
        ComboBoxMonth->setItemText(5, QCoreApplication::translate("patientregister", "Jun", nullptr));
        ComboBoxMonth->setItemText(6, QCoreApplication::translate("patientregister", "Jul", nullptr));
        ComboBoxMonth->setItemText(7, QCoreApplication::translate("patientregister", "Aug", nullptr));
        ComboBoxMonth->setItemText(8, QCoreApplication::translate("patientregister", "Sep", nullptr));
        ComboBoxMonth->setItemText(9, QCoreApplication::translate("patientregister", "Oct", nullptr));
        ComboBoxMonth->setItemText(10, QCoreApplication::translate("patientregister", "Nov", nullptr));
        ComboBoxMonth->setItemText(11, QCoreApplication::translate("patientregister", "Dec", nullptr));

        ComboBoxDay->setItemText(0, QCoreApplication::translate("patientregister", "1", nullptr));
        ComboBoxDay->setItemText(1, QCoreApplication::translate("patientregister", "2", nullptr));
        ComboBoxDay->setItemText(2, QCoreApplication::translate("patientregister", "3", nullptr));
        ComboBoxDay->setItemText(3, QCoreApplication::translate("patientregister", "4", nullptr));
        ComboBoxDay->setItemText(4, QCoreApplication::translate("patientregister", "5", nullptr));
        ComboBoxDay->setItemText(5, QCoreApplication::translate("patientregister", "6", nullptr));
        ComboBoxDay->setItemText(6, QCoreApplication::translate("patientregister", "7", nullptr));
        ComboBoxDay->setItemText(7, QCoreApplication::translate("patientregister", "8", nullptr));
        ComboBoxDay->setItemText(8, QCoreApplication::translate("patientregister", "9", nullptr));
        ComboBoxDay->setItemText(9, QCoreApplication::translate("patientregister", "10", nullptr));
        ComboBoxDay->setItemText(10, QCoreApplication::translate("patientregister", "11", nullptr));
        ComboBoxDay->setItemText(11, QCoreApplication::translate("patientregister", "12", nullptr));
        ComboBoxDay->setItemText(12, QCoreApplication::translate("patientregister", "13", nullptr));
        ComboBoxDay->setItemText(13, QCoreApplication::translate("patientregister", "14", nullptr));
        ComboBoxDay->setItemText(14, QCoreApplication::translate("patientregister", "15", nullptr));
        ComboBoxDay->setItemText(15, QCoreApplication::translate("patientregister", "16", nullptr));
        ComboBoxDay->setItemText(16, QCoreApplication::translate("patientregister", "17", nullptr));
        ComboBoxDay->setItemText(17, QCoreApplication::translate("patientregister", "18", nullptr));
        ComboBoxDay->setItemText(18, QCoreApplication::translate("patientregister", "19", nullptr));
        ComboBoxDay->setItemText(19, QCoreApplication::translate("patientregister", "20", nullptr));
        ComboBoxDay->setItemText(20, QCoreApplication::translate("patientregister", "21", nullptr));
        ComboBoxDay->setItemText(21, QCoreApplication::translate("patientregister", "22", nullptr));
        ComboBoxDay->setItemText(22, QCoreApplication::translate("patientregister", "23", nullptr));
        ComboBoxDay->setItemText(23, QCoreApplication::translate("patientregister", "24", nullptr));
        ComboBoxDay->setItemText(24, QCoreApplication::translate("patientregister", "25", nullptr));
        ComboBoxDay->setItemText(25, QCoreApplication::translate("patientregister", "26", nullptr));
        ComboBoxDay->setItemText(26, QCoreApplication::translate("patientregister", "27", nullptr));
        ComboBoxDay->setItemText(27, QCoreApplication::translate("patientregister", "28", nullptr));
        ComboBoxDay->setItemText(28, QCoreApplication::translate("patientregister", "29", nullptr));
        ComboBoxDay->setItemText(29, QCoreApplication::translate("patientregister", "30", nullptr));
        ComboBoxDay->setItemText(30, QCoreApplication::translate("patientregister", "31", nullptr));

        LabelMonth->setText(QCoreApplication::translate("patientregister", "Month", nullptr));
        LabelErrorAge->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" color:#aa0000;\">*Age is less than 12</span></p></body></html>", nullptr));
        ComboBoxYear->setItemText(0, QCoreApplication::translate("patientregister", "2000", nullptr));
        ComboBoxYear->setItemText(1, QCoreApplication::translate("patientregister", "2001", nullptr));
        ComboBoxYear->setItemText(2, QCoreApplication::translate("patientregister", "2002", nullptr));
        ComboBoxYear->setItemText(3, QCoreApplication::translate("patientregister", "2003", nullptr));
        ComboBoxYear->setItemText(4, QCoreApplication::translate("patientregister", "2004", nullptr));
        ComboBoxYear->setItemText(5, QCoreApplication::translate("patientregister", "2005", nullptr));
        ComboBoxYear->setItemText(6, QCoreApplication::translate("patientregister", "2006", nullptr));
        ComboBoxYear->setItemText(7, QCoreApplication::translate("patientregister", "2007", nullptr));
        ComboBoxYear->setItemText(8, QCoreApplication::translate("patientregister", "2008", nullptr));
        ComboBoxYear->setItemText(9, QCoreApplication::translate("patientregister", "2009", nullptr));
        ComboBoxYear->setItemText(10, QCoreApplication::translate("patientregister", "2010", nullptr));
        ComboBoxYear->setItemText(11, QCoreApplication::translate("patientregister", "2011", nullptr));
        ComboBoxYear->setItemText(12, QCoreApplication::translate("patientregister", "2012", nullptr));
        ComboBoxYear->setItemText(13, QCoreApplication::translate("patientregister", "2013", nullptr));
        ComboBoxYear->setItemText(14, QCoreApplication::translate("patientregister", "2014", nullptr));
        ComboBoxYear->setItemText(15, QCoreApplication::translate("patientregister", "2015", nullptr));
        ComboBoxYear->setItemText(16, QCoreApplication::translate("patientregister", "2016", nullptr));
        ComboBoxYear->setItemText(17, QCoreApplication::translate("patientregister", "2017", nullptr));
        ComboBoxYear->setItemText(18, QCoreApplication::translate("patientregister", "2018", nullptr));
        ComboBoxYear->setItemText(19, QCoreApplication::translate("patientregister", "2019", nullptr));
        ComboBoxYear->setItemText(20, QCoreApplication::translate("patientregister", "2020", nullptr));
        ComboBoxYear->setItemText(21, QCoreApplication::translate("patientregister", "2021", nullptr));
        ComboBoxYear->setItemText(22, QCoreApplication::translate("patientregister", "2022", nullptr));
        ComboBoxYear->setItemText(23, QCoreApplication::translate("patientregister", "2023", nullptr));
        ComboBoxYear->setItemText(24, QCoreApplication::translate("patientregister", "2024", nullptr));

        LabelDay->setText(QCoreApplication::translate("patientregister", "Day", nullptr));
        LabelBirth->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p>Date Of Birth<span style=\" color:#000000;\">---------------------------</span></p></body></html>", nullptr));
        LabelPassError->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" color:#aa0000;\">*Password Does Not Match</span></p></body></html>", nullptr));
        LabelPassRe->setText(QCoreApplication::translate("patientregister", "Re-type Password:", nullptr));
        GroupBoxGender->setTitle(QCoreApplication::translate("patientregister", "Gender", nullptr));
        RadioButtonMale->setText(QCoreApplication::translate("patientregister", "Male", nullptr));
        RadioButtonFemale->setText(QCoreApplication::translate("patientregister", "Female", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientregister: public Ui_patientregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTREGISTER_H
