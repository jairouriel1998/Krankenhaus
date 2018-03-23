#include "personas.h"
#include "ui_personas.h"

Personas::Personas(QWidget *parent) :
    QDockWidget(parent),
    ui(new Ui::Personas)
{
    ui->setupUi(this);
}

Personas::~Personas()
{
    delete ui;
}
