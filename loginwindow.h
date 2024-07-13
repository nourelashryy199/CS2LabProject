#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include "doctormainwindow.h" // Include DoctorMainWindow header

namespace Ui {
class loginWindow;
}

class loginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = nullptr);
    ~loginWindow();

private slots:
    void on_pushButton_register_clicked();
    void on_LoginpushButton_clicked();

private:
    Ui::loginWindow *ui;
};

#endif // LOGINWINDOW_H
