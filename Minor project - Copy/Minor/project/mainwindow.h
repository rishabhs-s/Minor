#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "signup.h"
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include <QSqlError>
#include<QSqlDriver>
#include<qsqldriver.h>
#include<qsqldriverplugin.h>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();

    void on_pushButton_clicked();

    void on_signup_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *dialog ;
    Signup *signup ;
};
#endif // MAINWINDOW_H
