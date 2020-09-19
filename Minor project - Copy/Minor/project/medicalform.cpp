#include "medicalform.h"
#include "ui_medicalform.h"
#include "signup.h"

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
               mdb.setDatabaseName("E:/Minor project/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
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

                   query.prepare("INSERT INTO records(height,weight,glucose,bp,pulse,medical_history,allergies)"
                                 "VALUES(:height,:weight,:glucose,:bp,:pulse,:medical_history,:allergies)" );
                   /* where username ='"+username+"'*/


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
                                   QMessageBox::warning(this,"Unsuccessfull","Data not inserted");
                              }

               }

}
