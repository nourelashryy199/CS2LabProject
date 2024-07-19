#ifndef ADMINREGISTER_H
#define ADMINREGISTER_H

#include <QDialog>

namespace Ui {
class adminregister;
}

class adminregister : public QDialog
{
    Q_OBJECT

public:
    explicit adminregister(QWidget *parent = nullptr);
    ~adminregister();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adminregister *ui;
};

#endif // ADMINREGISTER_H
