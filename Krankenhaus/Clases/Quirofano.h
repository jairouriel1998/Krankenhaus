#ifndef Quirofano_H
#define Quirofano_H
#include "Salas.h"

class Quirofano : public Salas { //cabecera de la clase Quirofano deriva de Salas
private:
	string N_quirofano;
public:
	Quirofano();
	Quirofano(string,string, string);
	~Quirofano();
	
	void setN_quirofano(string);
	string getN_quirofano();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Quirofano::Quirofano() : Salas(){
	Quirofano::setN_quirofano("");
}

Quirofano::Quirofano(string Code,string n, string n_quirofano) : Salas(Code,n){
	Quirofano::setN_quirofano(n_quirofano);
}

Quirofano::~Quirofano(){} //destructor

void Quirofano::setN_quirofano(string n_quirofano){
	this->N_quirofano = n_quirofano;
}

string Quirofano::getN_quirofano(){
	return this->N_quirofano;
}

string Quirofano::soy(){
	return "Quirofano";
}
void Quirofano::ImprimirT(){
	Salas::ImprimirT();
	cout<<setfill(' ')<<setw(15)<<soy()<<"|"
		<<setfill(' ')<<setw(10)<<getN_quirofano()<<"|\n";
	cout<<"+----+--------+--------------------+---------------+-----+\n";
}

void Quirofano::encabezado(){
	cout<<"+----+--------+--------------------+---------------+-----+\n"
		<<"|Pos.| codigo | Lugar del Hospital |     Sala      |  N° |\n"
		<<"+----+--------+--------------------+---------------+-----+\n";
}
#endif
