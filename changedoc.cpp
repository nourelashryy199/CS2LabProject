#include "changedoc.h"
#include "ui_changedoc.h"
#include "Users.h"

changedoc::changedoc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changedoc)
{
    ui->setupUi(this);
    ui->errorSuccessfuly->setVisible(false);
}

changedoc::~changedoc()
{
    delete ui;
}

void changedoc::on_pushButtonSearch_clicked()
{
    QString searchedID = ui->searchEdit->text();

    for(int i = 0; i < doctorsCount; i++){
        if(ourDoctors[i].id == searchedID){
            ui->nameEdit->setText(ourDoctors[i].name);
            ui->idEdit->setText(ourDoctors[i].id);
            ui->passwordEdit->setText(ourDoctors[i].password);
            ui->SpecializationEdit->setText(ourDoctors[i].specialization);
            ui->assistantEdit->setText(ourDoctors[i].assistant);
            ui->wiEdit->setText(ourDoctors[i].workingHours);
            ui->fromEdit->setText(ourDoctors[i].hoursFrom);
            ui->toEdit->setText(ourDoctors[i].hoursTo);
            ui->wdEdit->setText(ourDoctors[i].workingDays);
        }
    }
}


void changedoc::on_pushButton_clicked()
{

    QString searchedID = ui->searchEdit->text();

    for(int i = 0; i < doctorsCount; i++){
        if(ourDoctors[i].id == searchedID){
    ourDoctors[i].name = ui->nameEdit->text();
    ourDoctors[i].id = ui->idEdit->text();
    ourDoctors[i].password = ui->passwordEdit->text();
    ourDoctors[i].specialization = ui->SpecializationEdit->text();
    ourDoctors[i].assistant = ui->assistantEdit->text();
    ourDoctors[i].workingHours =ui->wiEdit->text();
    ourDoctors[i].hoursFrom = ui->fromEdit->text();
    ourDoctors[i].hoursTo = ui->toEdit->text();
    ourDoctors[i].workingDays = ui->wdEdit->text();

    ui->errorSuccessfuly->setVisible(true);
        }

    }
}


void changedoc::on_pushButton_2_clicked()
{
    hide();
}

