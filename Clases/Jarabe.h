#ifndef Jarabe_H
#define Jarabe_H
#include "Farmacia.h"

class Jarabe : public Farmacia { //cabecera de la clase Jarabe deriva de Farmacia
private:
	string Cantidad;
public:
	Jarabe();
	Jarabe(string, string, string);
	~Jarabe();
	
	void setCantidad(string);
	string getCantidad();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Jarabe::Jarabe() : Farmacia(){
	Jarabe::setCantidad("");
}//constructor vacio 

Jarabe::Jarabe(string Code, string Medicine, string cantidad) : Farmacia(Code,Medicine){
	Jarabe::setCantidad(cantidad);
} // constructor full

Jarabe::~Jarabe(){} //destructor

void Jarabe::setCantidad(string cantidad){
	this->Cantidad = cantidad;
}

string Jarabe::getCantidad(){
	return this->Cantidad;
}

string Jarabe::soy(){
	return "Jarabe";
}

void Jarabe::ImprimirT(){
	Farmacia::ImprimirT();
	cout<<setfill(' ')<<setw(10)<<getCantidad()<<"|"
		<<setfill(' ')<<setw(10)<<soy()<<"|\n";
	cout<<"+----+-------+-------------------------+--------------------+----------+----------+\n";
}

void Jarabe::encabezado(){
	cout<<"+----+--------+-------------------------+--------------------+----------+----------+\n"
		<<"|Pos.| codigo |       Medicamento       | Lugar del Hospital | Cantidad |   Tipo   |\n"
		<<"+----+--------+-------------------------+--------------------+----------+----------+\n";
}

#endif
