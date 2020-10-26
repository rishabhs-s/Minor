#include "medicalform.h"
#include "ui_medicalform.h"
#include "signup.h"
#include <QSqlError>

MedicalForm::MedicalForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MedicalForm)
{
    ui->setupUi(this);
}

MedicalForm::~MedicalForm()
{
    delete ui;
}

void MedicalForm::on_Add_clicked()

{

        QSqlDatabase mdb=QSqlDatabase::addDatabase("QSQLITE");
               mdb.setDatabaseName("F:/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
        //mdb.setDatabaseName( "E:/Minor project/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
               if(mdb.open())
               {
                   QSqlQuery query;


                   QString height=ui->height->text();
                   QString weight=ui->weight->text();
                   QString glucose=ui->glucose->text();
                   QString bp=ui->bp->text();
                   QString pulse=ui->pulse->text();
                   QString medical_history=ui->medical_history->text();
                   QString allergies=ui->allergies->text();
                   QString un;
                   query.exec("SELECT username FROM records ORDER BY uid DESC  LIMIT 1 ");
                   while (query.next()) {
                          un = query.value(0).toString();




                   }
                   qDebug()<<un;
                   query.prepare("update records set height=:height,weight=:weight,glucose=:glucose,bp=:bp,pulse=:pulse,medical_history=:medical_history,allergies=:allergies where username='"+un+"'");






                   query.bindValue(":height",height);
                   query.bindValue(":weight",weight);
                   query.bindValue(":glucose",glucose);
                   query.bindValue(":bp",bp);
                   query.bindValue(":pulse",pulse);
                   query.bindValue(":medical_history",medical_history);
                   query.bindValue(":allergies",allergies);


                   if(query.exec()){
                                  QMessageBox::information(this,"Successfull","Data inserted successfully");
                              }
                              else{
                                   //QMessageBox::warning(this,"Unsuccessfull",mdb.lastError());
                       QMessageBox::critical(0,"Database Error",mdb.lastError().text());
                       qDebug()<<mdb.lastError().text();
                              }

               }

}
