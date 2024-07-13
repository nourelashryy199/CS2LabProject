/********************************************************************************
** Form generated from reading UI file 'doccreatemedrecord2.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCCREATEMEDRECORD2_H
#define UI_DOCCREATEMEDRECORD2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_doccreatemedrecord2
{
public:
    QLabel *SecIIIMedReclabel;
    QLabel *SecIVMedReclabel;
    QLabel *SecVMedReclabel;
    QLabel *DiagnosisMedReclabel;
    QLabel *PrognosisMedReclabel;
    QLabel *MedicationMedReclabel;
    QLabel *FreqMedReclabel;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *DiagnosisMedRecplainTextEdit;
    QPlainTextEdit *PrognosisMedRecplainTextEdit;
    QPlainTextEdit *TreatPlanMedRecplainTextEdit;
    QLineEdit *MedicationMedReclineEdit;
    QLineEdit *FreqMedReclineEdit;

    void setupUi(QDialog *doccreatemedrecord2)
    {
        if (doccreatemedrecord2->objectName().isEmpty())
            doccreatemedrecord2->setObjectName("doccreatemedrecord2");
        doccreatemedrecord2->resize(1203, 591);
        SecIIIMedReclabel = new QLabel(doccreatemedrecord2);
        SecIIIMedReclabel->setObjectName("SecIIIMedReclabel");
        SecIIIMedReclabel->setGeometry(QRect(20, 10, 391, 61));
        SecIVMedReclabel = new QLabel(doccreatemedrecord2);
        SecIVMedReclabel->setObjectName("SecIVMedReclabel");
        SecIVMedReclabel->setGeometry(QRect(20, 240, 351, 41));
        SecVMedReclabel = new QLabel(doccreatemedrecord2);
        SecVMedReclabel->setObjectName("SecVMedReclabel");
        SecVMedReclabel->setGeometry(QRect(20, 360, 281, 61));
        DiagnosisMedReclabel = new QLabel(doccreatemedrecord2);
        DiagnosisMedReclabel->setObjectName("DiagnosisMedReclabel");
        DiagnosisMedReclabel->setGeometry(QRect(20, 90, 81, 16));
        PrognosisMedReclabel = new QLabel(doccreatemedrecord2);
        PrognosisMedReclabel->setObjectName("PrognosisMedReclabel");
        PrognosisMedReclabel->setGeometry(QRect(20, 170, 71, 16));
        MedicationMedReclabel = new QLabel(doccreatemedrecord2);
        MedicationMedReclabel->setObjectName("MedicationMedReclabel");
        MedicationMedReclabel->setGeometry(QRect(20, 300, 201, 16));
        FreqMedReclabel = new QLabel(doccreatemedrecord2);
        FreqMedReclabel->setObjectName("FreqMedReclabel");
        FreqMedReclabel->setGeometry(QRect(20, 330, 131, 16));
        pushButton = new QPushButton(doccreatemedrecord2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 550, 100, 32));
        pushButton_2 = new QPushButton(doccreatemedrecord2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1080, 550, 100, 32));
        DiagnosisMedRecplainTextEdit = new QPlainTextEdit(doccreatemedrecord2);
        DiagnosisMedRecplainTextEdit->setObjectName("DiagnosisMedRecplainTextEdit");
        DiagnosisMedRecplainTextEdit->setGeometry(QRect(100, 80, 891, 61));
        PrognosisMedRecplainTextEdit = new QPlainTextEdit(doccreatemedrecord2);
        PrognosisMedRecplainTextEdit->setObjectName("PrognosisMedRecplainTextEdit");
        PrognosisMedRecplainTextEdit->setGeometry(QRect(100, 160, 891, 61));
        TreatPlanMedRecplainTextEdit = new QPlainTextEdit(doccreatemedrecord2);
        TreatPlanMedRecplainTextEdit->setObjectName("TreatPlanMedRecplainTextEdit");
        TreatPlanMedRecplainTextEdit->setGeometry(QRect(70, 420, 971, 111));
        MedicationMedReclineEdit = new QLineEdit(doccreatemedrecord2);
        MedicationMedReclineEdit->setObjectName("MedicationMedReclineEdit");
        MedicationMedReclineEdit->setGeometry(QRect(200, 300, 831, 21));
        FreqMedReclineEdit = new QLineEdit(doccreatemedrecord2);
        FreqMedReclineEdit->setObjectName("FreqMedReclineEdit");
        FreqMedReclineEdit->setGeometry(QRect(200, 330, 831, 21));

        retranslateUi(doccreatemedrecord2);

        QMetaObject::connectSlotsByName(doccreatemedrecord2);
    } // setupUi

    void retranslateUi(QDialog *doccreatemedrecord2)
    {
        doccreatemedrecord2->setWindowTitle(QCoreApplication::translate("doccreatemedrecord2", "Dialog", nullptr));
        SecIIIMedReclabel->setText(QCoreApplication::translate("doccreatemedrecord2", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">Section III: Current Medication Condition</span></p></body></html>", nullptr));
        SecIVMedReclabel->setText(QCoreApplication::translate("doccreatemedrecord2", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">Section IV: Current Prescription(s)</span></p></body></html>", nullptr));
        SecVMedReclabel->setText(QCoreApplication::translate("doccreatemedrecord2", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">Section V: Treatment Plan</span></p></body></html>", nullptr));
        DiagnosisMedReclabel->setText(QCoreApplication::translate("doccreatemedrecord2", "Diagnosis:", nullptr));
        PrognosisMedReclabel->setText(QCoreApplication::translate("doccreatemedrecord2", "Prognosis:", nullptr));
        MedicationMedReclabel->setText(QCoreApplication::translate("doccreatemedrecord2", "Medication and Dosage: ", nullptr));
        FreqMedReclabel->setText(QCoreApplication::translate("doccreatemedrecord2", "Frequency:", nullptr));
        pushButton->setText(QCoreApplication::translate("doccreatemedrecord2", "Previous", nullptr));
        pushButton_2->setText(QCoreApplication::translate("doccreatemedrecord2", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doccreatemedrecord2: public Ui_doccreatemedrecord2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCCREATEMEDRECORD2_H
