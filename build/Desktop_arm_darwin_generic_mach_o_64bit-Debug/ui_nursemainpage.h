/********************************************************************************
** Form generated from reading UI file 'nursemainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NURSEMAINPAGE_H
#define UI_NURSEMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_NurseMainPage
{
public:

    void setupUi(QDialog *NurseMainPage)
    {
        if (NurseMainPage->objectName().isEmpty())
            NurseMainPage->setObjectName("NurseMainPage");
        NurseMainPage->resize(620, 459);

        retranslateUi(NurseMainPage);

        QMetaObject::connectSlotsByName(NurseMainPage);
    } // setupUi

    void retranslateUi(QDialog *NurseMainPage)
    {
        NurseMainPage->setWindowTitle(QCoreApplication::translate("NurseMainPage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NurseMainPage: public Ui_NurseMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NURSEMAINPAGE_H
