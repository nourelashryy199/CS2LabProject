#ifndef HOPITALMAINPAGE_H
#define HOPITALMAINPAGE_H

#include <QDialog>

namespace Ui {
class HopitalMainPage;
}

class HopitalMainPage : public QDialog
{
    Q_OBJECT

public:
    explicit HopitalMainPage(QWidget *parent = nullptr);
    ~HopitalMainPage();

private:
    Ui::HopitalMainPage *ui;
};

#endif // HOPITALMAINPAGE_H
