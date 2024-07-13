#include "nursemainpage.h"
#include "ui_nursemainpage.h"

NurseMainPage::NurseMainPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NurseMainPage)
{
    ui->setupUi(this);
}

NurseMainPage::~NurseMainPage()
{
    delete ui;
}
