/********************************************************************************
** Form generated from reading UI file 'appointmentschedulingdoctor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTMENTSCHEDULINGDOCTOR_H
#define UI_APPOINTMENTSCHEDULINGDOCTOR_H

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

class Ui_AppointmentSchedulingDOCTOR
{
public:
    QCalendarWidget *DocSchedAppcalendarWidget;
    QGroupBox *SchedApptDOCgroupBox;
    QLabel *FirstNameSchedApptDOClabel;
    QLineEdit *FirstNameSchedApptDOClineEdit;
    QLabel *TimeSchedApptDoclabel;
    QTimeEdit *SchedApptDOCtimeEdit;
    QLabel *LastNameSchedApptDOClabel;
    QLineEdit *LastNameSchedApptDOClineEdit;
    QPushButton *ConfSchedApptDOCpushButton;
    QLabel *SchedApptDOClabel;

    void setupUi(QDialog *AppointmentSchedulingDOCTOR)
    {
        if (AppointmentSchedulingDOCTOR->objectName().isEmpty())
            AppointmentSchedulingDOCTOR->setObjectName("AppointmentSchedulingDOCTOR");
        AppointmentSchedulingDOCTOR->resize(1186, 603);
        DocSchedAppcalendarWidget = new QCalendarWidget(AppointmentSchedulingDOCTOR);
        DocSchedAppcalendarWidget->setObjectName("DocSchedAppcalendarWidget");
        DocSchedAppcalendarWidget->setGeometry(QRect(60, 150, 541, 351));
        SchedApptDOCgroupBox = new QGroupBox(AppointmentSchedulingDOCTOR);
        SchedApptDOCgroupBox->setObjectName("SchedApptDOCgroupBox");
        SchedApptDOCgroupBox->setGeometry(QRect(620, 190, 361, 291));
        FirstNameSchedApptDOClabel = new QLabel(SchedApptDOCgroupBox);
        FirstNameSchedApptDOClabel->setObjectName("FirstNameSchedApptDOClabel");
        FirstNameSchedApptDOClabel->setGeometry(QRect(10, 40, 181, 16));
        FirstNameSchedApptDOClineEdit = new QLineEdit(SchedApptDOCgroupBox);
        FirstNameSchedApptDOClineEdit->setObjectName("FirstNameSchedApptDOClineEdit");
        FirstNameSchedApptDOClineEdit->setGeometry(QRect(150, 60, 201, 21));
        TimeSchedApptDoclabel = new QLabel(SchedApptDOCgroupBox);
        TimeSchedApptDoclabel->setObjectName("TimeSchedApptDoclabel");
        TimeSchedApptDoclabel->setGeometry(QRect(10, 190, 101, 16));
        SchedApptDOCtimeEdit = new QTimeEdit(SchedApptDOCgroupBox);
        SchedApptDOCtimeEdit->setObjectName("SchedApptDOCtimeEdit");
        SchedApptDOCtimeEdit->setGeometry(QRect(230, 190, 118, 22));
        LastNameSchedApptDOClabel = new QLabel(SchedApptDOCgroupBox);
        LastNameSchedApptDOClabel->setObjectName("LastNameSchedApptDOClabel");
        LastNameSchedApptDOClabel->setGeometry(QRect(10, 110, 181, 16));
        LastNameSchedApptDOClineEdit = new QLineEdit(SchedApptDOCgroupBox);
        LastNameSchedApptDOClineEdit->setObjectName("LastNameSchedApptDOClineEdit");
        LastNameSchedApptDOClineEdit->setGeometry(QRect(150, 140, 201, 21));
        ConfSchedApptDOCpushButton = new QPushButton(SchedApptDOCgroupBox);
        ConfSchedApptDOCpushButton->setObjectName("ConfSchedApptDOCpushButton");
        ConfSchedApptDOCpushButton->setGeometry(QRect(240, 250, 101, 32));
        SchedApptDOClabel = new QLabel(AppointmentSchedulingDOCTOR);
        SchedApptDOClabel->setObjectName("SchedApptDOClabel");
        SchedApptDOClabel->setGeometry(QRect(190, 50, 331, 16));

        retranslateUi(AppointmentSchedulingDOCTOR);

        QMetaObject::connectSlotsByName(AppointmentSchedulingDOCTOR);
    } // setupUi

    void retranslateUi(QDialog *AppointmentSchedulingDOCTOR)
    {
        AppointmentSchedulingDOCTOR->setWindowTitle(QCoreApplication::translate("AppointmentSchedulingDOCTOR", "Dialog", nullptr));
        SchedApptDOCgroupBox->setTitle(QCoreApplication::translate("AppointmentSchedulingDOCTOR", "GroupBox", nullptr));
        FirstNameSchedApptDOClabel->setText(QCoreApplication::translate("AppointmentSchedulingDOCTOR", "Enter First Name of Patient: ", nullptr));
        TimeSchedApptDoclabel->setText(QCoreApplication::translate("AppointmentSchedulingDOCTOR", "Enter Time: ", nullptr));
        LastNameSchedApptDOClabel->setText(QCoreApplication::translate("AppointmentSchedulingDOCTOR", "Enter Last Name of Patient: ", nullptr));
        ConfSchedApptDOCpushButton->setText(QCoreApplication::translate("AppointmentSchedulingDOCTOR", "Confirm", nullptr));
        SchedApptDOClabel->setText(QCoreApplication::translate("AppointmentSchedulingDOCTOR", "Your Appointment Scheduling Window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AppointmentSchedulingDOCTOR: public Ui_AppointmentSchedulingDOCTOR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTMENTSCHEDULINGDOCTOR_H
