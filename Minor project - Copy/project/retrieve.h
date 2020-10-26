#ifndef RETRIEVE_H
#define RETRIEVE_H
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QSqlError>

#include <QDialog>

namespace Ui {
class Retrieve;
}

class Retrieve : public QDialog
{
    Q_OBJECT

public:
    explicit Retrieve(QWidget *parent = nullptr);
    ~Retrieve();

private slots:
    void on_Retrieverec_clicked();

    void on_okay_clicked();

private:
    Ui::Retrieve *ui;
};

#endif // RETRIEVE_H
