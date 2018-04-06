#include "empleado.h"
#include "ui_empleado.h"

#include "krankenhaus.h"
#include "ui_krankenhaus.h"

Empleado::Empleado(QWidget *parent) : QWidget(parent), ui(new Ui::Empleado){
    ui->setupUi(this);
}

Empleado::~Empleado()
{
    delete ui;
}

void Empleado::on_regresar_4_clicked(){
    Krankenhaus *kra = new Krankenhaus();
    kra->show();
    this->close();
}
