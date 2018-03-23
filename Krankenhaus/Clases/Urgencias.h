#ifndef Urgencias_H
#define Urgencias_H
#include "Salas.h"

class Urgencias : public Salas { //cabecera de la clase Urgencias deriva de Salas
private:
	string Emergencia;
public:
	Urgencias();
	Urgencias(string,string, string);
	~Urgencias();
	
	void setEmergencia(string);
	string getEmergencia();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Urgencias::Urgencias() : Salas(){
	Urgencias::setEmergencia("");
}//constructor vacio 

Urgencias::Urgencias(string Code,string n, string emergencia) : Salas(Code,n){
	Urgencias::setEmergencia(emergencia);
} // constructor full

Urgencias::~Urgencias(){} //destructor

void Urgencias::setEmergencia(string emergencia){
	this->Emergencia = emergencia;
}

string Urgencias::getEmergencia(){
	return this->Emergencia;
}

string Urgencias::soy(){
	return "Urgencia";
}

void Urgencias::ImprimirT(){
	Salas::ImprimirT();
	cout<<setfill(' ')<<setw(15)<<soy()<<"|"
		<<setfill(' ')<<setw(10)<<getEmergencia()<<"|\n";
	cout<<"+----+--------+--------------------+-----+---------------+---------------+\n";
}

void Urgencias::encabezado(){
	cout<<"+----+--------+--------------------+-----+---------------+---------------+\n"
		<<"|Pos.| codigo | Lugar del Hospital |  N° |     Sala      |   Emergencia  |\n"
		<<"+----+--------+--------------------+-----+---------------+---------------+\n";
}

#endif
