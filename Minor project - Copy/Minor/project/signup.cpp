#include "signup.h"
#include "ui_signup.h"
#include "medicalform.h"
#include "mainwindow.h"
Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_signupadd_clicked()
{
       QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName("E:/Minor project/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
       if(db.open())
       {
           QSqlQuery query;


           QString first=ui->first->text();
           QString last=ui->last->text();
           QString email=ui->email->text();
           QString password=ui->password->text();
           QString age=ui->age->text();
           QString username=ui->username->text();

           query.prepare("INSERT INTO records(first,last,email,password,age,username)"
                         "VALUES(:first,:last,:email,:password,:age,:username)" );


           query.bindValue(":first",first);
           query.bindValue(":last",last);
           query.bindValue(":email",email);
           query.bindValue(":password",password);
           query.bindValue(":age",age);
           query.bindValue(":username",username);


           if(query.exec()){
               QMessageBox::information(this,"Successfull","Data inserted successfully");
               hide();
               medicalform=new MedicalForm(this);
               medicalform->show();
           }
           else{
                QMessageBox::warning(this,"Unsuccessfull","Data not inserted");
           }



}
}
