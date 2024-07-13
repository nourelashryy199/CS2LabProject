#include "doctormainwindow.h"
#include "ui_doctormainwindow.h"

DoctorMainWindow::DoctorMainWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DoctorMainWindow)
{
    ui->setupUi(this);

    menu = new QMenu(this);

    medicalRecordsMenu = new QMenu("Medical Records", this);
    QAction *createNewAction = medicalRecordsMenu->addAction("Create New Medical Record");
    QAction *updateExistingAction = medicalRecordsMenu->addAction("View and/or Update Existing Record");

    connect(createNewAction, &QAction::triggered, this, &DoctorMainWindow::createNewMedicalRecord);
    connect(updateExistingAction, &QAction::triggered, this, &DoctorMainWindow::updateExistingMedicalRecord);

    menu->addMenu(medicalRecordsMenu);

    QAction *action2 = menu->addAction("Create/Update Medical Report");
    QAction *action3 = menu->addAction("Schedule Clinic Appointment");
    QAction *action4 = menu->addAction("Reserve Operation Room");
    QAction *action5 = menu->addAction("Issue Bill");
    QAction *action6 = menu->addAction("Send Message");

    connect(action3, &QAction::triggered, this, &DoctorMainWindow::openScheduleAppointment);

    ui->MenuDoctoolButton->setPopupMode(QToolButton::MenuButtonPopup);
    ui->MenuDoctoolButton->setMenu(menu);

    docApptWindow = new DocAppt(this);
    docCreateMedRecordWindow = new DocCreateMedRecord(this); // Initialize DocCreateMedRecord instance
}

DoctorMainWindow::~DoctorMainWindow()
{
    delete ui;
}

void DoctorMainWindow::openScheduleAppointment()
{
    docApptWindow->show();
}

void DoctorMainWindow::addAppointmentToAgenda(const QString &appointmentDetails)
{
    ui->ClinicAgendalistWidget->addItem(appointmentDetails);
}

void DoctorMainWindow::createNewMedicalRecord()
{
    docCreateMedRecordWindow->show(); // Show the DocCreateMedRecord window
}

void DoctorMainWindow::updateExistingMedicalRecord()
{

}
