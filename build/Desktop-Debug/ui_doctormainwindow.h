/********************************************************************************
** Form generated from reading UI file 'doctormainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORMAINWINDOW_H
#define UI_DOCTORMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DoctorMainWindow
{
public:
    QLabel *DocWelcomelabel;
    QToolButton *MenuDoctoolButton;
    QListWidget *ClinicAgendalistWidget;
    QLabel *ClinicAgendalabel;

    void setupUi(QDialog *DoctorMainWindow)
    {
        if (DoctorMainWindow->objectName().isEmpty())
            DoctorMainWindow->setObjectName("DoctorMainWindow");
        DoctorMainWindow->resize(1206, 720);
        DocWelcomelabel = new QLabel(DoctorMainWindow);
        DocWelcomelabel->setObjectName("DocWelcomelabel");
        DocWelcomelabel->setGeometry(QRect(60, 20, 301, 51));
        MenuDoctoolButton = new QToolButton(DoctorMainWindow);
        MenuDoctoolButton->setObjectName("MenuDoctoolButton");
        MenuDoctoolButton->setGeometry(QRect(720, 30, 91, 31));
        ClinicAgendalistWidget = new QListWidget(DoctorMainWindow);
        ClinicAgendalistWidget->setObjectName("ClinicAgendalistWidget");
        ClinicAgendalistWidget->setGeometry(QRect(60, 120, 256, 192));
        ClinicAgendalabel = new QLabel(DoctorMainWindow);
        ClinicAgendalabel->setObjectName("ClinicAgendalabel");
        ClinicAgendalabel->setGeometry(QRect(70, 90, 141, 16));

        retranslateUi(DoctorMainWindow);

        QMetaObject::connectSlotsByName(DoctorMainWindow);
    } // setupUi

    void retranslateUi(QDialog *DoctorMainWindow)
    {
        DoctorMainWindow->setWindowTitle(QCoreApplication::translate("DoctorMainWindow", "Dialog", nullptr));
        DocWelcomelabel->setText(QCoreApplication::translate("DoctorMainWindow", "Welcome, Dr. [BLANK], to your personal account", nullptr));
        MenuDoctoolButton->setText(QCoreApplication::translate("DoctorMainWindow", "...", nullptr));
        ClinicAgendalabel->setText(QCoreApplication::translate("DoctorMainWindow", "Today's Agenda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorMainWindow: public Ui_DoctorMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORMAINWINDOW_H
