#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_update_clicked()
{
    updaterec =new Update(this);
    updaterec->show();
}

void Dashboard::on_view_clicked()
{
    retrieverec =new Retrieve(this);
    retrieverec->show();
}

