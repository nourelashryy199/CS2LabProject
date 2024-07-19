#ifndef CHANGEPATIENT_H
#define CHANGEPATIENT_H

#include <QDialog>

namespace Ui {
class changepatient;
}

class changepatient : public QDialog
{
    Q_OBJECT

public:
    explicit changepatient(QWidget *parent = nullptr);
    ~changepatient();

private slots:
    void on_pushButtonSearch_clicked();

    void on_pushButtonApply_clicked();

    void on_pushButtonClose_clicked();

private:
    Ui::changepatient *ui;
};

#endif // CHANGEPATIENT_H
