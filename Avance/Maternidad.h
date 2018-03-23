#ifndef Maternidad_H
#define Maternidad_H
#include "Salas.h"

class Maternidad : public Salas { //cabecera de la clase Maternidad deriva de Salas
private:
	string Parto;
public:
	Maternidad();
	Maternidad(string,string, string);
	~Maternidad();
	
	void setParto(string);
	string getParto();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Maternidad::Maternidad() : Salas(){
	Maternidad::setParto("");
}//constructor vacio 

Maternidad::Maternidad(string Code,string n, string parto) : Salas(Code,n){
	Maternidad::setParto(parto);
} // constructor full

Maternidad::~Maternidad(){} //destructor

void Maternidad::setParto(string parto){
	this->Parto = parto;
}

string Maternidad::getParto(){
	return this->Parto;
}

string Maternidad::soy(){
	return "Maternidad";
}
void Maternidad::ImprimirT(){
	Salas::ImprimirT();
	cout<<setfill(' ')<<setw(15)<<soy()<<"|"
		<<setfill(' ')<<setw(10)<<getParto()<<"|\n";
	cout<<"+----+--------+--------------------+-----+---------------+---------------+\n";
}

void Maternidad::encabezado(){
	cout<<"+----+--------+--------------------+-----+---------------+---------------+\n"
		<<"|Pos.| codigo | Lugar del Hospital |  N° |     Sala      |   Tipo Parto  |\n"
		<<"+----+--------+--------------------+-----+---------------+---------------+\n";
}

#endif

