#ifndef Capsula_H
#define Capsula_H
#include "Farmacia.h"

class Capsula : public Farmacia { //cabecera de la clase Capsula deriva de Farmacia
private:
	string Cantidad;
public:
	Capsula();
	Capsula(string, string, string);
	~Capsula();
	
	void setCantidad(string);
	string getCantidad();
	
	virtual void ImprimirT();
	virtual string soy();
	virtual void encabezado();
};

Capsula::Capsula() : Farmacia(){
	Capsula::setCantidad("");
}//constructor vacio 

Capsula::Capsula(string Code, string Medicine, string cantidad) : Farmacia(Code, Medicine){
	Capsula::setCantidad(cantidad);
} // constructor full

Capsula::~Capsula(){} //destructor

void Capsula::setCantidad(string cantidad){
	this->Cantidad = cantidad;
}

string Capsula::getCantidad(){
	return this->Cantidad;
}

string Capsula::soy(){
	return "Capsula";
}

void Capsula::ImprimirT(){
	Farmacia::ImprimirT();
	cout<<setfill(' ')<<setw(10)<<getCantidad()<<"|"
	<<setfill(' ')<<setw(10)<<soy()<<"|\n";
	cout<<"+----+-------+-------------------------+--------------------+----------+----------+\n";
}

void Capsula::encabezado(){
	cout<<"+----+--------+-------------------------+--------------------+----------+----------+\n"
		<<"|Pos.| codigo |       Medicamento       | Lugar del Hospital | Cantidad |   Tipo   |\n"
		<<"+----+--------+-------------------------+--------------------+----------+----------+\n";
}
#endif
