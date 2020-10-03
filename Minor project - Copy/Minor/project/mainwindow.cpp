#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
  //  QPixmap pix("F:/Minor/Minor project - Copy/Minor/project/minor_6.jpg");
    QPixmap pix( "E:/Minor project/Minor/Minor project - Copy/Minor/project/minor_6.jpg");
    ui->image->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
   // db.setDatabaseName("F:/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
    //"F:/Minor/Minor project - Copy/Minor/project/mdb.sqlite"
    db.setDatabaseName( "E:/Minor project/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
    QString email=ui ->email->text();
    QString password=ui ->password->text();



    db.open();


    QSqlQuery qry;
        if(qry.exec("select * from records where email ='"+email+"' and password ='"+password+"'"))
        {
                   int count=0;
                   while(qry.next())
                {
                    count++;

                }
                    if(count==1)
                    {
                    ui -> label_5 -> setText("username and password is correct");
                    dashboard =new Dashboard(this);
                    dashboard->show();
                    }

//                    if(count>1)
//                    {
//                    ui -> label_5 -> setText("Duplicate username and password");
//                    }

                    if(count<1)

                    {//ui -> label_5 -> setText("username and password is incorrect");
                    QMessageBox::information(this,"Login failed","Not a registered Email address.Register by clicking onto signup first.");} //login message failed message prints.

         }
  }

void MainWindow::on_signup_clicked()
{
    //hide();
    //QMessageBox::information(this,"Sign up","going to signup page");
    signup=new Signup(this);
    signup ->show();

}
