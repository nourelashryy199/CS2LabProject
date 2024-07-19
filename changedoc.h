#ifndef CHANGEDOC_H
#define CHANGEDOC_H

#include <QDialog>

namespace Ui {
class changedoc;
}

class changedoc : public QDialog
{
    Q_OBJECT

public:
    explicit changedoc(QWidget *parent = nullptr);
    ~changedoc();

private slots:
    void on_pushButtonSearch_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changedoc *ui;
};

#endif // CHANGEDOC_H
