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
   QString username ="abc";
    QString height ;
    QString weight ;
    QString glucose;
    QString bp;
    QString pulse;
    QString medical_history;
    QString allergies;

    QSqlDatabase mdb=QSqlDatabase::addDatabase("QSQLITE");
           mdb.setDatabaseName("F:/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
           if(mdb.open())
           {
               QSqlQuery query;
               query.exec("SELECT * FROM records where username='"+username+"'");
               while (query.next())
               {
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
               ui->medical_history->setText(medical_history);
               ui->allergies->setText(allergies);

//               ui->height->setPlaceholderText(height);
//               ui->weight->setPlaceholderText(weight);
//               ui->glucose->setPlaceholderText(glucose);
//               ui->bp->setPlaceholderText(bp);
//               ui->pulse->setPlaceholderText(pulse);
//               ui->medical_history->setPlaceholderText(medical_history);
//               ui->allergies->setPlaceholderText(allergies);

             qDebug()<<"height"<<height;
             qDebug()<<"weight"<<weight;
             qDebug()<<"glucose"<<glucose;
              qDebug()<<"bp"<<bp;


}
}

void Update::on_Updaterec_clicked()
    {
        QString username ="abc";
        QString height ;
        QString weight ;
        QString glucose;
        QString bp;
        QString pulse;
        QString medical_history;
        QString allergies;

        QSqlDatabase mdb=QSqlDatabase::addDatabase("QSQLITE");
               mdb.setDatabaseName("F:/Minor/Minor project - Copy/Minor/project/mdb.sqlite");
               if(mdb.open())
               {
                   QSqlQuery query;
                   query.exec("SELECT * FROM records where username='"+username+"'");
                   while (query.next()) {

                       height=ui->height->text();
                       weight=ui->weight->text();
                        glucose=ui->glucose->text();
                         bp=ui->bp->text();
                         pulse=ui->pulse->text();
                          medical_history=ui->medical_history->text();
                          allergies=ui->allergies->text();



//                       height=ui->height->placeholderText();       //changes been not done
//                        height=ui->height->text();
//                        ui->height->setText(height);

//                        weight=ui->weight->placeholderText();
//                         qDebug()<<"weight PH"<<weight;
//                        weight=ui->weight->text();                  //changes been done
//                          qDebug()<<"weight text"<<weight;
//                        ui->weight->setText(weight);
//                        qDebug()<<"weight setText"<<weight;





//                        glucose=ui->glucose->placeholderText();//changes been not done
//                        ui->glucose->setText(glucose);
//                        glucose=ui->glucose->text();

//                        bp=ui->bp->placeholderText();
//                        qDebug()<<"bp placeholder:"<<bp;
//                        ui->bp->setText(bp);                //changes been done
//                        qDebug()<<"bp setText:"<<bp;
//                        bp=ui->bp->text();
//                        qDebug()<<"bp text:"<<bp;
//                        ui->bp->setText(bp);
//                       qDebug()<<"bp setText(again):"<<bp;


//                        pulse=ui->pulse->placeholderText();
//                        pulse=ui->pulse->text();
//                        ui->pulse->setText(pulse);

//                        medical_history=ui->medical_history->placeholderText();
//                         medical_history=ui->medical_history->text();
//                         ui->medical_history->setText(medical_history);


//                        allergies=ui->allergies->placeholderText();
//                        allergies=ui->allergies->text();
//                        ui->allergies->setText(allergies);

//                        qDebug()<<"height"<<height;
//                        qDebug()<<"weight"<<weight;
//                        qDebug()<<"glucose"<<glucose;
//                         qDebug()<<"bp"<<bp;




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


