#include "salas.h"
#include "ui_salas.h"

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
