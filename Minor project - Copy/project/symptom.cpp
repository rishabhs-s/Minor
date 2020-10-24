#include "symptom.h"
#include "ui_symptom.h"

Symptom::Symptom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Symptom)
{
    ui->setupUi(this);
}

Symptom::~Symptom()
{
    delete ui;
}

void Symptom::on_symptomcheck_clicked()
{
   // QTextStream stream(stdout);

 if(ui->checkBox->isChecked()&&ui->checkBox_2->isChecked()&&ui->checkBox_3->isChecked()&&ui->checkBox_4->isChecked()&&ui->checkBox_5->isChecked()&&ui->checkBox_6->isChecked())
  {
   ui -> txt -> setText("This may be TYPHOID,\n We suggest you to VISIT DOCTOR");
   }
else if(ui->checkBox->isChecked()&&ui->checkBox_4->isChecked()&&ui->checkBox_7->isChecked())
   {
   ui -> txt -> setText("This may be PNEMONIA,\n We suggest you to VISIT DOCTOR");
   }
 else if(ui->checkBox_2->isChecked()&&ui->checkBox_7->isChecked())
    {
   ui -> txt -> setText("This may be COMMON COLD, \n We suggest you to TAKE MEDICINE AND REST");
    }
 else if(ui->checkBox->isChecked()&&ui->checkBox_7->isChecked()&&ui->checkBox_8->isChecked()&&ui->checkBox_9->isChecked()&&ui->checkBox_10->isChecked())
    {
   ui -> txt -> setText("This may be CHEST INFECTION, \n We suggest you to VISIT DOCTOR");
    }
 else if(ui->checkBox->isChecked()&&ui->checkBox_2->isChecked()&&ui->checkBox_3->isChecked()&&ui->checkBox_4->isChecked()&&ui->checkBox_7->isChecked()&&ui->checkBox_9->isChecked())
    {
   ui -> txt -> setText("This may be FLU / SOMETHING SERIOUS, \n We suggest you to VISIT DOCTOR");
    }
 else if(ui->checkBox->isChecked()&&ui->checkBox_2->isChecked()&&ui->checkBox_3->isChecked()&&ui->checkBox_5->isChecked()&&ui->checkBox_10->isChecked())
    {
   ui -> txt -> setText("This may be FOOD POISONING,\n We suggest you to VISIT DOCTOR");
    }

else
{
    ui -> txt -> setText("This may be something SERIOUS,\n We suggest you to visit DOCTOR");

}
}
