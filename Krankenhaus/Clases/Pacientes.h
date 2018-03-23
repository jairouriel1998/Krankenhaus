#ifndef  Pacientes_H
#define  Pacientes_H
#include "Personas.h"

class Pacientes:public Personas{
private:
	int Ncama,FechaI;
	string Historial,Familiar,Sala,Medicamento,Medico;
public:
	Pacientes();
	Pacientes(string,string,string,string,char,short,short,int,string,int,string,string,string,string);
	~Pacientes();
	
	void setNcama(int);
	int getNcama();
	
	void setHistorial(string);
	string getHistorial();
	
	void setFechaI(int);
	int getFechaI();
	
	void setFamiliar(string);
	string getFamiliar();
	
	void setSala(string);
	string getSala();
	
	void setMedicamento(string);
	string getMedicamento();
	
	void setMedico(string);
	string getMedico();
	
	virtual void ImprimirT();
	virtual void encabezado();
	virtual string soy();
};

Pacientes::Pacientes():Personas(){
	this->Ncama = 0;
	this->Historial = "";
	this->FechaI = 0;
	this->Familiar ="";
	this->Sala = "";
	this->Medicamento = "";
	this->Medico = "";
}

Pacientes::Pacientes(string Code,string name,string Lname,string Direc,char sex,short age,short tel,int N,string H,int FI,string Fam,string S,string Medi,string Doctor):Personas(Code,name,Lname,Direc,sex,age,tel){
	this->Ncama = N;
	this->Historial = H;
	this->FechaI = FI;
	this->Familiar =Fam;
	this->Sala = S;
	this->Medicamento = Medi;
	this->Medico = Doctor;
}

Pacientes::~Pacientes(){}

void Pacientes::setNcama(int N){
	this->Ncama= N;
}
void Pacientes::setHistorial(string H){
	this->Historial= H;
}
void Pacientes::setFechaI(int FI){
	this->FechaI= FI;
}
void Pacientes::setFamiliar(string Fam){
	this->Familiar= Fam;
}
void Pacientes::setSala(string S){
	this->Sala= S;
}
void Pacientes::setMedicamento(string Medi){
	this->Medicamento= Medi;
}
void Pacientes::setMedico(string Doctor){
	this->Medico= Doctor;
}

int Pacientes::getNcama(){
	return this->Ncama;
}
string Pacientes::getHistorial(){
	return this->Historial;
}
int Pacientes::getFechaI(){
	return this->FechaI;
}
string Pacientes::getFamiliar(){
	return this->Familiar;
}
string Pacientes::getMedicamento(){
	return this->Medicamento;
}
string Pacientes::getMedico(){
	return this->Medico;
}
string Pacientes::soy(){
	return "Pacientes";
}
void Pacientes::ImprimirT(){
	Personas::Imprimir();
	cout<<setfill(' ')<<setw(6)<<getNcama()<<"|"
		<<setfill(' ')<<setw(25)<<getHistorial()<<"|"
		<<setfill(' ')<<setw(10)<<getFechaI()<<"|"
		<<setfill(' ')<<setw(20)<<getFamiliar()<<"|"
		<<setfill(' ')<<setw(25)<<getMedicamento()<<"|"
		<<setfill(' ')<<setw(20)<<getMedico()<<"|"
		<<setfill(' ')<<setw(20)<<soy()<<"|";
		cout<<"+------+-------------------------+----------+--------------------+-------------------------+--------------------+-------------------+\n";
}

void Pacientes::encabezado(){
	cout<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+------+-------------------------+----------+--------------------+-------------------------+--------------------+-------------------+\n"
		<<"|Pos.| codigo |          Nombre         |        Apellido         |             Direccion             | Sexo | Edad | Telefono |N°Cama|        Historial        |  Ingreso |      Familiar      |       Medicamento       |       Medico       |    Tipo Persona   |\n"            
		<<"+----+--------+-------------------------+-------------------------+-----------------------------------+------+------+----------+------+-------------------------+----------+--------------------+-------------------------+--------------------+-------------------+\n";
}
#endif


