/********************************************************************************
** Form generated from reading UI file 'patientmainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTMAINPAGE_H
#define UI_PATIENTMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PatientMainPage
{
public:

    void setupUi(QDialog *PatientMainPage)
    {
        if (PatientMainPage->objectName().isEmpty())
            PatientMainPage->setObjectName("PatientMainPage");
        PatientMainPage->resize(400, 300);

        retranslateUi(PatientMainPage);

        QMetaObject::connectSlotsByName(PatientMainPage);
    } // setupUi

    void retranslateUi(QDialog *PatientMainPage)
    {
        PatientMainPage->setWindowTitle(QCoreApplication::translate("PatientMainPage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientMainPage: public Ui_PatientMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTMAINPAGE_H
