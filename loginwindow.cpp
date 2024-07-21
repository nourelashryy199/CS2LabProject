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


void loginWindow::on_LoginpushButton_clicked()
{
    QString iD = ui->IDlineEdit->text();
    QString pass = ui->PasswordlineEdit->text();

    qDebug() << "Entered ID:" << iD;
    qDebug() << "Entered Password:" << pass;

    bool loginSuccessful = false;

    if (iD.left(2) == "00"){
        for (int i = 0; i <adminsCount;i++){
            if(ourAdmins[i].id == iD && ourAdmins[i].password == pass){
                hide();
                admin* adminWindow = new admin(this);
                adminWindow->show();
            }
            else
                ui->label_error->setVisible(true);
        }
    }
    if (iD.left(2) == "01"){
        for (int i = 0; i < doctorsCount;i++){
            if(ourDoctors[i].id == iD && ourDoctors[i].password == pass){
                hide();
                DoctorMainWindow* doctorMain = new DoctorMainWindow(this);
                doctorMain->show();
            }
            else
                ui->label_error->setVisible(true);
        }
    }
    if (iD.left(2) == "02"){
        for (int i = 0; i <nursesCount;i++){
            if(ourNurses[i].id == iD && ourNurses[i].password == pass){
                hide();
                NurseMainPage* nurseWindow = new NurseMainPage(this);
                nurseWindow->show();
            }
            else
                ui->label_error->setVisible(true);
        }
    }
    if (iD.left(2) == "03"){
        for (int i = 0; i <patientsCount;i++){
            if(ourPatients[i].id == iD && ourPatients[i].password == pass){
                hide();
                PatientMainPage* patientWindow = new PatientMainPage(this);
                patientWindow->show();
            }
            else
                ui->label_error->setVisible(true);
        }
    }

    if (!loginSuccessful) {
        ui->label_error->setVisible(true);
        ui->label_error->setText("Invalid ID or Password");
    }
}

void loginWindow::on_RegisterpushButton_clicked()
{
    hide();
    registerWindow* registerWindow = new class registerWindow(this);
    registerWindow->show();
}

