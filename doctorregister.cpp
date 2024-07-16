#include "doctorregister.h"
#include "Users.h"
#include "ui_doctorregister.h"
#include "loginwindow.h"

doctorRegister::doctorRegister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::doctorRegister)
{
    ui->setupUi(this);
    ui->LabelPassError->setVisible(false);
    ui->errorCheck->setVisible(false);
    ui->errorExisting->setVisible(false);
    ui->errorID->setVisible(false);
}

doctorRegister::~doctorRegister()
{
    delete ui;
}

void doctorRegister::on_pushButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString id = ui->idEdit->text();
    QString password = ui->passwordEdit->text();
    QString retypePassword = ui->repassEdit->text();
    QString specialization = ui->comboBox->currentText();
    QString assistant = ui->assistantEdit->text();
    QString wD;
    QString wI;
    QString from = ui->comboBoxFrom->currentText();
    QString to = ui->comboBoxTo->currentText();

    QCheckBox *checkBoxes[] = {ui->checkBoxU, ui->checkBoxM, ui->checkBoxT, ui->checkBoxW, ui->checkBoxR};
    QString days[] = {"U", "M", "T", "W", "R"};


    char daysChar[] = {'U', 'M', 'T', 'W', 'R'};

    for (int i = 0; i < 5; ++i) {
        if (checkBoxes[i]->isChecked()) {
            bool alreadyAdded = false;
            for (int j = 0; j < 5; ++j) {
                if (ourDoctors[doctorsCount].workingDays[j] == daysChar[i]) {
                    alreadyAdded = true;
                    break;
                }
            }
            if (!alreadyAdded) {
                for (int j = 0; j < 5; ++j) {
                    if (ourDoctors[doctorsCount].workingDays[j] == '\0') {
                        ourDoctors[doctorsCount].workingDays[j] = daysChar[i];
                        break;
                    }
                }
            }
        }
    }

    if(ui->radioButtonAM->isChecked()){
        wI = "AM";
}
    else if(ui->radioButtonPM->isChecked()){
        wI = "PM";
    }

    bool hasError = false;

    if (name.isEmpty() || id.isEmpty() || password.isEmpty() || retypePassword.isEmpty() || specialization.isEmpty()
        || wI.isEmpty() || wD.isEmpty() || from.isEmpty() || to.isEmpty()) {
        ui->errorCheck->setVisible(true);
        hasError = true;
    }

    if (password != retypePassword) {
        ui->LabelPassError->setVisible(true);
        hasError = true;
    }

    if (id.left(2) != "01") {
        ui->errorID->setVisible(true);
        hasError = true;
    }

    for (int i = 0; i < doctorsCount; ++i) {
        if (ourDoctors[i].id == id) {
    ui->errorExisting->setVisible(true);
            hasError = true;
    }
    }
    if(!hasError){
    ourDoctors[doctorsCount].name = name;
    ourDoctors[doctorsCount].id = id;
    ourDoctors[doctorsCount].password = password;
    ourDoctors[doctorsCount].specialization = specialization;
    ourDoctors[doctorsCount].assistant = assistant;
    ourDoctors[doctorsCount].workingHours =wI;
    ourDoctors[doctorsCount].hoursFrom = from;
    ourDoctors[doctorsCount].hoursTo = to;


    doctorsCount++;


    loginWindow * loginwindow = new loginWindow(this);
    loginwindow->show();
    this->close();
    }
}

