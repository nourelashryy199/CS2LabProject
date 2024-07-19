#include "changepatient.h"
#include "ui_changepatient.h"
#include "Users.h"
changepatient::changepatient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changepatient)
{
    ui->setupUi(this);
    ui->errorSuccessfuly->setVisible(false);
}

changepatient::~changepatient()
{
    delete ui;
}

void changepatient::on_pushButtonSearch_clicked()
{
    QString searchedID = ui->searchEdit->text();

    for(int i = 0; i < patientsCount; i++){
        if(ourPatients[i].id == searchedID){
            ui->nameEdit->setText(ourPatients[i].name);
            ui->idEdit->setText(ourPatients[i].id);
            ui->passwordEdit->setText(ourPatients[i].password);
            ui->ageEdit->setText(ourPatients[i].age);
            ui->genderEdit->setText(ourPatients[i].gender);
            ui->bloodtypeEdit->setText(ourPatients[i].bloodtype);
            ui->weightEdit->setText(ourPatients[i].weight);
            ui->heightEdit->setText(ourPatients[i].height);
            ui->dietEdit->setText(ourPatients[i].diet);
            ui->dobEdit->setText(ourPatients[i].dob);
            ui->phoneEdit->setText(ourPatients[i].phone);
            ui->emergencyEdit->setText(ourPatients[i].emergencyContact);
            ui->mdEdit->setText(ourPatients[i].medicalRecord);
            ui->conditionEdit->setText(ourPatients[i].medicalRecord);
            ui->surgeriesEdit->setText(ourPatients[i].surgeries);
            ui->allergiesEdit->setText(ourPatients[i].allergies);
            ui->fhEdit->setText(ourPatients[i].familyHistory);
            ui->diagnosisEdit->setText(ourPatients[i].diagnosis);
            ui->prognosisEdit->setText(ourPatients[i].prognosis);
            ui->medsEdit->setText(ourPatients[i].medication);
            ui->freqEdit->setText(ourPatients[i].frequency);
            ui->tpEdit->setText(ourPatients[i].treatmentPlan);
            break;
        }
    }
}


void changepatient::on_pushButtonApply_clicked()
{
    QString searchedID = ui->searchEdit->text();

    for(int i = 0; i < patientsCount; i++){
        if(ourPatients[i].id == searchedID){
            ourPatients[i].name = ui->nameEdit->text();
            ourPatients[i].id = ui->idEdit->text();
            ourPatients[i].password = ui->passwordEdit->text();
            ourPatients[i].age = ui->ageEdit->text();
            ourPatients[i].gender = ui->genderEdit->text();
            ourPatients[i].bloodtype = ui->bloodtypeEdit->text();
            ourPatients[i].weight = ui->weightEdit->text();
            ourPatients[i].height = ui->heightEdit->text();
            ourPatients[i].dob = ui->dobEdit->text();
            ourPatients[i].phone = ui->phoneEdit->text();
            ourPatients[i].emergencyContact = ui->emergencyEdit->text();
            ourPatients[i].medicalRecord = ui->mdEdit->text();
            ourPatients[i].surgeries = ui->surgeriesEdit->text();
            ourPatients[i].allergies = ui->allergiesEdit->text();
            ourPatients[i].familyHistory = ui->fhEdit->text();
            ourPatients[i].diagnosis = ui->diagnosisEdit->text();
            ourPatients[i].prognosis = ui->prognosisEdit->text();
            ourPatients[i].medication = ui->medsEdit->text();
            ourPatients[i].frequency = ui->freqEdit->text();
            ourPatients[i].treatmentPlan = ui->tpEdit->text();
            ui->errorSuccessfuly->setVisible(true);
            break;
        }
    }
}


void changepatient::on_pushButtonClose_clicked()
{
    hide();
}

