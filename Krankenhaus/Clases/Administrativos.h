#ifndef Administrativos_H
#define Administrativos_H
#include "Empleados.h"

class Administrativos:public Empleados{
private:
	string Area;
public:
	Administrativos();
	Administrativos(string,string,string,string,char,short,short,int,string);
	~Administrativos();
	
	void setArea(string);
	string getArea();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};


Administrativos::Administrativos():Empleados(){
	this->Area ="";
}

Administrativos::Administrativos(string Code,string name,string Lname,string Direc,char sex,short age,short tel,int Sal,string A)
	:Empleados(Code,name,Lname,Direc,sex,age,tel,Sal){
	this->Area = A;	
}

Administrativos::~Administrativos(){}

void Administrativos::setArea(string A){
	this->Area= A;
}

string Administrativos::getArea(){
	return this->Area;
}

string Administrativos::soy(){
	return "Administrativo";
}

void Administrativos::ImprimirT(){
	Empleados::ImprimirT();
	cout<<setfill(' ')<<setw(15)<<getArea()<<"|"
		<<setfill(' ')<<setw(15)<<soy()<<"|\n";
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+---------------+---------------+\n";
}

void Administrativos::encabezado(){
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+---------------+---------------+\n"
		<<"|Pos.| codigo |          Nombre         |        Apellido         |             Direccion             | Sexo | Edad | Telefono | Salario |     Area      |    Empleado   |\n"
		<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+---------------+---------------+\n";
}
#endif

