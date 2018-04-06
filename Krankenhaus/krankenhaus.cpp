#include "krankenhaus.h"
#include "ui_krankenhaus.h"

#include "people.h"
#include "ui_people.h"

#include "empleado.h"
#include "ui_empleado.h"

#include "farmacia.h"
#include "ui_farmacia.h"

#include "salas.h"
#include "ui_salas.h"


Krankenhaus::Krankenhaus(QWidget *parent) : QMainWindow(parent), ui(new Ui::Krankenhaus){
    ui->setupUi(this);
}

Krankenhaus::~Krankenhaus(){
    delete ui;
}

void Krankenhaus::on_ir_pacientes_clicked(){
    People *paciente =  new People();
    paciente->show();
    this->close();
}

void Krankenhaus::on_salir_clicked(){
    exit(0);
}

void Krankenhaus::on_ir_empleados_clicked(){
    Empleado *empleado = new Empleado();
    empleado->show();
    this->close();
}

void Krankenhaus::on_ir_farmacia_clicked(){
    Farmacia *farmacia = new Farmacia();
    farmacia->show();
    this->close();
}

void Krankenhaus::on_ir_salas_clicked(){
    salas *sala = new salas();
    sala->show();
    this->close();
}
