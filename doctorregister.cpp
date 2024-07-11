#include "doctorregister.h"
#include "Users.h"
#include "ui_doctorregister.h"
#include "loginwindow.h"

doctorRegister::doctorRegister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::doctorRegister)
{
    ui->setupUi(this);
    ui->LabelPassError->setVisible(false);
    ui->errorCheck->setVisible(false);
    ui->errorExisting->setVisible(false);
    ui->errorID->setVisible(false);
}

doctorRegister::~doctorRegister()
{
    delete ui;
}

void doctorRegister::on_pushButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString id = ui->idEdit->text();
    QString password = ui->passwordEdit->text();
    QString retypePassword = ui->repassEdit->text();
    QString specialization = ui->comboBox->currentText();
    QString assistant = ui->assistantEdit->text();

    bool hasError = false;

    if (name.isEmpty() || id.isEmpty() || password.isEmpty() || retypePassword.isEmpty() || specialization.isEmpty()) {
        ui->errorCheck->setVisible(true);
        hasError = true;
    }

    if (password != retypePassword) {
        ui->LabelPassError->setVisible(true);
        hasError = true;
    }

    if (id.left(2) != "01") {
        ui->errorID->setVisible(true);
        hasError = true;
    }

    for (int i = 0; i < doctorsCount; ++i) {
        if (ourDoctors[i].id == id) {
    ui->errorExisting->setVisible(true);
            hasError = true;
    }
    }
    if(!hasError){
    ourDoctors[doctorsCount].name = name;
    ourDoctors[doctorsCount].id = id;
    ourDoctors[doctorsCount].password = password;
    ourDoctors[doctorsCount].specialization = specialization;
    ourDoctors[doctorsCount].assistant = assistant;

    doctorsCount++;


    loginWindow * loginwindow = new loginWindow(this);
    loginwindow->show();
    this->close();
    }
}

