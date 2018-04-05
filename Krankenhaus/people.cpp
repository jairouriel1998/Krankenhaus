#include "people.h"
#include "ui_people.h"

#include "krankenhaus.h"
#include "ui_krankenhaus.h"

People::People(QWidget *parent) : QWidget(parent), ui(new Ui::People){
    ui->setupUi(this);
}

People::~People(){
    delete ui;
}

void People::on_regresar_clicked(){
    Krankenhaus *principal = new Krankenhaus();
    principal->show();
    this->close();
}
