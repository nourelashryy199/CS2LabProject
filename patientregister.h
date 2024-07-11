#ifndef PATIENTREGISTER_H
#define PATIENTREGISTER_H

#include <QDialog>

namespace Ui {
class patientregister;
}

class patientregister : public QDialog
{
    Q_OBJECT

public:
    explicit patientregister(QWidget *parent = nullptr);
    ~patientregister();

private:
    Ui::patientregister *ui;
};

#endif // PATIENTREGISTER_H
