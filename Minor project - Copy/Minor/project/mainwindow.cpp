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
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:/Minor project/Minor/Minor project - Copy/Minor/project/db.sqlite");
    QString email=ui ->email->text();
    QString password=ui ->password->text();



    db.open();


    QSqlQuery qry;
        if(qry.exec("select * from login where email ='"+email+"' and password ='"+password+"'"))
        {
                   int count=0;
                   while(qry.next())
                {
                    count++;
                }
                    if(count==1)
                    ui -> label_5 -> setText("username and password is correct");
                    if(count>1)
                    ui -> label_5 -> setText("Duplicate username and password");
                    if(count<1)
                    ui -> label_5 -> setText("username and password is incorrect");

        }

}



void MainWindow::on_signup_clicked()
{
    //QMessageBox::information(this,"Sign up","going to signup page");
    signup=new Signup(this);
    signup ->show();

}