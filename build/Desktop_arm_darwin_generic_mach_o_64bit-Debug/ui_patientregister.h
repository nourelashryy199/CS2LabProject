/********************************************************************************
** Form generated from reading UI file 'patientregister.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
    QLineEdit *repassEdit;
    QLabel *LabelPassError;
    QLabel *LabelPassRe;
    QGroupBox *GroupBoxGender;
    QRadioButton *RadioButtonMale;
    QRadioButton *RadioButtonFemale;
    QLineEdit *ageEdit;
    QLabel *LabelPassRe_2;
    QLabel *LabelPassRe_3;
    QLineEdit *weightEdit;
    QLabel *label_9;
    QComboBox *comboBoxDiet;
    QLabel *LabelPassRe_4;
    QLabel *LabelPassRe_5;
    QComboBox *comboBoxBlood;
    QLineEdit *heightEdit;
    QLabel *LabelPassRe_6;
    QLabel *label_10;

    void setupUi(QDialog *patientregister)
    {
        if (patientregister->objectName().isEmpty())
            patientregister->setObjectName("patientregister");
        patientregister->resize(627, 686);
        pushButton = new QPushButton(patientregister);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 598, 261, 71));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        label_2 = new QLabel(patientregister);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 170, 141, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_8 = new QLabel(patientregister);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 40, 331, 51));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        passwordEdit = new QLineEdit(patientregister);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(210, 240, 201, 41));
        label = new QLabel(patientregister);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 120, 61, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        nameEdit = new QLineEdit(patientregister);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(210, 130, 201, 41));
        errorExisting = new QLabel(patientregister);
        errorExisting->setObjectName("errorExisting");
        errorExisting->setGeometry(QRect(420, 170, 121, 51));
        errorExisting->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_6 = new QLabel(patientregister);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(92, 0, 381, 61));
        label_6->setAlignment(Qt::AlignCenter);
        idEdit = new QLineEdit(patientregister);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(210, 180, 201, 41));
        errorCheck = new QLabel(patientregister);
        errorCheck->setObjectName("errorCheck");
        errorCheck->setGeometry(QRect(420, 610, 161, 51));
        errorCheck->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorID = new QLabel(patientregister);
        errorID->setObjectName("errorID");
        errorID->setGeometry(QRect(160, 80, 251, 51));
        errorID->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_3 = new QLabel(patientregister);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 230, 141, 51));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        repassEdit = new QLineEdit(patientregister);
        repassEdit->setObjectName("repassEdit");
        repassEdit->setGeometry(QRect(210, 290, 201, 41));
        repassEdit->setEchoMode(QLineEdit::Password);
        LabelPassError = new QLabel(patientregister);
        LabelPassError->setObjectName("LabelPassError");
        LabelPassError->setGeometry(QRect(420, 290, 191, 41));
        LabelPassRe = new QLabel(patientregister);
        LabelPassRe->setObjectName("LabelPassRe");
        LabelPassRe->setGeometry(QRect(80, 290, 121, 41));
        GroupBoxGender = new QGroupBox(patientregister);
        GroupBoxGender->setObjectName("GroupBoxGender");
        GroupBoxGender->setGeometry(QRect(30, 490, 161, 101));
        RadioButtonMale = new QRadioButton(GroupBoxGender);
        RadioButtonMale->setObjectName("RadioButtonMale");
        RadioButtonMale->setGeometry(QRect(20, 30, 110, 24));
        RadioButtonFemale = new QRadioButton(GroupBoxGender);
        RadioButtonFemale->setObjectName("RadioButtonFemale");
        RadioButtonFemale->setGeometry(QRect(20, 60, 110, 24));
        ageEdit = new QLineEdit(patientregister);
        ageEdit->setObjectName("ageEdit");
        ageEdit->setGeometry(QRect(210, 340, 201, 41));
        ageEdit->setEchoMode(QLineEdit::Password);
        LabelPassRe_2 = new QLabel(patientregister);
        LabelPassRe_2->setObjectName("LabelPassRe_2");
        LabelPassRe_2->setGeometry(QRect(80, 340, 121, 41));
        LabelPassRe_3 = new QLabel(patientregister);
        LabelPassRe_3->setObjectName("LabelPassRe_3");
        LabelPassRe_3->setGeometry(QRect(80, 390, 121, 41));
        weightEdit = new QLineEdit(patientregister);
        weightEdit->setObjectName("weightEdit");
        weightEdit->setGeometry(QRect(210, 390, 201, 41));
        weightEdit->setEchoMode(QLineEdit::Password);
        label_9 = new QLabel(patientregister);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(420, 380, 331, 51));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        comboBoxDiet = new QComboBox(patientregister);
        comboBoxDiet->addItem(QString());
        comboBoxDiet->addItem(QString());
        comboBoxDiet->addItem(QString());
        comboBoxDiet->addItem(QString());
        comboBoxDiet->addItem(QString());
        comboBoxDiet->setObjectName("comboBoxDiet");
        comboBoxDiet->setGeometry(QRect(250, 530, 121, 51));
        LabelPassRe_4 = new QLabel(patientregister);
        LabelPassRe_4->setObjectName("LabelPassRe_4");
        LabelPassRe_4->setGeometry(QRect(250, 490, 121, 41));
        LabelPassRe_4->setAlignment(Qt::AlignCenter);
        LabelPassRe_5 = new QLabel(patientregister);
        LabelPassRe_5->setObjectName("LabelPassRe_5");
        LabelPassRe_5->setGeometry(QRect(440, 490, 121, 41));
        LabelPassRe_5->setAlignment(Qt::AlignCenter);
        comboBoxBlood = new QComboBox(patientregister);
        comboBoxBlood->addItem(QString());
        comboBoxBlood->addItem(QString());
        comboBoxBlood->addItem(QString());
        comboBoxBlood->addItem(QString());
        comboBoxBlood->addItem(QString());
        comboBoxBlood->addItem(QString());
        comboBoxBlood->addItem(QString());
        comboBoxBlood->addItem(QString());
        comboBoxBlood->addItem(QString());
        comboBoxBlood->setObjectName("comboBoxBlood");
        comboBoxBlood->setGeometry(QRect(440, 530, 121, 51));
        heightEdit = new QLineEdit(patientregister);
        heightEdit->setObjectName("heightEdit");
        heightEdit->setGeometry(QRect(210, 440, 201, 41));
        heightEdit->setEchoMode(QLineEdit::Password);
        LabelPassRe_6 = new QLabel(patientregister);
        LabelPassRe_6->setObjectName("LabelPassRe_6");
        LabelPassRe_6->setGeometry(QRect(80, 440, 121, 41));
        label_10 = new QLabel(patientregister);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(420, 430, 331, 51));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));

        retranslateUi(patientregister);

        QMetaObject::connectSlotsByName(patientregister);
    } // setupUi

    void retranslateUi(QDialog *patientregister)
    {
        patientregister->setWindowTitle(QCoreApplication::translate("patientregister", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("patientregister", "Register", nullptr));
        label_2->setText(QCoreApplication::translate("patientregister", "ID:", nullptr));
        label_8->setText(QCoreApplication::translate("patientregister", "Note: Please Make sure that the ID starts with 03", nullptr));
        label->setText(QCoreApplication::translate("patientregister", "Name:", nullptr));
        errorExisting->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Please enter your details</span></p></body></html>", nullptr));
        errorCheck->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*All fields must be filled</span></p></body></html>", nullptr));
        errorID->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" color:#aa0000;\">ERROR: ID IS NOT STARTING WITH 03</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("patientregister", "Password:", nullptr));
        LabelPassError->setText(QCoreApplication::translate("patientregister", "<html><head/><body><p><span style=\" color:#aa0000;\">*Password Does Not Match</span></p></body></html>", nullptr));
        LabelPassRe->setText(QCoreApplication::translate("patientregister", "Re-type Password:", nullptr));
        GroupBoxGender->setTitle(QCoreApplication::translate("patientregister", "Gender", nullptr));
        RadioButtonMale->setText(QCoreApplication::translate("patientregister", "Male", nullptr));
        RadioButtonFemale->setText(QCoreApplication::translate("patientregister", "Female", nullptr));
        LabelPassRe_2->setText(QCoreApplication::translate("patientregister", "Age:", nullptr));
        LabelPassRe_3->setText(QCoreApplication::translate("patientregister", "Weight:", nullptr));
        label_9->setText(QCoreApplication::translate("patientregister", "Note: Weight in Kg", nullptr));
        comboBoxDiet->setItemText(0, QCoreApplication::translate("patientregister", "Select Field", nullptr));
        comboBoxDiet->setItemText(1, QCoreApplication::translate("patientregister", "Vegetarian Diet", nullptr));
        comboBoxDiet->setItemText(2, QCoreApplication::translate("patientregister", "pescatarian diet", nullptr));
        comboBoxDiet->setItemText(3, QCoreApplication::translate("patientregister", "Carnivore Diet", nullptr));
        comboBoxDiet->setItemText(4, QCoreApplication::translate("patientregister", "Balanced Diet", nullptr));

        LabelPassRe_4->setText(QCoreApplication::translate("patientregister", "Diet:", nullptr));
        LabelPassRe_5->setText(QCoreApplication::translate("patientregister", "Blood Type", nullptr));
        comboBoxBlood->setItemText(0, QCoreApplication::translate("patientregister", "Select Field", nullptr));
        comboBoxBlood->setItemText(1, QCoreApplication::translate("patientregister", "O-", nullptr));
        comboBoxBlood->setItemText(2, QCoreApplication::translate("patientregister", "O+", nullptr));
        comboBoxBlood->setItemText(3, QCoreApplication::translate("patientregister", "A-", nullptr));
        comboBoxBlood->setItemText(4, QCoreApplication::translate("patientregister", "A+", nullptr));
        comboBoxBlood->setItemText(5, QCoreApplication::translate("patientregister", "B-", nullptr));
        comboBoxBlood->setItemText(6, QCoreApplication::translate("patientregister", "B+", nullptr));
        comboBoxBlood->setItemText(7, QCoreApplication::translate("patientregister", "AB-", nullptr));
        comboBoxBlood->setItemText(8, QCoreApplication::translate("patientregister", "AB+", nullptr));

        LabelPassRe_6->setText(QCoreApplication::translate("patientregister", "Height:", nullptr));
        label_10->setText(QCoreApplication::translate("patientregister", "Note: Height in cm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientregister: public Ui_patientregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTREGISTER_H
