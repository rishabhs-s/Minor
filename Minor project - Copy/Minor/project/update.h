#ifndef UPDATE_H
#define UPDATE_H
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QSqlError>

#include <QDialog>

namespace Ui {
class Update;
}

class Update : public QDialog
{
    Q_OBJECT

public:
    explicit Update(QWidget *parent = nullptr);
    ~Update();

private slots:
    void on_pushButton_clicked();

    void on_Updaterec_clicked();

    void on_show_clicked();

private:
    Ui::Update *ui;
};

#endif // UPDATE_H
