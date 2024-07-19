#ifndef CHANGENURSE_H
#define CHANGENURSE_H

#include <QDialog>

namespace Ui {
class changenurse;
}

class changenurse : public QDialog
{
    Q_OBJECT

public:
    explicit changenurse(QWidget *parent = nullptr);
    ~changenurse();

private slots:
    void on_pushButtonSearch_clicked();

    void on_pushButtonApply_clicked();

    void on_pushButtonClose_clicked();

private:
    Ui::changenurse *ui;
};

#endif // CHANGENURSE_H
