#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "doctorregister.h"
#include "nurseregister.h"
#include "patientregister.h"


registerWindow::registerWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerWindow)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);
}

registerWindow::~registerWindow()
{
    delete ui;
}

void registerWindow::on_pushButton_clicked()
{

    if(ui->radioButtonDoctor->isChecked()){
        doctorRegister * doctorRegisterWindow = new doctorRegister(this);
        doctorRegisterWindow->show();
        hide();
    }
    else if(ui->radioButtonNurse->isChecked()){
        nurseregister * nurseRegisterWindow = new nurseregister(this);
        nurseRegisterWindow->show();
        hide();
    }
    else if(ui->radioButtonPatient->isChecked()){
        patientregister * patientRegisterWindow = new patientregister(this);
        patientRegisterWindow->show();
        hide();
    }
    else{
        ui->label_error->setVisible(true);
    }
}

