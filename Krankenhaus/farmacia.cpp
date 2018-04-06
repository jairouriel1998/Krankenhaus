#include "farmacia.h"
#include "ui_farmacia.h"

#include "krankenhaus.h"
#include "ui_krankenhaus.h"

Farmacia::Farmacia(QWidget *parent) : QWidget(parent), ui(new Ui::Farmacia){
    ui->setupUi(this);
}

Farmacia::~Farmacia(){
    delete ui;
}

void Farmacia::on_regresar_clicked(){
    Krankenhaus *kra = new Krankenhaus();
    kra->show();
    this->close();
}
