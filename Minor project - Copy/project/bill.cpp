#include "bill.h"
#include "ui_bill.h"

Bill::Bill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bill)
{
    ui->setupUi(this);
}

Bill::~Bill()
{
    delete ui;
}

void Bill::on_bill_clicked()
{
    {
        QString one=ui->one->text();
        QString two=ui->two->text();
        QString three=ui->three->text();
        QString four=ui->four->text();
        QString five=ui->five->text();
      //  QString onep;
        QString ode1;
        QString ode2;
        QString ode3;
        QString ode4;
        QString ode5;
        float a,b,c,d,e;

        QSqlDatabase meddb=QSqlDatabase::addDatabase("QSQLITE");
      meddb.setDatabaseName( "E:/Minor project/Minor/Minor project - Copy/project/medi.sqlite");
      if(meddb.open())
      {
          QSqlQuery query;
            if(query.exec("select * from medicine where medname='"+one+"'"))
              while (query.next())
              {
                  ode1=query.value(1).toString();
              }
           ui->onep->setText(ode1);

           if(query.exec("select * from medicine where medname='"+two+"'"))
             while (query.next())
             {
                 ode2=query.value(1).toString();
             }
          ui->twop->setText(ode2);

          if(query.exec("select * from medicine where medname='"+three+"'"))
            while (query.next())
            {
                ode3=query.value(1).toString();
            }
         ui->threep->setText(ode3);

         if(query.exec("select * from medicine where medname='"+four+"'"))
           while (query.next())
           {
               ode4=query.value(1).toString();
           }
        ui->fourp->setText(ode4);

        if(query.exec("select * from medicine where medname='"+five+"'"))
          while (query.next())
          {
              ode5=query.value(1).toString();
          }
       ui->fivep->setText(ode5);


      a=ode1.toFloat();
      b=ode2.toFloat();
      c=ode3.toFloat();
      d=ode4.toFloat();
      e=ode5.toFloat();


     float sum=a+b+c+d+e+200;
     QString sums;
     sums.setNum(sum);
     //sum.toString()
      ui->sums->setText(sums);
      qDebug()<<sums;

}
}
}
