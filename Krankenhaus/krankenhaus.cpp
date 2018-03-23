#include "krankenhaus.h"
#include "ui_krankenhaus.h"

Krankenhaus::Krankenhaus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Krankenhaus)
{
    ui->setupUi(this);
}

Krankenhaus::~Krankenhaus()
{
    delete ui;
}
