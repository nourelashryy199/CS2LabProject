#include "patientregister.h"
#include "Users.h"
#include "loginwindow.h"
#include "ui_patientregister.h"

patientregister::patientregister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::patientregister)
{
    ui->setupUi(this);
    ui->LabelPassError->setVisible(false);
    ui->errorCheck->setVisible(false);
    ui->errorExisting->setVisible(false);
    ui->errorID->setVisible(false);
}

patientregister::~patientregister()
{
    delete ui;
}

void patientregister::on_pushButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString id = ui->idEdit->text();
    QString password = ui->passwordEdit->text();
    QString retypePassword = ui->repassEdit->text();
    QString age = ui->ageEdit->text();
    QString w = ui->weightEdit->text();
    QString h = ui->heightEdit->text();
    QString d = ui->comboBoxDiet->currentText();
    QString bloodType = ui->comboBoxBlood->currentText();
    QString gender;

    if (ui->RadioButtonMale->isChecked()) {
        gender = "Male";
    } else if (ui->RadioButtonFemale->isChecked()) {
        gender = "Female";
    }

    bool hasError = false;

    if (name.isEmpty() || id.isEmpty() || password.isEmpty() || retypePassword.isEmpty()) {
        ui->errorCheck->setVisible(true);
        hasError = true;
    }

    if (password != retypePassword) {
        ui->LabelPassError->setVisible(true);
        hasError = true;
    }

    if (id.left(2) != "02") {
        ui->errorID->setVisible(true);
        hasError = true;
    }

    for (int i = 0; i < patientsCount; ++i) {
        if (ourPatients[i].id == id) {
            ui->errorExisting->setVisible(true);
            hasError = true;
        }
    }

    if(!hasError){
        ourPatients[patientsCount].name = name;
        ourPatients[patientsCount].id = id;
        ourPatients[patientsCount].password = password;
        ourPatients[patientsCount].age = age;
        ourPatients[patientsCount].gender = gender;
        ourPatients[patientsCount].bloodtype = bloodType;
        ourPatients[patientsCount].weight = w;
        ourPatients[patientsCount].height = h;
        ourPatients[patientsCount].diet = d;



        patientsCount++;


        loginWindow * loginwindow = new loginWindow(this);
        loginwindow->show();
        this->close();
    }
}

