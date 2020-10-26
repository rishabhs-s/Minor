#include "retrieve.h"
#include "ui_retrieve.h"

Retrieve::Retrieve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Retrieve)
{
    ui->setupUi(this);
}

Retrieve::~Retrieve()
{
    delete ui;
}

void Retrieve::on_Retrieverec_clicked()
{
    QString username=ui->username->text();
    QString height ;
    QString weight ;
    QString glucose;
    QString bp;
    QString pulse;
    QString medical_history;
    QString allergies;

    QSqlDatabase mdb=QSqlDatabase::addDatabase("QSQLITE");
     mdb.setDatabaseName("F:/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
    //mdb.setDatabaseName( "E:/Minor project/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
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
               ui->weight->setText(weight);
               ui->glucose->setText(glucose);
               ui->bp->setText(bp);
               ui->pulse->setText(pulse);
               ui->medical->setText(medical_history);
               ui->allergies->setText(allergies);


}
}

void Retrieve::on_okay_clicked()
{
    hide();
}
