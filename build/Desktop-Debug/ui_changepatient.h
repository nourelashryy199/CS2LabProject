/********************************************************************************
** Form generated from reading UI file 'changepatient.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPATIENT_H
#define UI_CHANGEPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changepatient
{
public:
    QLineEdit *searchEdit;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_8;
    QPushButton *pushButtonSearch;
    QLabel *errorExisting_2;
    QLabel *label_9;
    QLineEdit *passwordEdit;
    QPushButton *pushButtonApply;
    QLineEdit *idEdit;
    QLabel *label_4;
    QLineEdit *nameEdit;
    QLabel *errorSuccessfuly;
    QLabel *label_7;
    QPushButton *pushButtonClose;
    QLabel *label_11;
    QLabel *label_5;
    QLineEdit *ageEdit;
    QLineEdit *bloodtypeEdit;
    QLabel *label_12;
    QLineEdit *genderEdit;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *weightEdit;
    QLineEdit *dietEdit;
    QLabel *label_15;
    QLineEdit *heightEdit;
    QLabel *label_16;
    QLineEdit *phoneEdit;
    QLabel *label_17;
    QLineEdit *dobEdit;
    QLabel *label_18;
    QLineEdit *freqEdit;
    QLabel *label_19;
    QLineEdit *tpEdit;
    QLabel *label_20;
    QLineEdit *emergencyEdit;
    QLabel *label_21;
    QLineEdit *medsEdit;
    QLineEdit *surgeriesEdit;
    QLineEdit *conditionEdit;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *fhEdit;
    QLineEdit *prognosisEdit;
    QLineEdit *allergiesEdit;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *diagnosisEdit;
    QLineEdit *mdEdit;
    QLabel *label_28;

    void setupUi(QDialog *changepatient)
    {
        if (changepatient->objectName().isEmpty())
            changepatient->setObjectName("changepatient");
        changepatient->resize(871, 780);
        searchEdit = new QLineEdit(changepatient);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setGeometry(QRect(340, 40, 201, 31));
        label_6 = new QLabel(changepatient);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(242, -10, 381, 61));
        label_6->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(changepatient);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(180, 70, 511, 20));
        label_8 = new QLabel(changepatient);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(210, 30, 141, 51));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        pushButtonSearch = new QPushButton(changepatient);
        pushButtonSearch->setObjectName("pushButtonSearch");
        pushButtonSearch->setGeometry(QRect(550, 40, 131, 31));
        pushButtonSearch->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        errorExisting_2 = new QLabel(changepatient);
        errorExisting_2->setObjectName("errorExisting_2");
        errorExisting_2->setGeometry(QRect(370, 140, 121, 51));
        errorExisting_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_9 = new QLabel(changepatient);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 140, 141, 41));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        passwordEdit = new QLineEdit(changepatient);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(160, 200, 201, 31));
        pushButtonApply = new QPushButton(changepatient);
        pushButtonApply->setObjectName("pushButtonApply");
        pushButtonApply->setGeometry(QRect(500, 690, 131, 71));
        pushButtonApply->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        idEdit = new QLineEdit(changepatient);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(160, 150, 201, 31));
        label_4 = new QLabel(changepatient);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 90, 61, 41));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        nameEdit = new QLineEdit(changepatient);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(160, 100, 201, 31));
        errorSuccessfuly = new QLabel(changepatient);
        errorSuccessfuly->setObjectName("errorSuccessfuly");
        errorSuccessfuly->setGeometry(QRect(310, 640, 261, 51));
        errorSuccessfuly->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorSuccessfuly->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(changepatient);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 190, 141, 41));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        pushButtonClose = new QPushButton(changepatient);
        pushButtonClose->setObjectName("pushButtonClose");
        pushButtonClose->setGeometry(QRect(250, 690, 131, 71));
        pushButtonClose->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        label_11 = new QLabel(changepatient);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 290, 141, 41));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_5 = new QLabel(changepatient);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 240, 61, 41));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        ageEdit = new QLineEdit(changepatient);
        ageEdit->setObjectName("ageEdit");
        ageEdit->setGeometry(QRect(160, 250, 201, 31));
        bloodtypeEdit = new QLineEdit(changepatient);
        bloodtypeEdit->setObjectName("bloodtypeEdit");
        bloodtypeEdit->setGeometry(QRect(160, 350, 201, 31));
        label_12 = new QLabel(changepatient);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 340, 141, 41));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        genderEdit = new QLineEdit(changepatient);
        genderEdit->setObjectName("genderEdit");
        genderEdit->setGeometry(QRect(160, 300, 201, 31));
        label_13 = new QLabel(changepatient);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 440, 141, 41));
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_14 = new QLabel(changepatient);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 390, 61, 41));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        weightEdit = new QLineEdit(changepatient);
        weightEdit->setObjectName("weightEdit");
        weightEdit->setGeometry(QRect(160, 400, 201, 31));
        dietEdit = new QLineEdit(changepatient);
        dietEdit->setObjectName("dietEdit");
        dietEdit->setGeometry(QRect(160, 500, 201, 31));
        label_15 = new QLabel(changepatient);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(30, 490, 141, 41));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        heightEdit = new QLineEdit(changepatient);
        heightEdit->setObjectName("heightEdit");
        heightEdit->setGeometry(QRect(160, 450, 201, 31));
        label_16 = new QLabel(changepatient);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 540, 141, 41));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        phoneEdit = new QLineEdit(changepatient);
        phoneEdit->setObjectName("phoneEdit");
        phoneEdit->setGeometry(QRect(160, 600, 201, 31));
        label_17 = new QLabel(changepatient);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 590, 141, 41));
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        dobEdit = new QLineEdit(changepatient);
        dobEdit->setObjectName("dobEdit");
        dobEdit->setGeometry(QRect(160, 550, 201, 31));
        label_18 = new QLabel(changepatient);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(490, 390, 81, 41));
        label_18->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        freqEdit = new QLineEdit(changepatient);
        freqEdit->setObjectName("freqEdit");
        freqEdit->setGeometry(QRect(630, 550, 201, 31));
        label_19 = new QLabel(changepatient);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(490, 140, 141, 41));
        label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        tpEdit = new QLineEdit(changepatient);
        tpEdit->setObjectName("tpEdit");
        tpEdit->setGeometry(QRect(630, 600, 201, 31));
        label_20 = new QLabel(changepatient);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(480, 90, 141, 41));
        label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        emergencyEdit = new QLineEdit(changepatient);
        emergencyEdit->setObjectName("emergencyEdit");
        emergencyEdit->setGeometry(QRect(630, 100, 201, 31));
        label_21 = new QLabel(changepatient);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(490, 440, 141, 41));
        label_21->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        medsEdit = new QLineEdit(changepatient);
        medsEdit->setObjectName("medsEdit");
        medsEdit->setGeometry(QRect(630, 500, 201, 31));
        surgeriesEdit = new QLineEdit(changepatient);
        surgeriesEdit->setObjectName("surgeriesEdit");
        surgeriesEdit->setGeometry(QRect(630, 250, 201, 31));
        conditionEdit = new QLineEdit(changepatient);
        conditionEdit->setObjectName("conditionEdit");
        conditionEdit->setGeometry(QRect(630, 200, 201, 31));
        label_22 = new QLabel(changepatient);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(490, 490, 141, 41));
        label_22->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_23 = new QLabel(changepatient);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(490, 340, 141, 41));
        label_23->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_24 = new QLabel(changepatient);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(490, 190, 141, 41));
        label_24->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_25 = new QLabel(changepatient);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(490, 540, 141, 41));
        label_25->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        fhEdit = new QLineEdit(changepatient);
        fhEdit->setObjectName("fhEdit");
        fhEdit->setGeometry(QRect(630, 350, 201, 31));
        prognosisEdit = new QLineEdit(changepatient);
        prognosisEdit->setObjectName("prognosisEdit");
        prognosisEdit->setGeometry(QRect(630, 450, 201, 31));
        allergiesEdit = new QLineEdit(changepatient);
        allergiesEdit->setObjectName("allergiesEdit");
        allergiesEdit->setGeometry(QRect(630, 300, 201, 31));
        label_26 = new QLabel(changepatient);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(490, 290, 141, 41));
        label_26->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_27 = new QLabel(changepatient);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(490, 590, 141, 41));
        label_27->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        diagnosisEdit = new QLineEdit(changepatient);
        diagnosisEdit->setObjectName("diagnosisEdit");
        diagnosisEdit->setGeometry(QRect(630, 400, 201, 31));
        mdEdit = new QLineEdit(changepatient);
        mdEdit->setObjectName("mdEdit");
        mdEdit->setGeometry(QRect(630, 150, 201, 31));
        label_28 = new QLabel(changepatient);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(490, 240, 81, 41));
        label_28->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));

        retranslateUi(changepatient);

        QMetaObject::connectSlotsByName(changepatient);
    } // setupUi

    void retranslateUi(QDialog *changepatient)
    {
        changepatient->setWindowTitle(QCoreApplication::translate("changepatient", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("changepatient", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Patient Profile</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("changepatient", "------------------------------------------------------------------------------------", nullptr));
        label_8->setText(QCoreApplication::translate("changepatient", "Enter the ID:", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("changepatient", "Search", nullptr));
        errorExisting_2->setText(QCoreApplication::translate("changepatient", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("changepatient", "ID:", nullptr));
        pushButtonApply->setText(QCoreApplication::translate("changepatient", "Apply", nullptr));
        label_4->setText(QCoreApplication::translate("changepatient", "Name:", nullptr));
        errorSuccessfuly->setText(QCoreApplication::translate("changepatient", "<html><head/><body><p><span style=\" font-size:9pt; color:#00ff00;\">*Changes Saved Successfuly</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("changepatient", "Password:", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("changepatient", "Close", nullptr));
        label_11->setText(QCoreApplication::translate("changepatient", "Gender:", nullptr));
        label_5->setText(QCoreApplication::translate("changepatient", "Age:", nullptr));
        label_12->setText(QCoreApplication::translate("changepatient", "Blood Type:", nullptr));
        label_13->setText(QCoreApplication::translate("changepatient", "Height:", nullptr));
        label_14->setText(QCoreApplication::translate("changepatient", "Weight:", nullptr));
        label_15->setText(QCoreApplication::translate("changepatient", "Diet:", nullptr));
        label_16->setText(QCoreApplication::translate("changepatient", "Date of Birth:", nullptr));
        label_17->setText(QCoreApplication::translate("changepatient", "Phone:", nullptr));
        label_18->setText(QCoreApplication::translate("changepatient", "Diagnosis:", nullptr));
        label_19->setText(QCoreApplication::translate("changepatient", "Medical Record:", nullptr));
        label_20->setText(QCoreApplication::translate("changepatient", "<html><head/><body><p><span style=\" font-size:9pt;\">Emergency Contact:</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("changepatient", "Prognosis:", nullptr));
        label_22->setText(QCoreApplication::translate("changepatient", "Medication:", nullptr));
        label_23->setText(QCoreApplication::translate("changepatient", "Family History:", nullptr));
        label_24->setText(QCoreApplication::translate("changepatient", "Condition:", nullptr));
        label_25->setText(QCoreApplication::translate("changepatient", "Frequency:", nullptr));
        label_26->setText(QCoreApplication::translate("changepatient", "Allergies:", nullptr));
        label_27->setText(QCoreApplication::translate("changepatient", "Treatment Plan:", nullptr));
        label_28->setText(QCoreApplication::translate("changepatient", "Surgeries:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changepatient: public Ui_changepatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPATIENT_H
