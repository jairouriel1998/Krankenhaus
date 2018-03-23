#ifndef ServiciosGenerales_H
#define ServiciosGenerales_H
#include "Empleados.h"

class ServiciosGenerales:public Empleados{
public:
	ServiciosGenerales();
	ServiciosGenerales(string,string,string,string,char,short,short,int);
	~ServiciosGenerales();
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

ServiciosGenerales::ServiciosGenerales():Empleados(){}

ServiciosGenerales::ServiciosGenerales(string Code,string name,string Lname,string Direc,char sex,short age,short tel,int Sal)
	:Empleados(Code,name,Lname,Direc,sex,age,tel,Sal){}

ServiciosGenerales::~ServiciosGenerales(){}

string ServiciosGenerales::soy(){
	return "ServiciosGenerales";
}

void ServiciosGenerales::ImprimirT(){
	Empleados::ImprimirT();
	cout<<setfill(' ')<<setw(20)<<soy()<<"|\n";
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+----------+--------------------+\n";
}

void ServiciosGenerales::encabezado(){
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+-------------------+\n"
		<<"|Pos.| codigo |          Nombre         |        Apellido         |             Direccion             | Sexo | Edad | Telefono | Salario |     Empleado      |\n"
		<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+---------+-------------------+\n";
}
#endif
