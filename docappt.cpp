#include "docappt.h"
#include "ui_docappt.h"
#include "doctormainwindow.h"

DocAppt::DocAppt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DocAppt)
{
    ui->setupUi(this);


    ui->ApptDOCgroupBox->setVisible(false);


    connect(ui->ApptSelectionDOCcalendarWidget, &QCalendarWidget::selectionChanged,
            this, &DocAppt::onCalendarSelectionChanged);


    connect(ui->ApptDOCconfpushButton, &QPushButton::clicked,
            this, &DocAppt::onConfirmAppointment);
}

DocAppt::~DocAppt()
{
    delete ui;
}

void DocAppt::onCalendarSelectionChanged()
{

    if (ui->ApptSelectionDOCcalendarWidget->selectedDate().isValid()) {

        ui->ApptDOCgroupBox->setVisible(true);
    } else {

        ui->ApptDOCgroupBox->setVisible(false);
    }
}

void DocAppt::onConfirmAppointment()
{

    QString patientName = ui->ApptDOCpatientlineEdit->text();
    QString appointmentTime = ui->ApptDOCpatienttimeEdit->time().toString("hh:mm");


    QString appointmentDetails = QString("%1 at %2").arg(patientName).arg(appointmentTime);


    DoctorMainWindow *mainWindow = qobject_cast<DoctorMainWindow*>(parent());
    if (mainWindow) {

        mainWindow->addAppointmentToAgenda(appointmentDetails);
    }


    this->close();
}
