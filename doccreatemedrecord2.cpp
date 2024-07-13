#include "doccreatemedrecord2.h"
#include "ui_doccreatemedrecord2.h"

doccreatemedrecord2::doccreatemedrecord2(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::doccreatemedrecord2)
{
    ui->setupUi(this);
}

doccreatemedrecord2::~doccreatemedrecord2()
{
    delete ui;
}
