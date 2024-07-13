#include "patientmainpage.h"
#include "ui_patientmainpage.h"

PatientMainPage::PatientMainPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PatientMainPage)
{
    ui->setupUi(this);
}

PatientMainPage::~PatientMainPage()
{
    delete ui;
}
