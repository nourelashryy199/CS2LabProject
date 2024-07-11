#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registerwindow.h"

loginWindow::loginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);
}

loginWindow::~loginWindow()
{
    delete ui;
}

void loginWindow::on_pushButton_register_clicked()
{
    hide();
    registerWindow* registerWindow = new class registerWindow(this);
    registerWindow->show();
}

