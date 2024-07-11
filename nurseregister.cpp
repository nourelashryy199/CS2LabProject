#include "nurseregister.h"
#include "ui_nurseregister.h"

nurseregister::nurseregister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::nurseregister)
{
    ui->setupUi(this);
}

nurseregister::~nurseregister()
{
    delete ui;
}
