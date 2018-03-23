#ifndef  Personas_H
#define  Personas_H
#include "Hospital.h"

class Personas:public Hospital{
private:
	string Nombre,Apellido,Direccion;
	char sexo;
	short edad,telefono;
	
public:
	Personas();
	Personas(string,string,string,string,char,short,short);
	~Personas();
	
	void setNombre(string);
	string getNombre();
	
	void setApellido(string);
	string getApellido();
	
	void setDireccion(string);
	string getDireccion();
	
	void setsexo(char);
	char getsexo();
	
	void setedad(short);
	short getedad();
	
	void settelefono(short);
	short gettelefono();
	
	virtual void ImprimirT()=0;
	virtual void encabezado()=0;
	virtual string soy()=0;
};

Personas::Personas():Hospital(){
	this->Nombre = "";
	this->Apellido = "";
	this->Direccion = "";
	this->sexo =' ';
	this->edad = 0;
	this->telefono = 0;
}

Personas::Personas(string Code,string name,string Lname,string Direc,char sex,short age,short tel):Hospital(Code){
	this->Nombre = name;
	this->Apellido = Lname;
	this->Direccion = Direc;
	this->sexo =sex;
	this->edad = age;
	this->telefono = tel;
}

Personas::~Personas(){}

void Personas::setNombre(string name){
	this->Nombre= name;
}
void Personas::setApellido(string Lname){
	this->Apellido= Lname;
}
void Personas::setDireccion(string Direc){
	this->Direccion= Direc;
}
void Personas::setsexo(char sex){
	this->sexo= sex;
}
void Personas::setedad(short age){
	this->edad= age;
}
void Personas::settelefono(short tel){
	this->telefono= tel;
}

string Personas::getNombre(){
	return this->Nombre;
}
string Personas::getApellido(){
	return this->Apellido;
}
string Personas::getDireccion(){
	return this->Direccion;
}
char Personas::getsexo(){
	return this->sexo;
}
short Personas::getedad(){
	return this->edad;
}
short Personas::gettelefono(){
	return this->telefono;
}

void Personas::ImprimirT(){
	Hospital::Imprimir();
	cout<<setfill(' ')<<setw(25)<<getNombre()<<"|"
		<<setfill(' ')<<setw(25)<<getApellido()<<"|"
		<<setfill(' ')<<setw(35)<<getDireccion()<<"|"
		<<setfill(' ')<<setw(6)<<getsexo()<<"|"
		<<setfill(' ')<<setw(6)<<getedad()<<"|"
		<<setfill(' ')<<setw(10)<<gettelefono()<<"|\n";
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+\n";
}

void Personas::encabezado(){
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+\n"
		<<"|Pos.| codigo |          Nombre         |        Apellido         |             Direccion             | Sexo | Edad | Telefono |\n"
		<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+\n";
}
#endif

