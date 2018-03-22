#ifndef Salas_H
#define Salas_H
#include "Hospital.h"

class Salas:public Hospital{
private:
	string numero;
public:
	Salas();
	Salas(string,string);
	~Salas();
	
	void setnumero(string);
	string getnumero();
	
	virtual void ImprimirT()=0;
	virtual void encabezado()=0;
	virtual string soy()=0;
};

Salas::Salas():Hospital(){
	this->numero = " ";
}

Salas::Salas(string Code,string n):Hospital(Code){
	this->numero = n;
}

Salas::~Salas(){}

void Salas::setnumero(string n){
	this->numero= n;
}

string Salas::getnumero(){
	return this->numero;
}

string Salas::soy(){
	return "Sala";
}

void Salas::ImprimirT(){
	Hospital::Imprimir();
	cout<<setfill(' ')<<setw(20)<<soy()<<"|"
		<<setfill(' ')<<setw(5)<<getnumero()<<"|\n";
	cout<<"+----+--------+-------------------------+--------------------+-----+\n";
}

void Salas::encabezado(){
	cout<<"+----+--------+--------------------+-----+\n"
		<<"|Pos.| codigo | Lugar del Hospital |  N° |\n"
		<<"+----+--------+--------------------+-----+\n";
}
#endif

