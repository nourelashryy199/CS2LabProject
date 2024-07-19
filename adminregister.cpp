#include "adminregister.h"
#include "ui_adminregister.h"

adminregister::adminregister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminregister)
{
    ui->setupUi(this);
}

adminregister::~adminregister()
{
    delete ui;
}

void adminregister::on_pushButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString id = ui->idEdit->text();
    QString password = ui->passwordEdit->text();
    QString retypePassword = ui->repassEdit->text();

    bool hasError = false;

    if (name.isEmpty() ||id.isEmpty() || password.isEmpty() || retypePassword.isEmpty()) {
        ui->errorCheck->setVisible(true);
        hasError = true;
    }

    if (password != retypePassword) {
        ui->LabelPassError->setVisible(true);
        hasError = true;
    }

    if (id.left(2) != "00") {
        ui->errorID->setVisible(true);
        hasError = true;
    }

    for (int i = 0; i < adminsCount; ++i) {
        if (ourAdmins[i].id == id) {
            ui->errorExisting->setVisible(true);
            hasError = true;
        }
    }

    if(!hasError){
        ourAdmins[adminsCount].name = name;
        ourAdmins[adminsCount].id = id;
        ourAdmins[adminsCount].password = password;

        adminsCount++;


        loginWindow * loginwindow = new loginWindow(this);
        loginwindow->show();
        this->close();
    }
}

