#ifndef PATIENTMAINPAGE_H
#define PATIENTMAINPAGE_H

#include <QDialog>

namespace Ui {
class PatientMainPage;
}

class PatientMainPage : public QDialog
{
    Q_OBJECT

public:
    explicit PatientMainPage(QWidget *parent = nullptr);
    ~PatientMainPage();

private:
    Ui::PatientMainPage *ui;
};

#endif // PATIENTMAINPAGE_H
