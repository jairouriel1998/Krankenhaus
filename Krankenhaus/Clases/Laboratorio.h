#ifndef Laboratorio_H
#define Laboratorio_H
#include "Hospital.h"

class Laboratorio:public Hospital{
private:
	string TExamen;
public:
	Laboratorio();
	Laboratorio(string,string);
	~Laboratorio();
	
	void setTExamen(string);
	string getTExamen();
	
	virtual void ImprimirT();
	virtual string soy();
	virtual void encabezado();
};

Laboratorio::Laboratorio():Hospital(){
	this->TExamen = "";
}

Laboratorio::Laboratorio(string Code,string Tipo):Hospital(Code){
	this->TExamen = Tipo;
}

Laboratorio::~Laboratorio(){}

void Laboratorio::setTExamen(string Tipo){
	this->TExamen= Tipo;
}

string Laboratorio::getTExamen(){
	return this->TExamen;
}

string Laboratorio::soy(){
	return "Laboratorio";
}

void Laboratorio::ImprimirT(){
	Hospital::Imprimir();
	cout<<setfill(' ')<<setw(20)<<getTExamen()<<"|"
		<<setfill(' ')<<setw(20)<<soy()<<"|\n";
	cout<<"+----+--------+--------------------+--------------------+\n";
}

void Laboratorio::encabezado(){
	cout<<"+----+--------+--------------------+--------------------+\n"
		<<"|Pos.| codigo |   Tipo de Examen   | Lugar del Hospital |\n"
		<<"+----+--------+--------------------+--------------------+\n";
}
#endif
