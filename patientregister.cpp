#include "patientregister.h"
#include "ui_patientregister.h"

patientregister::patientregister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::patientregister)
{
    ui->setupUi(this);
}

patientregister::~patientregister()
{
    delete ui;
}
