/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QLabel *id;
    QLabel *passWord;
    QLabel *welcome;
    QLineEdit *userNameLine;
    QLineEdit *passWordLine;
    QLabel *loginError;
    QPushButton *loginButton;
    QPushButton *registerButton;
    QMenuBar *menubar;
    QMenu *menuLoginWindow;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName("mainWindow");
        mainWindow->resize(616, 454);
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName("centralwidget");
        id = new QLabel(centralwidget);
        id->setObjectName("id");
        id->setGeometry(QRect(170, 50, 51, 61));
        passWord = new QLabel(centralwidget);
        passWord->setObjectName("passWord");
        passWord->setGeometry(QRect(140, 110, 111, 61));
        welcome = new QLabel(centralwidget);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(70, 10, 471, 31));
        welcome->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background: white\n"
"color: blue\n"
"}"));
        welcome->setAlignment(Qt::AlignCenter);
        userNameLine = new QLineEdit(centralwidget);
        userNameLine->setObjectName("userNameLine");
        userNameLine->setGeometry(QRect(250, 60, 181, 41));
        passWordLine = new QLineEdit(centralwidget);
        passWordLine->setObjectName("passWordLine");
        passWordLine->setGeometry(QRect(250, 120, 181, 41));
        loginError = new QLabel(centralwidget);
        loginError->setObjectName("loginError");
        loginError->setGeometry(QRect(140, 150, 301, 61));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(220, 210, 161, 61));
        loginButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        registerButton = new QPushButton(centralwidget);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(220, 300, 161, 61));
        registerButton->setStyleSheet(QString::fromUtf8("font: 900 9pt \"Segoe UI Black\";"));
        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 616, 26));
        menuLoginWindow = new QMenu(menubar);
        menuLoginWindow->setObjectName("menuLoginWindow");
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName("statusbar");
        mainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLoginWindow->menuAction());

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "MainWindow", nullptr));
        id->setText(QCoreApplication::translate("mainWindow", "ID", nullptr));
        passWord->setText(QCoreApplication::translate("mainWindow", "Password", nullptr));
        welcome->setText(QCoreApplication::translate("mainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#0000ff;\">Hospital Managment system</span></p></body></html>", nullptr));
        loginError->setText(QCoreApplication::translate("mainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#aa0000;\">ERROR: Wrong Username or Password</span></p></body></html>", nullptr));
        loginButton->setText(QCoreApplication::translate("mainWindow", "Login", nullptr));
        registerButton->setText(QCoreApplication::translate("mainWindow", "Register", nullptr));
        menuLoginWindow->setTitle(QCoreApplication::translate("mainWindow", "LoginWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
