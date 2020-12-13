#ifndef BILL_H
#define BILL_H
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QSqlError>
#include <QDialog>

namespace Ui {
class Bill;
}

class Bill : public QDialog
{
    Q_OBJECT

public:
    explicit Bill(QWidget *parent = nullptr);
    ~Bill();

private slots:
    void on_bill_clicked();

private:
    Ui::Bill *ui;
};

#endif // BILL_H
