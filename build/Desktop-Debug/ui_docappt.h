/********************************************************************************
** Form generated from reading UI file 'docappt.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCAPPT_H
#define UI_DOCAPPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_DocAppt
{
public:
    QLabel *ApptWelcomelabel;
    QCalendarWidget *ApptSelectionDOCcalendarWidget;
    QLabel *ApptSelectionlabel;
    QGroupBox *ApptDOCgroupBox;
    QLabel *ApptDOCpatientlabel;
    QLineEdit *ApptDOCpatientlineEdit;
    QTimeEdit *ApptDOCpatienttimeEdit;
    QLabel *ApptDOCtimelabel;
    QPushButton *ApptDOCconfpushButton;

    void setupUi(QDialog *DocAppt)
    {
        if (DocAppt->objectName().isEmpty())
            DocAppt->setObjectName("DocAppt");
        DocAppt->resize(1194, 597);
        ApptWelcomelabel = new QLabel(DocAppt);
        ApptWelcomelabel->setObjectName("ApptWelcomelabel");
        ApptWelcomelabel->setGeometry(QRect(110, 20, 311, 41));
        ApptSelectionDOCcalendarWidget = new QCalendarWidget(DocAppt);
        ApptSelectionDOCcalendarWidget->setObjectName("ApptSelectionDOCcalendarWidget");
        ApptSelectionDOCcalendarWidget->setGeometry(QRect(100, 170, 491, 381));
        ApptSelectionlabel = new QLabel(DocAppt);
        ApptSelectionlabel->setObjectName("ApptSelectionlabel");
        ApptSelectionlabel->setGeometry(QRect(110, 100, 301, 16));
        ApptDOCgroupBox = new QGroupBox(DocAppt);
        ApptDOCgroupBox->setObjectName("ApptDOCgroupBox");
        ApptDOCgroupBox->setGeometry(QRect(670, 190, 361, 281));
        ApptDOCpatientlabel = new QLabel(ApptDOCgroupBox);
        ApptDOCpatientlabel->setObjectName("ApptDOCpatientlabel");
        ApptDOCpatientlabel->setGeometry(QRect(10, 50, 121, 16));
        ApptDOCpatientlineEdit = new QLineEdit(ApptDOCgroupBox);
        ApptDOCpatientlineEdit->setObjectName("ApptDOCpatientlineEdit");
        ApptDOCpatientlineEdit->setGeometry(QRect(150, 50, 201, 21));
        ApptDOCpatienttimeEdit = new QTimeEdit(ApptDOCgroupBox);
        ApptDOCpatienttimeEdit->setObjectName("ApptDOCpatienttimeEdit");
        ApptDOCpatienttimeEdit->setGeometry(QRect(220, 140, 118, 22));
        ApptDOCtimelabel = new QLabel(ApptDOCgroupBox);
        ApptDOCtimelabel->setObjectName("ApptDOCtimelabel");
        ApptDOCtimelabel->setGeometry(QRect(10, 140, 171, 16));
        ApptDOCconfpushButton = new QPushButton(ApptDOCgroupBox);
        ApptDOCconfpushButton->setObjectName("ApptDOCconfpushButton");
        ApptDOCconfpushButton->setGeometry(QRect(230, 230, 100, 32));

        retranslateUi(DocAppt);

        QMetaObject::connectSlotsByName(DocAppt);
    } // setupUi

    void retranslateUi(QDialog *DocAppt)
    {
        DocAppt->setWindowTitle(QCoreApplication::translate("DocAppt", "Dialog", nullptr));
        ApptWelcomelabel->setText(QCoreApplication::translate("DocAppt", "Your Appointment Scheduling Window", nullptr));
        ApptSelectionlabel->setText(QCoreApplication::translate("DocAppt", "Select a time slot for your next clinic appointment: ", nullptr));
        ApptDOCgroupBox->setTitle(QCoreApplication::translate("DocAppt", "Confirm your Appointment", nullptr));
        ApptDOCpatientlabel->setText(QCoreApplication::translate("DocAppt", "Patient's Full Name: ", nullptr));
        ApptDOCtimelabel->setText(QCoreApplication::translate("DocAppt", "Time of day: ", nullptr));
        ApptDOCconfpushButton->setText(QCoreApplication::translate("DocAppt", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DocAppt: public Ui_DocAppt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCAPPT_H
