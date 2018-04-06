#include "people.h"
#include "ui_people.h"

#include "krankenhaus.h"
#include "ui_krankenhaus.h"

People::People(QWidget *parent) : QWidget(parent), ui(new Ui::People){
    ui->setupUi(this);
    control = new controller();
    list = control->getPacientes();
    totalRecord = list.size();
    if(totalRecord!=0){
        currentIndex=0;
        currentPerson=list.at(currentIndex);
        populateUI();
    }
    ui->nombres->setEnabled(false);
    ui->apellidos->setEnabled(false);
    ui->edad->setEnabled(false);
    ui->sexo->setEnabled(false);
    ui->telefono->setEnabled(false);
    ui->direccion->setEnabled(false);
    ui->cama->setEnabled(false);
    ui->historial->setEnabled(false);
    ui->ingreso->setEnabled(false);
    ui->familiar->setEnabled(false);
    ui->sala->setEnabled(false);
    ui->medicamento->setEnabled(false);
    ui->medico->setEnabled(false);

    connect(ui->anterior, SIGNAL(clicked()),this, SLOT(on_anterior_clicked()));
    connect(ui->siguiente, SIGNAL(clicked()),this, SLOT(on_siguiente_clicked()));
    connect(ui->nuevo, SIGNAL(clicked()),this, SLOT(on_nuevo_clicked()));
    connect(ui->editar, SIGNAL(clicked()),this, SLOT(on_editar_clicked()));
    connect(ui->eliminar, SIGNAL(clicked()),this, SLOT(on_eliminar_clicked()));
    connect(ui->regresar, SIGNAL(clicked()),this, SLOT(on_regresar_clicked()));
}


People::~People(){
    control->closeConnection();
    delete control;
    delete ui;
}

void People::on_regresar_clicked(){
    Krankenhaus *principal = new Krankenhaus();
    principal->show();
    this->close();
}


void People::populateUI(){
    ui->nombres->setText(currentPerson.getNombres());
    ui->apellidos->setText(currentPerson.getApellidos());
    ui->edad->setText(QString::number(currentPerson.getEdad()));
    ui->sexo->setText(currentPerson.getSexo());
    ui->telefono->setText(currentPerson.getTelefono());
    ui->direccion->setText(currentPerson.getDireccion());
    ui->cama->setText(QString::number(currentPerson.getN_cama()));
    ui->historial->setText(currentPerson.getHistorial());
    ui->ingreso->setText(currentPerson.getFecha_ingreso());
    ui->familiar->setText(currentPerson.getFamiliar());
    ui->sala->setText(currentPerson.getSala());
    ui->medicamento->setText(currentPerson.getMedicamento());
    ui->medico->setText(currentPerson.getMedico());
}

void People::populateRecord(){
    if(totalRecord!=0 && currentIndex < totalRecord){
        currentPerson = list.at(currentIndex);
        populateUI();
    }
}

void People::on_anterior_clicked(){
    currentIndex--;
    if(currentIndex<0){
        currentIndex = totalRecord-1;
    }
    populateRecord();
}

void People::on_siguiente_clicked(){
    currentIndex++;
    if(currentIndex >= totalRecord){
        currentIndex = 0;
    }
    populateRecord();
}

void People::on_nuevo_clicked(){}

void People::on_editar_clicked(){
    ui->nombres->setEnabled(true);
    ui->apellidos->setEnabled(true);
    ui->edad->setEnabled(true);
    ui->sexo->setEnabled(true);
    ui->telefono->setEnabled(true);
    ui->direccion->setEnabled(true);
    ui->cama->setEnabled(true);
    ui->historial->setEnabled(true);
    ui->ingreso->setEnabled(true);
    ui->familiar->setEnabled(true);
    ui->sala->setEnabled(true);
    ui->medicamento->setEnabled(true);
    ui->medico->setEnabled(true);
}

void People::on_eliminar_clicked(){}
