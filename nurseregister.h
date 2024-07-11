#ifndef NURSEREGISTER_H
#define NURSEREGISTER_H

#include <QDialog>

namespace Ui {
class nurseregister;
}

class nurseregister : public QDialog
{
    Q_OBJECT

public:
    explicit nurseregister(QWidget *parent = nullptr);
    ~nurseregister();

private slots:
    void on_pushButton_clicked();

private:
    Ui::nurseregister *ui;
};

#endif // NURSEREGISTER_H
