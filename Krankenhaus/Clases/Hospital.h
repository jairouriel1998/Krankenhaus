#ifndef Hospital_H
#define Hospital_H
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::setfill;
using std::string;

class Hospital{
private:
	string Codigo;
public:	
	Hospital();
	Hospital(string);
	~Hospital();
	
	void setCodigo(string);
	string getCodigo();
	
	void Imprimir();
	virtual void ImprimirT()=0;
	virtual void encabezado()=0;
	virtual string soy()=0;
};

Hospital::Hospital(){
	this->Codigo="";
}

Hospital::Hospital(string Code){
	this->Codigo = Code; 
}

Hospital::~Hospital(){}

void Hospital::setCodigo(string Code){
	this->Codigo = Code;
}

string Hospital::getCodigo(){
	return this->Codigo;
}

void Hospital::Imprimir(){
	cout<<"|"<<setfill(' ')<<setw(8)<<getCodigo()<<"|";
}
#endif 
