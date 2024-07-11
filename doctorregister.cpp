#include "doctorregister.h"
#include "ui_doctorregister.h"

doctorRegister::doctorRegister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::doctorRegister)
{
    ui->setupUi(this);
}

doctorRegister::~doctorRegister()
{
    delete ui;
}
