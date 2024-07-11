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
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *accountOptions;

    void setupUi(QDialog *registerWindow)
    {
        if (registerWindow->objectName().isEmpty())
            registerWindow->setObjectName("registerWindow");
        registerWindow->resize(498, 235);
        registerQ = new QLabel(registerWindow);
        registerQ->setObjectName("registerQ");
        registerQ->setGeometry(QRect(60, 10, 371, 61));
        registerQ->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(registerWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 168, 151, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        widget = new QWidget(registerWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 70, 133, 88));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName("radioButton");

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName("radioButton_2");

        verticalLayout->addWidget(radioButton_2);

        accountOptions = new QRadioButton(widget);
        accountOptions->setObjectName("accountOptions");

        verticalLayout->addWidget(accountOptions);


        retranslateUi(registerWindow);

        QMetaObject::connectSlotsByName(registerWindow);
    } // setupUi

    void retranslateUi(QDialog *registerWindow)
    {
        registerWindow->setWindowTitle(QCoreApplication::translate("registerWindow", "Dialog", nullptr));
        registerQ->setText(QCoreApplication::translate("registerWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#0000ff;\">Please select the account type</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("registerWindow", "Proceed", nullptr));
        radioButton->setText(QCoreApplication::translate("registerWindow", "Doctor Account", nullptr));
        radioButton_2->setText(QCoreApplication::translate("registerWindow", "Nurse Account", nullptr));
        accountOptions->setText(QCoreApplication::translate("registerWindow", "Patient Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerWindow: public Ui_registerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
