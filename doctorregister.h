#ifndef DOCTORREGISTER_H
#define DOCTORREGISTER_H

#include <QDialog>

namespace Ui {
class doctorRegister;
}

class doctorRegister : public QDialog
{
    Q_OBJECT

public:
    explicit doctorRegister(QWidget *parent = nullptr);
    ~doctorRegister();

private:
    Ui::doctorRegister *ui;
};

#endif // DOCTORREGISTER_H
