#ifndef Pediatria_H
#define Pediatria_H
#include "Salas.h"

class Pediatria : public Salas { //cabecera de la clase Pediatria deriva de Salas
public:
	Pediatria();
	Pediatria(string,string);
	~Pediatria();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Pediatria::Pediatria() : Salas(){}//constructor vacio 

Pediatria::Pediatria(string Code,string n) : Salas(Code,n){} // constructor full

Pediatria::~Pediatria(){} //destructor

string Pediatria::soy(){
	return "Pediatria";
}

void Pediatria::ImprimirT(){
	Salas::ImprimirT();
	cout<<setfill(' ')<<setw(15)<<soy()<<"|\n";
}

void Pediatria::encabezado(){
	cout<<"+----+--------+--------------------+-----+---------------+\n"
		<<"|Pos.| codigo | Lugar del Hospital |  N° |     Sala      |\n"
		<<"+----+--------+--------------------+-----+---------------+\n";
}

#endif
