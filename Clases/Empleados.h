#ifndef Empleado_H
#define Empleado_H
#include "Personas.h"

class Empleados:public Personas{
private:
	int Salario;
public:
	Empleados();
	Empleados(string,string,string,string,char,short,short,int);
	~Empleados();
	
	void setSalario(int);
	int getSalario();
	
	virtual void ImprimirT()=0;
	virtual void encabezado()=0;
	virtual string soy()=0;
};

Empleados::Empleados():Personas(){
	this->Salario = 0;
}

Empleados::Empleados(string Code,string name,string Lname,string Direc,char sex,short age,short tel,int Sal):Personas(Code,name,Lname,Direc,sex,age,tel){
	this->Salario= Sal;
}

Empleados::~Empleados(){}

void Empleados::setSalario(int Sal){
	this->Salario= Sal;
}

int Empleados::getSalario(){
	return this->Salario;
}

string Empleados::soy(){
	return "Empleado";
}

void Empleados::ImprimirT(){
	Personas::ImprimirT();
	cout<<setfill(' ')<<setw(8)<<getSalario()<<"|"
		<<setfill(' ')<<setw(10)<<soy()<<"|\n";
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+\n";
}

void Empleados::encabezado(){
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+\n"
		<<"|Pos.| codigo |          Nombre         |        Apellido         |             Direccion             | Sexo | Edad | Telefono | Salario |    Soy   |\n"
		<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+\n";
}
#endif
