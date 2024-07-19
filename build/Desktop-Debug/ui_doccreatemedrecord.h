/********************************************************************************
** Form generated from reading UI file 'doccreatemedrecord.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCCREATEMEDRECORD_H
#define UI_DOCCREATEMEDRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DocCreateMedRecord
{
public:
    QLabel *Sec1MedReclabel;
    QLabel *NameMedReclabel;
    QLabel *DOFMedReclabel;
    QLabel *GenderMedReclabel;
    QLabel *PhoneNoMedReclabel;
    QLabel *EmergencyNoMedReclabel;
    QLabel *MedRecMedReclabel;
    QLabel *Sec2MedReclabel;
    QLabel *ConditionMedReclabel;
    QLabel *SurgMedReclabel;
    QLabel *AllergiesMedReclabel;
    QLabel *FamHistMedReclabel;
    QPushButton *NextMedRecpushButton;
    QLineEdit *NameMedReclineEdit;
    QLineEdit *PhoneNoMedReclineEdit;
    QLineEdit *EmergencyNoMedReclineEdit;
    QLineEdit *MedRecMedReclineEdit;
    QDateEdit *DOFMedRecdateEdit;
    QComboBox *comboBox;
    QPlainTextEdit *ConditionMedRecplainTextEdit;
    QPlainTextEdit *SurgMedRecplainTextEdit;
    QPlainTextEdit *AllergiesMedRecplainTextEdit;
    QPlainTextEdit *FamHistMedRecplainTextEdit;

    void setupUi(QDialog *DocCreateMedRecord)
    {
        if (DocCreateMedRecord->objectName().isEmpty())
            DocCreateMedRecord->setObjectName("DocCreateMedRecord");
        DocCreateMedRecord->resize(1169, 590);
        Sec1MedReclabel = new QLabel(DocCreateMedRecord);
        Sec1MedReclabel->setObjectName("Sec1MedReclabel");
        Sec1MedReclabel->setGeometry(QRect(10, 10, 271, 51));
        NameMedReclabel = new QLabel(DocCreateMedRecord);
        NameMedReclabel->setObjectName("NameMedReclabel");
        NameMedReclabel->setGeometry(QRect(10, 60, 67, 16));
        DOFMedReclabel = new QLabel(DocCreateMedRecord);
        DOFMedReclabel->setObjectName("DOFMedReclabel");
        DOFMedReclabel->setGeometry(QRect(10, 90, 83, 16));
        GenderMedReclabel = new QLabel(DocCreateMedRecord);
        GenderMedReclabel->setObjectName("GenderMedReclabel");
        GenderMedReclabel->setGeometry(QRect(10, 130, 48, 16));
        PhoneNoMedReclabel = new QLabel(DocCreateMedRecord);
        PhoneNoMedReclabel->setObjectName("PhoneNoMedReclabel");
        PhoneNoMedReclabel->setGeometry(QRect(10, 160, 93, 16));
        EmergencyNoMedReclabel = new QLabel(DocCreateMedRecord);
        EmergencyNoMedReclabel->setObjectName("EmergencyNoMedReclabel");
        EmergencyNoMedReclabel->setGeometry(QRect(10, 190, 173, 16));
        MedRecMedReclabel = new QLabel(DocCreateMedRecord);
        MedRecMedReclabel->setObjectName("MedRecMedReclabel");
        MedRecMedReclabel->setGeometry(QRect(10, 220, 152, 16));
        Sec2MedReclabel = new QLabel(DocCreateMedRecord);
        Sec2MedReclabel->setObjectName("Sec2MedReclabel");
        Sec2MedReclabel->setGeometry(QRect(10, 250, 291, 51));
        ConditionMedReclabel = new QLabel(DocCreateMedRecord);
        ConditionMedReclabel->setObjectName("ConditionMedReclabel");
        ConditionMedReclabel->setGeometry(QRect(12, 320, 101, 16));
        SurgMedReclabel = new QLabel(DocCreateMedRecord);
        SurgMedReclabel->setObjectName("SurgMedReclabel");
        SurgMedReclabel->setGeometry(QRect(10, 400, 127, 21));
        AllergiesMedReclabel = new QLabel(DocCreateMedRecord);
        AllergiesMedReclabel->setObjectName("AllergiesMedReclabel");
        AllergiesMedReclabel->setGeometry(QRect(10, 470, 56, 16));
        FamHistMedReclabel = new QLabel(DocCreateMedRecord);
        FamHistMedReclabel->setObjectName("FamHistMedReclabel");
        FamHistMedReclabel->setGeometry(QRect(10, 540, 92, 16));
        NextMedRecpushButton = new QPushButton(DocCreateMedRecord);
        NextMedRecpushButton->setObjectName("NextMedRecpushButton");
        NextMedRecpushButton->setGeometry(QRect(1050, 540, 100, 32));
        NameMedReclineEdit = new QLineEdit(DocCreateMedRecord);
        NameMedReclineEdit->setObjectName("NameMedReclineEdit");
        NameMedReclineEdit->setGeometry(QRect(120, 60, 881, 21));
        PhoneNoMedReclineEdit = new QLineEdit(DocCreateMedRecord);
        PhoneNoMedReclineEdit->setObjectName("PhoneNoMedReclineEdit");
        PhoneNoMedReclineEdit->setGeometry(QRect(130, 160, 871, 21));
        EmergencyNoMedReclineEdit = new QLineEdit(DocCreateMedRecord);
        EmergencyNoMedReclineEdit->setObjectName("EmergencyNoMedReclineEdit");
        EmergencyNoMedReclineEdit->setGeometry(QRect(210, 190, 791, 21));
        MedRecMedReclineEdit = new QLineEdit(DocCreateMedRecord);
        MedRecMedReclineEdit->setObjectName("MedRecMedReclineEdit");
        MedRecMedReclineEdit->setGeometry(QRect(190, 220, 811, 21));
        DOFMedRecdateEdit = new QDateEdit(DocCreateMedRecord);
        DOFMedRecdateEdit->setObjectName("DOFMedRecdateEdit");
        DOFMedRecdateEdit->setGeometry(QRect(110, 90, 110, 22));
        comboBox = new QComboBox(DocCreateMedRecord);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(90, 120, 103, 32));
        ConditionMedRecplainTextEdit = new QPlainTextEdit(DocCreateMedRecord);
        ConditionMedRecplainTextEdit->setObjectName("ConditionMedRecplainTextEdit");
        ConditionMedRecplainTextEdit->setGeometry(QRect(140, 310, 871, 51));
        SurgMedRecplainTextEdit = new QPlainTextEdit(DocCreateMedRecord);
        SurgMedRecplainTextEdit->setObjectName("SurgMedRecplainTextEdit");
        SurgMedRecplainTextEdit->setGeometry(QRect(140, 390, 871, 51));
        AllergiesMedRecplainTextEdit = new QPlainTextEdit(DocCreateMedRecord);
        AllergiesMedRecplainTextEdit->setObjectName("AllergiesMedRecplainTextEdit");
        AllergiesMedRecplainTextEdit->setGeometry(QRect(140, 460, 871, 51));
        FamHistMedRecplainTextEdit = new QPlainTextEdit(DocCreateMedRecord);
        FamHistMedRecplainTextEdit->setObjectName("FamHistMedRecplainTextEdit");
        FamHistMedRecplainTextEdit->setGeometry(QRect(140, 530, 871, 51));

        retranslateUi(DocCreateMedRecord);

        QMetaObject::connectSlotsByName(DocCreateMedRecord);
    } // setupUi

    void retranslateUi(QDialog *DocCreateMedRecord)
    {
        DocCreateMedRecord->setWindowTitle(QCoreApplication::translate("DocCreateMedRecord", "Dialog", nullptr));
        Sec1MedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">Section I: Patient Information</span></p></body></html>", nullptr));
        NameMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Full Name: ", nullptr));
        DOFMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Date of Birth: ", nullptr));
        GenderMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Gender:", nullptr));
        PhoneNoMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Phone Number:", nullptr));
        EmergencyNoMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Emergency Contact Number:", nullptr));
        MedRecMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Medical Record Number: ", nullptr));
        Sec2MedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">Section II: Medical History</span></p></body></html>", nullptr));
        ConditionMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Past Conditions: ", nullptr));
        SurgMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Surgical Procedures: ", nullptr));
        AllergiesMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Allergies:", nullptr));
        FamHistMedReclabel->setText(QCoreApplication::translate("DocCreateMedRecord", "Family History: ", nullptr));
        NextMedRecpushButton->setText(QCoreApplication::translate("DocCreateMedRecord", "Next", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DocCreateMedRecord", "--", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("DocCreateMedRecord", "Male", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("DocCreateMedRecord", "Female", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DocCreateMedRecord: public Ui_DocCreateMedRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCCREATEMEDRECORD_H
