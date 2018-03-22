#ifndef Inyectable_H
#define Inyectable_H
#include "Farmacia.h"

class Inyectable : public Farmacia { //cabecera de la clase Inyectable deriva de Farmacia
private:
	string Cantidad;
public:
	Inyectable();
	Inyectable(string, string, string);
	~Inyectable();
	
	void setCantidad(string);
	string getCantidad();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();	
};

Inyectable::Inyectable() : Farmacia(){
	Inyectable::setCantidad("");
} 

Inyectable::Inyectable(string Codigo, string medicamento, string cantidad) : Farmacia(Codigo, medicamento){
	Inyectable::setCantidad(cantidad);
} 

Inyectable::~Inyectable(){} 

void Inyectable::setCantidad(string cantidad){
	this->Cantidad = cantidad;
}

string Inyectable::getCantidad(){
	return this->Cantidad;
}

string Inyectable::soy(){
	return "Inyeccion";
}

void Inyectable::ImprimirT(){
	Farmacia::ImprimirT();
	cout<<setfill(' ')<<setw(10)<<getCantidad()<<"|"
		<<setfill(' ')<<setw(10)<<soy()<<"|\n";
	cout<<"+----+-------+-------------------------+--------------------+----------+----------+\n";
}

void Inyectable::encabezado(){
	cout<<"+----+--------+-------------------------+--------------------+----------+----------+\n"
		<<"|Pos.| codigo |       Medicamento       | Lugar del Hospital | Cantidad |   Tipo   |\n"
		<<"+----+--------+-------------------------+--------------------+----------+----------+\n";
}

#endif
