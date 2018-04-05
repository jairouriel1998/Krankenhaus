#include "farmacia.h"
#include "ui_farmacia.h"

Farmacia::Farmacia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Farmacia)
{
    ui->setupUi(this);
}

Farmacia::~Farmacia()
{
    delete ui;
}
