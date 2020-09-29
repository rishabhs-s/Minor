#include "update.h"
#include "ui_update.h"

Update::Update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update)
{
    ui->setupUi(this);
}

Update::~Update()
{
    delete ui;
}

void Update::on_show_clicked()
{
    QString username ="rishabh0512";
    QString height ;
    QString weight ;
    QString glucose;
    QString bp;
    QString pulse;
    QString medical_history;
    QString allergies;

    QSqlDatabase mdb=QSqlDatabase::addDatabase("QSQLITE");
           mdb.setDatabaseName("E:/Minor project/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
           if(mdb.open())
           {
               QSqlQuery query;
               query.exec("SELECT * FROM records where username='"+username+"'");
               while (query.next()) {
                       height= query.value(6).toString();
                       weight= query.value(7).toString();
                       bp= query.value(8).toString();
                       glucose= query.value(9).toString();
                       pulse= query.value(10).toString();
                       medical_history= query.value(11).toString();
                       allergies= query.value(12).toString();



           }

               ui->height->setText(height);
               ui->weight->setPlaceholderText(weight);
               ui->glucose->setPlaceholderText(glucose);
               ui->bp->setPlaceholderText(bp);
               ui->pulse->setPlaceholderText(pulse);
               ui->medical_history->setPlaceholderText(medical_history);
               ui->allergies->setPlaceholderText(allergies);

}
}

void Update::on_Updaterec_clicked()
    {
        QString username ="rishabh0512";
        QString height ;
        QString weight ;
        QString glucose;
        QString bp;
        QString pulse;
        QString medical_history;
        QString allergies;

        QSqlDatabase mdb=QSqlDatabase::addDatabase("QSQLITE");
               mdb.setDatabaseName("E:/Minor project/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
               if(mdb.open())
               {
                   QSqlQuery query;
                   query.exec("SELECT * FROM records where username='"+username+"'");
                   while (query.next()) {
                       QString height=ui->height->text();
                       QString weight=ui->weight->text();
                       QString glucose=ui->glucose->text();
                       QString bp=ui->bp->text();
                       QString pulse=ui->pulse->text();
                       QString medical_history=ui->medical_history->text();
                       QString allergies=ui->allergies->text();


               }
                   query.prepare("update records set height=:height,weight=:weight,glucose=:glucose,bp=:bp,pulse=:pulse,medical_history=:medical_history,allergies=:allergies where username='"+username+"'");
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


