#include "salas.h"
#include "ui_salas.h"

#include "krankenhaus.h"
#include "ui_krankenhaus.h"

salas::salas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::salas)
{
    ui->setupUi(this);
}

salas::~salas()
{
    delete ui;
}

void salas::on_regresar_clicked(){
    Krankenhaus *kra = new Krankenhaus();
    kra->show();
    this->close();
}
