#include "nurseregister.h"
#include "ui_nurseregister.h"
#include "Users.h"
#include "loginwindow.h"

nurseregister::nurseregister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::nurseregister)
{
    ui->setupUi(this);
    ui->LabelPassError->setVisible(false);
    ui->errorCheck->setVisible(false);
    ui->errorExisting_2->setVisible(false);
    ui->errorID->setVisible(false);
}

nurseregister::~nurseregister()
{
    delete ui;
}

void nurseregister::on_pushButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString id = ui->idEdit->text();
    QString password = ui->passwordEdit->text();
    QString retypePassword = ui->repassEdit->text();
    QString assistant = ui->assistantEdit->text();

    bool hasError = false;

    if (name.isEmpty() || id.isEmpty() || password.isEmpty() || retypePassword.isEmpty()) {
        ui->errorCheck->setVisible(true);
        hasError = true;
    }

    if (password != retypePassword) {
        ui->LabelPassError->setVisible(true);
        hasError = true;
    }

    if (id.left(2) != "02") {
        ui->errorID->setVisible(true);
        hasError = true;
    }

    for (int i = 0; i < nursesCount; ++i) {
        if (ourNurses[i].id == id) {
            ui->errorExisting_2->setVisible(true);
            hasError = true;
    }
    }

    if(!hasError){
        ourNurses[nursesCount].name = name;
        ourNurses[nursesCount].id = id;
        ourNurses[nursesCount].password = password;
        ourNurses[nursesCount].assistantTo = assistant;

        nursesCount++;


        loginWindow * loginwindow = new loginWindow(this);
        loginwindow->show();
        this->close();
    }
}

