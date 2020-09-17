#include "signup.h"
#include "ui_signup.h"
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

void Signup::on_signup_clicked()
{
       QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName("E:/Minor project/Minor/Minor project - Copy/Minor/project/db.sqlite");
       if(db.open())
       {
           QSqlQuery query;


           QString first=ui->first->text();
           QString last=ui->last->text();
           QString email=ui->email->text();
           QString password=ui->password->text();
           QString age=ui->age->text();

           query.prepare("INSERT INTO login(first,last,email,password,age)"
                         "VALUES(:first,:last,:email,:password,:age)");


           query.bindValue(":first",first);
           query.bindValue(":last",last);
           query.bindValue(":email",email);
           query.bindValue(":password",password);
           query.bindValue(":age",age);

           if(query.exec()){
               QMessageBox::information(this,"Successfull","Data inserted successfully");
           }
           else{
                QMessageBox::warning(this,"Unsuccessfull","Data not inserted");
           }




//           qry.prepare("INSERT INTO users(email , password)"
//                         "VALUES(:email,:password)");
//           qry.bindValue(":email",email);
//           qry.bindValue(":password",password);

//          if(query.exec()){
//               QMessageBox::information(this,"successfull","signup done");
//           }

//       }



//       else{
//           QSqlError error = db.lastError();
//           QMessageBox::warning(this,"connection", error.databaseText());
//        }
}
}
