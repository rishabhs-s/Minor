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
