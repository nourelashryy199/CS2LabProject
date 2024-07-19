/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerWindow
{
public:
    QLabel *registerQ;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonDoctor;
    QRadioButton *radioButtonNurse;
    QRadioButton *radioButtonPatient;
    QLabel *label_error;

    void setupUi(QDialog *registerWindow)
    {
        if (registerWindow->objectName().isEmpty())
            registerWindow->setObjectName("registerWindow");
        registerWindow->resize(485, 298);
        registerQ = new QLabel(registerWindow);
        registerQ->setObjectName("registerQ");
        registerQ->setGeometry(QRect(60, 10, 371, 61));
        registerQ->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(registerWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 220, 151, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        layoutWidget = new QWidget(registerWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 70, 133, 88));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonDoctor = new QRadioButton(layoutWidget);
        radioButtonDoctor->setObjectName("radioButtonDoctor");

        verticalLayout->addWidget(radioButtonDoctor);

        radioButtonNurse = new QRadioButton(layoutWidget);
        radioButtonNurse->setObjectName("radioButtonNurse");

        verticalLayout->addWidget(radioButtonNurse);

        radioButtonPatient = new QRadioButton(layoutWidget);
        radioButtonPatient->setObjectName("radioButtonPatient");

        verticalLayout->addWidget(radioButtonPatient);

        label_error = new QLabel(registerWindow);
        label_error->setObjectName("label_error");
        label_error->setGeometry(QRect(130, 170, 261, 41));

        retranslateUi(registerWindow);

        QMetaObject::connectSlotsByName(registerWindow);
    } // setupUi

    void retranslateUi(QDialog *registerWindow)
    {
        registerWindow->setWindowTitle(QCoreApplication::translate("registerWindow", "Dialog", nullptr));
        registerQ->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#0000ff;\">Please select the account type</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("registerWindow", "Proceed", nullptr));
        radioButtonDoctor->setText(QCoreApplication::translate("registerWindow", "Doctor Account", nullptr));
        radioButtonNurse->setText(QCoreApplication::translate("registerWindow", "Nurse Account", nullptr));
        radioButtonPatient->setText(QCoreApplication::translate("registerWindow", "Patient Account", nullptr));
        label_error->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" color:#aa0000;\">ERROR: Please Select An Account Type</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerWindow: public Ui_registerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
