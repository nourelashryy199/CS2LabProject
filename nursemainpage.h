#ifndef NURSEMAINPAGE_H
#define NURSEMAINPAGE_H

#include <QDialog>

namespace Ui {
class NurseMainPage;
}

class NurseMainPage : public QDialog
{
    Q_OBJECT

public:
    explicit NurseMainPage(QWidget *parent = nullptr);
    ~NurseMainPage();

private:
    Ui::NurseMainPage *ui;
};

#endif // NURSEMAINPAGE_H
