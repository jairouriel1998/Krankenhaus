#include "krankenhaus.h"
#include "ui_krankenhaus.h"

#include "people.h"
#include "ui_people.h"

Krankenhaus::Krankenhaus(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Krankenhaus)
{
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
