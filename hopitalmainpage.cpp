#include "hopitalmainpage.h"
#include "ui_hopitalmainpage.h"

HopitalMainPage::HopitalMainPage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HopitalMainPage)
{
    ui->setupUi(this);
}

HopitalMainPage::~HopitalMainPage()
{
    delete ui;
}
