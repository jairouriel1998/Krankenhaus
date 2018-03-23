#ifndef Morgue_H
#define Morgue_H
#include "Hospital.h"

class Morgue:public Hospital{
private:
	string Cadaver,Autopsia;
public:
	Morgue();
	Morgue(string,string,string);
	~Morgue();
	
	void setCadaver(string);
	void setAutopsia(string);
	
	string getCadaver();
	string getAutopsia();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Morgue::Morgue():Hospital(){
	this->Cadaver="";
	this->Autopsia="";
}

Morgue::Morgue(string Code,string Body, string Dead):Hospital(Code){
	this->Cadaver = Body;
	this->Autopsia = Dead; 
}

Morgue::~Morgue(){}

void Morgue::setCadaver(string Body){
	this->Cadaver = Body;
}

void Morgue::setAutopsia(string Dead){
	this->Autopsia = Dead;
}

string Morgue::getCadaver(){
	return this->Cadaver;
}

string Morgue::getAutopsia(){
	return this->Autopsia;
}

string Morgue::soy(){
	return "Morgue";
}

void Morgue::ImprimirT(){
	Hospital::Imprimir();
	cout<<setfill(' ')<<setw(21)<<getCadaver()<<"|"
		<<setfill(' ')<<setw(25)<<getAutopsia()<<"|"
		<<setfill(' ')<<setw(20)<<soy()<<"|\n";
	cout<<"+----+--------+---------------------+-------------------------+--------+\n";
}

void Morgue::encabezado(){
	cout<<"+----+--------+---------------------+-------------------------+--------------------+\n"
		<<"|Pos.| codigo |       Cadaver       |         Autopsia        | Lugar del Hospital |\n"
		<<"+----+--------+---------------------+-------------------------+--------------------+\n";
}

#endif
