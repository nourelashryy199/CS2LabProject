#ifndef DOCAPPT_H
#define DOCAPPT_H

#include <QDialog>

namespace Ui {
class DocAppt;
}

class DocAppt : public QDialog
{
    Q_OBJECT

public:
    explicit DocAppt(QWidget *parent = nullptr);
    ~DocAppt();

private slots:
    void onCalendarSelectionChanged();
    void onConfirmAppointment();

private:
    Ui::DocAppt *ui;
};

#endif // DOCAPPT_H
