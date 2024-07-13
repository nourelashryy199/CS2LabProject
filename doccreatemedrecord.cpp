#include "doccreatemedrecord.h"
#include "ui_doccreatemedrecord.h"

DocCreateMedRecord::DocCreateMedRecord(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DocCreateMedRecord)
{
    ui->setupUi(this);
}

DocCreateMedRecord::~DocCreateMedRecord()
{
    delete ui;
}
