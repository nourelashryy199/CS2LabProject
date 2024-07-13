#ifndef DOCCREATEMEDRECORD2_H
#define DOCCREATEMEDRECORD2_H

#include <QDialog>

namespace Ui {
class doccreatemedrecord2;
}

class doccreatemedrecord2 : public QDialog
{
    Q_OBJECT

public:
    explicit doccreatemedrecord2(QWidget *parent = nullptr);
    ~doccreatemedrecord2();

private:
    Ui::doccreatemedrecord2 *ui;
};

#endif // DOCCREATEMEDRECORD2_H
