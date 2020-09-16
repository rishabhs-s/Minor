#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    QString username=ui ->username->text();
    QString password=ui ->password->text();

    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:/Minor project - Copy/Minor/project/db.sqlite");
    if(db.open())
    {
      qDebug()<<".open suceess";
      if(db.isOpen())
      {
          qDebug()<<".isopen suceess";

      }
    }
    else{
        qDebug()<<" Failed to open database";
    }



}





void MainWindow::on_signup_clicked()
{
    //QMessageBox::information(this,"Sign up","going to signup page");
    signup=new Signup(this);
    signup ->show();

}
