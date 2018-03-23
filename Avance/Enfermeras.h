#ifndef Enfermeras_H
#define Enfermeras_H
#include "Empleados.h"

class Enfermeras:public Empleados{
public:
	Enfermeras();
	Enfermeras(string,string,string,string,char,short,short,int);
	~Enfermeras();
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Enfermeras::Enfermeras():Empleados(){}

Enfermeras::Enfermeras(string Code,string name,string Lname,string Direc,char sex,short age,short tel,int Sal)
	:Empleados(Code,name,Lname,Direc,sex,age,tel,Sal){}

Enfermeras::~Enfermeras(){}

string Enfermeras::soy(){
	return "Enfermera";
}

void Enfermeras::ImprimirT(){
	Empleados::ImprimirT();
	cout<<setfill(' ')<<setw(10)<<soy()<<"|\n";
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+----------+\n";
}

void Enfermeras::encabezado(){
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+\n"
		<<"|Pos.| codigo |          Nombre         |        Apellido         |             Direccion             | Sexo | Edad | Telefono | Salario | Empleado |\n"
		<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+\n";
}
#endif
