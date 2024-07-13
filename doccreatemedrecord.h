#ifndef DOCCREATEMEDRECORD_H
#define DOCCREATEMEDRECORD_H

#include <QDialog>

namespace Ui {
class DocCreateMedRecord;
}

class DocCreateMedRecord : public QDialog
{
    Q_OBJECT

public:
    explicit DocCreateMedRecord(QWidget *parent = nullptr);
    ~DocCreateMedRecord();

private:
    Ui::DocCreateMedRecord *ui;
};

#endif // DOCCREATEMEDRECORD_H
