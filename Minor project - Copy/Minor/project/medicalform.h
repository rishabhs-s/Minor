#ifndef MEDICALFORM_H
#define MEDICALFORM_H
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QSqlError>

#include <QDialog>

namespace Ui {
class MedicalForm;
}

class MedicalForm : public QDialog
{
    Q_OBJECT

public:
    explicit MedicalForm(QWidget *parent = nullptr);
    ~MedicalForm();

private slots:
    void on_Add_clicked();

private:
    Ui::MedicalForm *ui;
};

#endif // MEDICALFORM_H
