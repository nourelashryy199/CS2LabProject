#include "changenurse.h"
#include "ui_changenurse.h"
#include "Users.h"

changenurse::changenurse(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changenurse)
{
    ui->setupUi(this);
}

changenurse::~changenurse()
{
    delete ui;
}

void changenurse::on_pushButtonSearch_clicked()
{
    QString searchedID = ui->searchEdit->text();

    for(int i = 0; i < nursesCount; i++){
        if(ourNurses[i].id == searchedID){
            ui->nameEdit->setText(ourNurses[i].name);
            ui->idEdit->setText(ourNurses[i].id);
            ui->passwordEdit->setText(ourNurses[i].password);
            ui->supervisorEdit->setText(ourNurses[i].assistantTo);
        }
    }
}


void changenurse::on_pushButtonApply_clicked()
{
    QString searchedID = ui->searchEdit->text();

    for(int i = 0; i < nursesCount; i++){
        if(ourNurses[i].id == searchedID){
            ourNurses[i].name = ui->nameEdit->text();
            ourNurses[i].id = ui->idEdit->text();
            ourNurses[i].password = ui->passwordEdit->text();
            ourNurses[i].assistantTo = ui->supervisorEdit->text();

            ui->errorSuccessfuly->setVisible(true);
        }

    }
}


void changenurse::on_pushButtonClose_clicked()
{
    hide();
}

