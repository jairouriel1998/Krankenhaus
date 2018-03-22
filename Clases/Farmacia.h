#ifndef Farmacia_H
#define Farmacia_H
#include "Hospital.h"

class Farmacia:public Hospital{
private:
	string Medicamento;
public:
	Farmacia();
	Farmacia(string,string);
	~Farmacia();
	
	void setMedicamento(string);
	string getMedicamento();
	
	virtual void encabezado()=0;
	virtual string soy()=0;
	virtual void ImprimirT()=0;
};

Farmacia::Farmacia():Hospital(){
	this->Medicamento="";
}

Farmacia::Farmacia(string Code, string Medicine):Hospital(Code){
	this->Medicamento = Medicine;
}

Farmacia::~Farmacia(){}

void Farmacia::setMedicamento(string Medicine){
	this->Medicamento = Medicine;
}

string Farmacia::getMedicamento(){
	return this->Medicamento;
}
string Farmacia::soy(){
	return "Farmacia";
}

void Farmacia::ImprimirT(){
	Hospital::Imprimir();
	cout<<setfill(' ')<<setw(25)<<getMedicamento()<<"|"
		<<setfill(' ')<<setw(20)<<soy()<<"|\n";
	cout<<"+----+-------+-------------------------+----------+\n";
}

void Farmacia::encabezado(){
	cout<<"+----+--------+-------------------------+--------------------+\n"
		<<"|Pos.| codigo |       Medicamento       | Lugar del Hospital |\n"
		<<"+----+--------+-------------------------+--------------------+\n";
}

#endif
