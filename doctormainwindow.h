#ifndef DOCTORMAINWINDOW_H
#define DOCTORMAINWINDOW_H

#include <QDialog>
#include <QMenu>
#include <QToolButton>
#include "docappt.h"
#include "doccreatemedrecord.h"

namespace Ui {
class DoctorMainWindow;
}

class DoctorMainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DoctorMainWindow(QWidget *parent = nullptr);
    ~DoctorMainWindow();

    void addAppointmentToAgenda(const QString &appointmentDetails);

private slots:
    void openScheduleAppointment();
    void createNewMedicalRecord();
    void updateExistingMedicalRecord();

private:
    Ui::DoctorMainWindow *ui;
    QMenu *menu;
    QMenu *medicalRecordsMenu;
    DocAppt *docApptWindow;
    DocCreateMedRecord *docCreateMedRecordWindow;
};

#endif // DOCTORMAINWINDOW_H
