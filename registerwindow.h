#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QDialog>

namespace Ui {
class registerWindow;
}

class registerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit registerWindow(QWidget *parent = nullptr);
    ~registerWindow();

private:
    Ui::registerWindow *ui;
};

#endif // REGISTERWINDOW_H
