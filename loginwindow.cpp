#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registerwindow.h"
#include "doctormainwindow.h"
#include "nursemainpage.h"
#include "patientmainpage.h"
#include "admin.h"
#include "Users.h"
#include <QDebug>

loginWindow::loginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);
    initializeUsersData();
}

loginWindow::~loginWindow()
{
    delete ui;
}

void loginWindow::on_pushButton_register_clicked()
{
    hide();
    registerWindow* registerWindow = new class registerWindow(this);
    registerWindow->show();
}

void loginWindow::on_LoginpushButton_clicked()
{
    QString id = ui->IDlineEdit->text();
    QString password = ui->PasswordlineEdit->text();

    qDebug() << "Entered ID:" << id;
    qDebug() << "Entered Password:" << password;

    bool loginSuccessful = false;


    for (int i = 0; i < doctorsCount; ++i) {
        qDebug() << "Checking against Doctor ID:" << ourDoctors[i].id << "Password:" << ourDoctors[i].password;
        if (ourDoctors[i].id == id && ourDoctors[i].password == password) {
            loginSuccessful = true;
            qDebug() << "Login successful for Doctor:" << ourDoctors[i].name;
            hide();
            DoctorMainWindow* doctorMainWindow = new DoctorMainWindow(this);
            doctorMainWindow->show();
            break;
        }
        if(ourNurses[i].id == id && ourNurses[i].password == password){
            loginSuccessful = true;
            qDebug() << "Login successful for Nurse:" << ourNurses[i].name;
            hide();
            NurseMainPage* nurseMain = new NurseMainPage(this);
            nurseMain->show();
            break;
        }
        if(ourPatients[i].id == id && ourNurses[i].password == password){
            loginSuccessful = true;
            qDebug() << "Login successful for Doctor:" << ourDoctors[i].name;
            hide();
            PatientMainPage* patientMain = new PatientMainPage(this);
            patientMain->show();
            break;
        }
    }

    if (!loginSuccessful) {
        ui->label_error->setVisible(true);
        ui->label_error->setText("Invalid ID or Password");
    }
}
