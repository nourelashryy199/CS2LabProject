/********************************************************************************
** Form generated from reading UI file 'hopitalmainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOPITALMAINPAGE_H
#define UI_HOPITALMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_HopitalMainPage
{
public:
    QLabel *HEALHOSPlabel;
    QPushButton *LogInHOSPpushButton;
    QPushButton *SignupHOSPpushButton;
    QPushButton *ContactUspushButton;
    QLabel *HOSPmainPIClabel;
    QLabel *OurMissionlabel;
    QTextEdit *OurMissiontextEdit;

    void setupUi(QDialog *HopitalMainPage)
    {
        if (HopitalMainPage->objectName().isEmpty())
            HopitalMainPage->setObjectName("HopitalMainPage");
        HopitalMainPage->resize(1173, 487);
        HEALHOSPlabel = new QLabel(HopitalMainPage);
        HEALHOSPlabel->setObjectName("HEALHOSPlabel");
        HEALHOSPlabel->setGeometry(QRect(60, 10, 141, 71));
        LogInHOSPpushButton = new QPushButton(HopitalMainPage);
        LogInHOSPpushButton->setObjectName("LogInHOSPpushButton");
        LogInHOSPpushButton->setGeometry(QRect(720, 10, 100, 32));
        SignupHOSPpushButton = new QPushButton(HopitalMainPage);
        SignupHOSPpushButton->setObjectName("SignupHOSPpushButton");
        SignupHOSPpushButton->setGeometry(QRect(860, 10, 100, 32));
        ContactUspushButton = new QPushButton(HopitalMainPage);
        ContactUspushButton->setObjectName("ContactUspushButton");
        ContactUspushButton->setGeometry(QRect(990, 10, 100, 32));
        HOSPmainPIClabel = new QLabel(HopitalMainPage);
        HOSPmainPIClabel->setObjectName("HOSPmainPIClabel");
        HOSPmainPIClabel->setGeometry(QRect(80, 100, 941, 231));
        OurMissionlabel = new QLabel(HopitalMainPage);
        OurMissionlabel->setObjectName("OurMissionlabel");
        OurMissionlabel->setGeometry(QRect(70, 350, 211, 31));
        OurMissiontextEdit = new QTextEdit(HopitalMainPage);
        OurMissiontextEdit->setObjectName("OurMissiontextEdit");
        OurMissiontextEdit->setGeometry(QRect(70, 390, 1011, 74));

        retranslateUi(HopitalMainPage);

        QMetaObject::connectSlotsByName(HopitalMainPage);
    } // setupUi

    void retranslateUi(QDialog *HopitalMainPage)
    {
        HopitalMainPage->setWindowTitle(QCoreApplication::translate("HopitalMainPage", "Dialog", nullptr));
        HEALHOSPlabel->setText(QCoreApplication::translate("HopitalMainPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700; font-style:italic;\">HEAL</span></p></body></html>", nullptr));
        LogInHOSPpushButton->setText(QCoreApplication::translate("HopitalMainPage", "Login", nullptr));
        SignupHOSPpushButton->setText(QCoreApplication::translate("HopitalMainPage", "Signup", nullptr));
        ContactUspushButton->setText(QCoreApplication::translate("HopitalMainPage", "Contact Us", nullptr));
        HOSPmainPIClabel->setText(QCoreApplication::translate("HopitalMainPage", "For the Hospital Picture", nullptr));
        OurMissionlabel->setText(QCoreApplication::translate("HopitalMainPage", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700;\">Our Mission</span></p></body></html>", nullptr));
        OurMissiontextEdit->setHtml(QCoreApplication::translate("HopitalMainPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Through the integration of modern medicine and state-of-the-art technological advancements, we aim to provide a unique and satisfactory experience for our patients which ultimately yields them the results they hope for. We house a number of experts that are driven by the nobility of what it means to save lives and are passionate to deliver the best quality of services. </p>\n"
"<p style=\"-"
                        "qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HopitalMainPage: public Ui_HopitalMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOPITALMAINPAGE_H
