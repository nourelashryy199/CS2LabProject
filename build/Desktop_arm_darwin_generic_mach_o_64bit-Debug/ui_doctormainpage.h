/********************************************************************************
** Form generated from reading UI file 'doctormainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORMAINPAGE_H
#define UI_DOCTORMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_DoctorPage
{
public:
    QLabel *DocWelcomeLabellabel;
    QToolButton *MainMenuDOCTORMAINPAGEtoolButton;
    QTextEdit *TodayAgendaDOCtextEdit;

    void setupUi(QDialog *DoctorPage)
    {
        if (DoctorPage->objectName().isEmpty())
            DoctorPage->setObjectName("DoctorPage");
        DoctorPage->resize(1167, 602);
        DocWelcomeLabellabel = new QLabel(DoctorPage);
        DocWelcomeLabellabel->setObjectName("DocWelcomeLabellabel");
        DocWelcomeLabellabel->setGeometry(QRect(20, 30, 391, 61));
        MainMenuDOCTORMAINPAGEtoolButton = new QToolButton(DoctorPage);
        MainMenuDOCTORMAINPAGEtoolButton->setObjectName("MainMenuDOCTORMAINPAGEtoolButton");
        MainMenuDOCTORMAINPAGEtoolButton->setGeometry(QRect(880, 40, 121, 41));
        TodayAgendaDOCtextEdit = new QTextEdit(DoctorPage);
        TodayAgendaDOCtextEdit->setObjectName("TodayAgendaDOCtextEdit");
        TodayAgendaDOCtextEdit->setGeometry(QRect(40, 150, 351, 321));

        retranslateUi(DoctorPage);

        QMetaObject::connectSlotsByName(DoctorPage);
    } // setupUi

    void retranslateUi(QDialog *DoctorPage)
    {
        DoctorPage->setWindowTitle(QCoreApplication::translate("DoctorPage", "Dialog", nullptr));
        DocWelcomeLabellabel->setText(QCoreApplication::translate("DoctorPage", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; font-style:italic;\">Welcome, Dr. [BLANK], to your account!</span></p></body></html>", nullptr));
        MainMenuDOCTORMAINPAGEtoolButton->setText(QCoreApplication::translate("DoctorPage", "...", nullptr));
        TodayAgendaDOCtextEdit->setHtml(QCoreApplication::translate("DoctorPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:700; font-style:italic; vertical-align:super;\">Today's Clinic Agenda</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoctorPage: public Ui_DoctorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORMAINPAGE_H
