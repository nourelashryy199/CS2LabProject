#include "registerwindow.h"
#include "ui_registerwindow.h"

registerWindow::registerWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerWindow)
{
    ui->setupUi(this);
}

registerWindow::~registerWindow()
{
    delete ui;
}
