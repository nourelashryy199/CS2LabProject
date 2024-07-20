#include "admin.h"
#include "ui_admin.h"
#include "Users.h"
#include "changedoc.h"
#include "changenurse.h"
#include "changepatient.h"
#include "loginWindow.h"


admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_clicked()
{
    if(ui->radioButtonDoc->isChecked()){
        changedoc* changeDoc = new changedoc(this);
        changeDoc->show();
    }
    if(ui->radioButtonNurse->isChecked()){
        changenurse* changeNurse = new changenurse(this);
        changeNurse->show();
    }
    if(ui->radioButtonPatient->isChecked()){
        changepatient* changePatient = new changepatient(this);
        changePatient->show();
    }
}


void admin::on_pushButton_2_clicked()
{
    hide();
    loginWindow* login = new loginWindow(this);
    login->show();

}

