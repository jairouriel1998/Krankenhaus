#ifndef Psiquiatria_H
#define Psiquiatria_H
#include "Salas.h"

class Psiquiatria : public Salas { //cabecera de la clase Psiquiatria deriva de Salas
private:
	string Enfermedad_mental;
public:
	Psiquiatria();
	Psiquiatria(string,string, string);
	~Psiquiatria();
	
	void setEnfermedad_mental(string);
	string getEnfermedad_mental();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Psiquiatria::Psiquiatria() : Salas(){
	Psiquiatria::setEnfermedad_mental("");
}//constructor vacio 

Psiquiatria::Psiquiatria(string Code,string n, string enfermedad_mental) : Salas(Code,n){
	Psiquiatria::setEnfermedad_mental(enfermedad_mental);
} // constructor full

Psiquiatria::~Psiquiatria(){} //destructor

void Psiquiatria::setEnfermedad_mental(string enfermedad_mental){
	this->Enfermedad_mental = enfermedad_mental;
}

string Psiquiatria::getEnfermedad_mental(){
	return this->Enfermedad_mental;
}

string Psiquiatria::soy(){
	return "Psiquiatria";
}
void Psiquiatria::ImprimirT(){
	Salas::ImprimirT();
	cout<<setfill(' ')<<setw(15)<<soy()<<"|"
		<<setfill(' ')<<setw(10)<<getEnfermedad_mental()<<"|\n";
	cout<<"+----+--------+--------------------+-----+---------------+---------------+\n";
}

void Psiquiatria::encabezado(){
	cout<<"+----+--------+--------------------+-----+---------------+---------------+\n"
		<<"|Pos.| codigo | Lugar del Hospital |  N° |     Sala      |   Enfermedad  |\n"
		<<"+----+--------+--------------------+-----+---------------+---------------+\n";
}

#endif

