#ifndef Medico_H
#define Medico_H
#include "Empleados.h"

class Medico:public Empleados{
private:
	string Especialidad;
public:
	Medico();
	Medico(string,string,string,string,char,short,short,int,string);
	~Medico();
	
	void setEspecialidad(string);
	string getEspecialidad();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Medico::Medico():Empleados(){
	this->Especialidad ="";
}

Medico::Medico(string Code,string name,string Lname,string Direc,char sex,short age,short tel,int Sal,string Es)
	:Empleados(Code,name,Lname,Direc,sex,age,tel,Sal){
	this->Especialidad = Es;	
}

Medico::~Medico(){}

void Medico::setEspecialidad(string Es){
	this->Especialidad= Es;
}

string Medico::getEspecialidad(){
	return this->Especialidad;
}

string Medico::soy(){
	return "Medico";
}

void Medico::ImprimirT(){
	Empleados::ImprimirT();
	cout<<setfill(' ')<<setw(15)<<getEspecialidad()<<"|"
		<<setfill(' ')<<setw(10)<<soy()<<"|\n";
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+---------------+----------+\n";
}

void Medico::encabezado(){
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+---------------+----------+\n"
		<<"|Pos.| codigo |          Nombre         |        Apellido         |             Direccion             | Sexo | Edad | Telefono | Salario |  Especialidad | Empleado |\n"
		<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+---------------+----------+\n";
}
#endif
