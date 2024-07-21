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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

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
    QLabel *errorCheck;
    QLabel *errorID;
    QLabel *LabelPassRe;
    QLineEdit *repassEdit;
    QLabel *LabelPassError;
    QComboBox *comboBox;
    QLabel *labelHours;
    QGroupBox *groupBoxInterval;
    QRadioButton *radioButtonAM;
    QRadioButton *radioButtonPM;
    QLabel *labelHoursDays;
    QGroupBox *groupBoxDays;
    QCheckBox *checkBoxU;
    QCheckBox *checkBoxT;
    QCheckBox *checkBoxM;
    QCheckBox *checkBoxW;
    QCheckBox *checkBoxR;
    QLabel *labelHours_2;
    QGroupBox *groupBoxHours;
    QComboBox *comboBoxFrom;
    QLabel *labelFrom;
    QLabel *labelTo;
    QComboBox *comboBoxTo;
    QPushButton *pushButtonRegister;

    void setupUi(QDialog *doctorRegister)
    {
        if (doctorRegister->objectName().isEmpty())
            doctorRegister->setObjectName("doctorRegister");
        doctorRegister->resize(627, 735);
        label = new QLabel(doctorRegister);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 90, 61, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_2 = new QLabel(doctorRegister);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 130, 141, 41));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_3 = new QLabel(doctorRegister);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 180, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_4 = new QLabel(doctorRegister);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 260, 141, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_5 = new QLabel(doctorRegister);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 310, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_6 = new QLabel(doctorRegister);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(92, 0, 381, 41));
        label_6->setAlignment(Qt::AlignCenter);
        nameEdit = new QLineEdit(doctorRegister);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(210, 100, 201, 31));
        idEdit = new QLineEdit(doctorRegister);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(210, 140, 201, 31));
        passwordEdit = new QLineEdit(doctorRegister);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(210, 180, 201, 31));
        assistantEdit = new QLineEdit(doctorRegister);
        assistantEdit->setObjectName("assistantEdit");
        assistantEdit->setGeometry(QRect(210, 310, 201, 31));
        errorExisting = new QLabel(doctorRegister);
        errorExisting->setObjectName("errorExisting");
        errorExisting->setGeometry(QRect(420, 130, 121, 51));
        errorExisting->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_8 = new QLabel(doctorRegister);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 40, 331, 21));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorCheck = new QLabel(doctorRegister);
        errorCheck->setObjectName("errorCheck");
        errorCheck->setGeometry(QRect(310, 670, 161, 51));
        errorCheck->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorID = new QLabel(doctorRegister);
        errorID->setObjectName("errorID");
        errorID->setGeometry(QRect(160, 70, 251, 21));
        errorID->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        LabelPassRe = new QLabel(doctorRegister);
        LabelPassRe->setObjectName("LabelPassRe");
        LabelPassRe->setGeometry(QRect(80, 220, 121, 31));
        repassEdit = new QLineEdit(doctorRegister);
        repassEdit->setObjectName("repassEdit");
        repassEdit->setGeometry(QRect(210, 220, 201, 31));
        repassEdit->setEchoMode(QLineEdit::Password);
        LabelPassError = new QLabel(doctorRegister);
        LabelPassError->setObjectName("LabelPassError");
        LabelPassError->setGeometry(QRect(420, 220, 191, 31));
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
        comboBox->setGeometry(QRect(209, 265, 201, 31));
        labelHours = new QLabel(doctorRegister);
        labelHours->setObjectName("labelHours");
        labelHours->setGeometry(QRect(80, 350, 141, 51));
        labelHours->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        groupBoxInterval = new QGroupBox(doctorRegister);
        groupBoxInterval->setObjectName("groupBoxInterval");
        groupBoxInterval->setGeometry(QRect(210, 350, 201, 61));
        radioButtonAM = new QRadioButton(groupBoxInterval);
        radioButtonAM->setObjectName("radioButtonAM");
        radioButtonAM->setGeometry(QRect(30, 30, 71, 24));
        radioButtonPM = new QRadioButton(groupBoxInterval);
        radioButtonPM->setObjectName("radioButtonPM");
        radioButtonPM->setGeometry(QRect(130, 30, 71, 24));
        labelHoursDays = new QLabel(doctorRegister);
        labelHoursDays->setObjectName("labelHoursDays");
        labelHoursDays->setGeometry(QRect(80, 520, 111, 51));
        labelHoursDays->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        groupBoxDays = new QGroupBox(doctorRegister);
        groupBoxDays->setObjectName("groupBoxDays");
        groupBoxDays->setGeometry(QRect(200, 520, 301, 131));
        checkBoxU = new QCheckBox(groupBoxDays);
        checkBoxU->setObjectName("checkBoxU");
        checkBoxU->setGeometry(QRect(30, 30, 91, 24));
        checkBoxT = new QCheckBox(groupBoxDays);
        checkBoxT->setObjectName("checkBoxT");
        checkBoxT->setGeometry(QRect(30, 60, 91, 24));
        checkBoxM = new QCheckBox(groupBoxDays);
        checkBoxM->setObjectName("checkBoxM");
        checkBoxM->setGeometry(QRect(140, 30, 91, 24));
        checkBoxW = new QCheckBox(groupBoxDays);
        checkBoxW->setObjectName("checkBoxW");
        checkBoxW->setGeometry(QRect(140, 60, 91, 24));
        checkBoxR = new QCheckBox(groupBoxDays);
        checkBoxR->setObjectName("checkBoxR");
        checkBoxR->setGeometry(QRect(30, 90, 91, 24));
        labelHours_2 = new QLabel(doctorRegister);
        labelHours_2->setObjectName("labelHours_2");
        labelHours_2->setGeometry(QRect(80, 430, 141, 51));
        labelHours_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        groupBoxHours = new QGroupBox(doctorRegister);
        groupBoxHours->setObjectName("groupBoxHours");
        groupBoxHours->setGeometry(QRect(210, 420, 301, 101));
        comboBoxFrom = new QComboBox(groupBoxHours);
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->addItem(QString());
        comboBoxFrom->setObjectName("comboBoxFrom");
        comboBoxFrom->setGeometry(QRect(20, 50, 111, 26));
        labelFrom = new QLabel(groupBoxHours);
        labelFrom->setObjectName("labelFrom");
        labelFrom->setGeometry(QRect(30, 20, 63, 20));
        labelTo = new QLabel(groupBoxHours);
        labelTo->setObjectName("labelTo");
        labelTo->setGeometry(QRect(170, 20, 63, 20));
        comboBoxTo = new QComboBox(groupBoxHours);
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->addItem(QString());
        comboBoxTo->setObjectName("comboBoxTo");
        comboBoxTo->setGeometry(QRect(160, 50, 111, 26));
        pushButtonRegister = new QPushButton(doctorRegister);
        pushButtonRegister->setObjectName("pushButtonRegister");
        pushButtonRegister->setGeometry(QRect(130, 658, 131, 61));
        pushButtonRegister->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));

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

        labelHours->setText(QCoreApplication::translate("doctorRegister", "Working Interval:", nullptr));
        groupBoxInterval->setTitle(QString());
        radioButtonAM->setText(QCoreApplication::translate("doctorRegister", "AM", nullptr));
        radioButtonPM->setText(QCoreApplication::translate("doctorRegister", "PM", nullptr));
        labelHoursDays->setText(QCoreApplication::translate("doctorRegister", "Working Days:", nullptr));
        groupBoxDays->setTitle(QString());
        checkBoxU->setText(QCoreApplication::translate("doctorRegister", "U", nullptr));
        checkBoxT->setText(QCoreApplication::translate("doctorRegister", "T", nullptr));
        checkBoxM->setText(QCoreApplication::translate("doctorRegister", "M", nullptr));
        checkBoxW->setText(QCoreApplication::translate("doctorRegister", "W", nullptr));
        checkBoxR->setText(QCoreApplication::translate("doctorRegister", "R", nullptr));
        labelHours_2->setText(QCoreApplication::translate("doctorRegister", "Working Hours:", nullptr));
        groupBoxHours->setTitle(QString());
        comboBoxFrom->setItemText(0, QCoreApplication::translate("doctorRegister", "Select Field", nullptr));
        comboBoxFrom->setItemText(1, QCoreApplication::translate("doctorRegister", "1:00", nullptr));
        comboBoxFrom->setItemText(2, QCoreApplication::translate("doctorRegister", "1:30", nullptr));
        comboBoxFrom->setItemText(3, QCoreApplication::translate("doctorRegister", "2:00", nullptr));
        comboBoxFrom->setItemText(4, QCoreApplication::translate("doctorRegister", "2:30", nullptr));
        comboBoxFrom->setItemText(5, QCoreApplication::translate("doctorRegister", "3:00", nullptr));
        comboBoxFrom->setItemText(6, QCoreApplication::translate("doctorRegister", "3:30", nullptr));
        comboBoxFrom->setItemText(7, QCoreApplication::translate("doctorRegister", "4:00", nullptr));
        comboBoxFrom->setItemText(8, QCoreApplication::translate("doctorRegister", "4:30", nullptr));
        comboBoxFrom->setItemText(9, QCoreApplication::translate("doctorRegister", "5:00", nullptr));
        comboBoxFrom->setItemText(10, QCoreApplication::translate("doctorRegister", "5:30", nullptr));
        comboBoxFrom->setItemText(11, QCoreApplication::translate("doctorRegister", "6:00", nullptr));
        comboBoxFrom->setItemText(12, QCoreApplication::translate("doctorRegister", "6:30", nullptr));
        comboBoxFrom->setItemText(13, QCoreApplication::translate("doctorRegister", "7:00", nullptr));
        comboBoxFrom->setItemText(14, QCoreApplication::translate("doctorRegister", "7:30", nullptr));
        comboBoxFrom->setItemText(15, QCoreApplication::translate("doctorRegister", "8:00", nullptr));
        comboBoxFrom->setItemText(16, QCoreApplication::translate("doctorRegister", "8:30", nullptr));
        comboBoxFrom->setItemText(17, QCoreApplication::translate("doctorRegister", "9:00", nullptr));
        comboBoxFrom->setItemText(18, QCoreApplication::translate("doctorRegister", "9:30", nullptr));
        comboBoxFrom->setItemText(19, QCoreApplication::translate("doctorRegister", "10:00", nullptr));
        comboBoxFrom->setItemText(20, QCoreApplication::translate("doctorRegister", "10:30", nullptr));
        comboBoxFrom->setItemText(21, QCoreApplication::translate("doctorRegister", "11:00", nullptr));
        comboBoxFrom->setItemText(22, QCoreApplication::translate("doctorRegister", "11:30", nullptr));
        comboBoxFrom->setItemText(23, QCoreApplication::translate("doctorRegister", "12:00", nullptr));

        labelFrom->setText(QCoreApplication::translate("doctorRegister", "From:", nullptr));
        labelTo->setText(QCoreApplication::translate("doctorRegister", "To:", nullptr));
        comboBoxTo->setItemText(0, QCoreApplication::translate("doctorRegister", "Select Field", nullptr));
        comboBoxTo->setItemText(1, QCoreApplication::translate("doctorRegister", "1:00", nullptr));
        comboBoxTo->setItemText(2, QCoreApplication::translate("doctorRegister", "1:30", nullptr));
        comboBoxTo->setItemText(3, QCoreApplication::translate("doctorRegister", "2:00", nullptr));
        comboBoxTo->setItemText(4, QCoreApplication::translate("doctorRegister", "2:30", nullptr));
        comboBoxTo->setItemText(5, QCoreApplication::translate("doctorRegister", "3:00", nullptr));
        comboBoxTo->setItemText(6, QCoreApplication::translate("doctorRegister", "3:30", nullptr));
        comboBoxTo->setItemText(7, QCoreApplication::translate("doctorRegister", "4:00", nullptr));
        comboBoxTo->setItemText(8, QCoreApplication::translate("doctorRegister", "4:30", nullptr));
        comboBoxTo->setItemText(9, QCoreApplication::translate("doctorRegister", "5:00", nullptr));
        comboBoxTo->setItemText(10, QCoreApplication::translate("doctorRegister", "5:30", nullptr));
        comboBoxTo->setItemText(11, QCoreApplication::translate("doctorRegister", "6:00", nullptr));
        comboBoxTo->setItemText(12, QCoreApplication::translate("doctorRegister", "6:30", nullptr));
        comboBoxTo->setItemText(13, QCoreApplication::translate("doctorRegister", "7:00", nullptr));
        comboBoxTo->setItemText(14, QCoreApplication::translate("doctorRegister", "7:30", nullptr));
        comboBoxTo->setItemText(15, QCoreApplication::translate("doctorRegister", "8:00", nullptr));
        comboBoxTo->setItemText(16, QCoreApplication::translate("doctorRegister", "8:30", nullptr));
        comboBoxTo->setItemText(17, QCoreApplication::translate("doctorRegister", "9:00", nullptr));
        comboBoxTo->setItemText(18, QCoreApplication::translate("doctorRegister", "9:30", nullptr));
        comboBoxTo->setItemText(19, QCoreApplication::translate("doctorRegister", "10:00", nullptr));
        comboBoxTo->setItemText(20, QCoreApplication::translate("doctorRegister", "10:30", nullptr));
        comboBoxTo->setItemText(21, QCoreApplication::translate("doctorRegister", "11:00", nullptr));
        comboBoxTo->setItemText(22, QCoreApplication::translate("doctorRegister", "11:30", nullptr));
        comboBoxTo->setItemText(23, QCoreApplication::translate("doctorRegister", "12:00", nullptr));

        pushButtonRegister->setText(QCoreApplication::translate("doctorRegister", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorRegister: public Ui_doctorRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORREGISTER_H
