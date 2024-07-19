/********************************************************************************
** Form generated from reading UI file 'changenurse.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGENURSE_H
#define UI_CHANGENURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_changenurse
{
public:
    QLabel *label_5;
    QLineEdit *supervisorEdit;
    QLineEdit *idEdit;
    QLineEdit *passwordEdit;
    QLabel *label_9;
    QLabel *errorExisting_2;
    QLabel *label_6;
    QLineEdit *nameEdit;
    QLabel *label_4;
    QLabel *label_7;
    QPushButton *pushButtonSearch;
    QLineEdit *searchEdit;
    QLabel *label_8;
    QLabel *label_10;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonClose;
    QLabel *errorSuccessfuly;

    void setupUi(QDialog *changenurse)
    {
        if (changenurse->objectName().isEmpty())
            changenurse->setObjectName("changenurse");
        changenurse->resize(631, 520);
        label_5 = new QLabel(changenurse);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 320, 111, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        supervisorEdit = new QLineEdit(changenurse);
        supervisorEdit->setObjectName("supervisorEdit");
        supervisorEdit->setGeometry(QRect(220, 330, 201, 41));
        idEdit = new QLineEdit(changenurse);
        idEdit->setObjectName("idEdit");
        idEdit->setGeometry(QRect(220, 210, 201, 41));
        passwordEdit = new QLineEdit(changenurse);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(220, 270, 201, 41));
        label_9 = new QLabel(changenurse);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(90, 200, 141, 51));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorExisting_2 = new QLabel(changenurse);
        errorExisting_2->setObjectName("errorExisting_2");
        errorExisting_2->setGeometry(QRect(430, 200, 121, 51));
        errorExisting_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_6 = new QLabel(changenurse);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(122, 10, 381, 61));
        label_6->setAlignment(Qt::AlignCenter);
        nameEdit = new QLineEdit(changenurse);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setGeometry(QRect(220, 150, 201, 41));
        label_4 = new QLabel(changenurse);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 140, 61, 51));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_7 = new QLabel(changenurse);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 260, 141, 51));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        pushButtonSearch = new QPushButton(changenurse);
        pushButtonSearch->setObjectName("pushButtonSearch");
        pushButtonSearch->setGeometry(QRect(430, 70, 131, 41));
        pushButtonSearch->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        searchEdit = new QLineEdit(changenurse);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setGeometry(QRect(220, 70, 201, 41));
        label_8 = new QLabel(changenurse);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(90, 60, 141, 51));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        label_10 = new QLabel(changenurse);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(60, 110, 511, 20));
        pushButtonApply = new QPushButton(changenurse);
        pushButtonApply->setObjectName("pushButtonApply");
        pushButtonApply->setGeometry(QRect(380, 430, 131, 71));
        pushButtonApply->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        pushButtonClose = new QPushButton(changenurse);
        pushButtonClose->setObjectName("pushButtonClose");
        pushButtonClose->setGeometry(QRect(130, 430, 131, 71));
        pushButtonClose->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        errorSuccessfuly = new QLabel(changenurse);
        errorSuccessfuly->setObjectName("errorSuccessfuly");
        errorSuccessfuly->setGeometry(QRect(190, 380, 261, 51));
        errorSuccessfuly->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size:15px\n"
"}"));
        errorSuccessfuly->setAlignment(Qt::AlignCenter);

        retranslateUi(changenurse);

        QMetaObject::connectSlotsByName(changenurse);
    } // setupUi

    void retranslateUi(QDialog *changenurse)
    {
        changenurse->setWindowTitle(QCoreApplication::translate("changenurse", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("changenurse", "Your Supervisor:", nullptr));
        label_9->setText(QCoreApplication::translate("changenurse", "ID:", nullptr));
        errorExisting_2->setText(QCoreApplication::translate("changenurse", "<html><head/><body><p><span style=\" font-size:9pt; color:#aa0000;\">*Already Existing</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("changenurse", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Nurse Profile</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("changenurse", "Name:", nullptr));
        label_7->setText(QCoreApplication::translate("changenurse", "Password:", nullptr));
        pushButtonSearch->setText(QCoreApplication::translate("changenurse", "Search", nullptr));
        label_8->setText(QCoreApplication::translate("changenurse", "Enter the ID:", nullptr));
        label_10->setText(QCoreApplication::translate("changenurse", "------------------------------------------------------------------------------------", nullptr));
        pushButtonApply->setText(QCoreApplication::translate("changenurse", "Apply", nullptr));
        pushButtonClose->setText(QCoreApplication::translate("changenurse", "Close", nullptr));
        errorSuccessfuly->setText(QCoreApplication::translate("changenurse", "<html><head/><body><p><span style=\" font-size:9pt; color:#00ff00;\">*Changes Saved Successfuly</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changenurse: public Ui_changenurse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGENURSE_H
