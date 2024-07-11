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

private:
    Ui::nurseregister *ui;
};

#endif // NURSEREGISTER_H
