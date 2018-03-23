#ifndef RayosX_H
#define RayosX_H
#include "Hospital.h"

class RayosX:public Hospital{
private:
	string Tipo;
public:
	RayosX();
	RayosX(string,string);
	~RayosX();
	
	void setTipo(string);
	string getTipo();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

RayosX::RayosX():Hospital(){
	this->Tipo= "";
}
RayosX::RayosX(string Code,string T):Hospital(Code){
	this->Tipo = T;
}

RayosX::~RayosX(){}

void RayosX::setTipo(string T){
	this->Tipo = T; 
}

string RayosX::getTipo(){
	return this->Tipo;
}
string RayosX::soy(){
	return "RayosX";
}

void RayosX::ImprimirT(){
	Hospital::Imprimir();
	cout<<setfill(' ')<<setw(21)<<getTipo()<<"|\n"
		<<setfill(' ')<<setw(10)<<soy()<<"|\n";
	cout<<"+----+--------+---------------------+\n";
}

void RayosX::encabezado(){
	cout<<"+----+--------+---------------------+----------+\n"
		<<"|Pos.| codigo |   Tipo de Rayos X   |   Sala   |\n"
		<<"+----+--------+---------------------+----------+\n";
}

#endif
