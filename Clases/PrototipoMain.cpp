
//////////SuperClase//////////
#include "Hospital.h"
////////////PERSONAS//////////
#include "Personas.h"
#include "Pacientes.h"
////////PERSONA-EMPLEADO//////
#include "Empleados.h"
#include "Medico.h"
#include "Enfermeras.h"
#include "Administrativos.h"
#include "ServiciosGenerales.h"
////////////FARMACIA//////////
#include "Farmacia.h"
#include "Inyectable.h"
#include "Capsula.h"
#include "Jarabe.h"
//////////////////////////////
#include "Laboratorio.h"
#include "RayosX.h"
#include "Morgue.h"
//////////SALAS///////////////
#include "Salas.h"
#include "Quirofano.h"
#include "Urgencias.h"
#include "Maternidad.h"
#include "Psiquiatria.h"
#include "Pediatria.h"
////////////LIBRERIAS/////////
#include <vector>
#include <typeinfo>
#include <cstdlib>
#include <fstream>
//////////Usings//////////////
using std :: string;
using std :: ios;
using std :: ofstream;
using std :: ifstream;
using std :: cin;
using std :: vector;
using std :: endl;
//////////////////////////////
vector<Hospital*> H(0);
int  posicion, Opcion3;
char Opcion1,Opcion2;
string Etiqueta,Codigo,Palabra;
//////////////////ARCHIVOS-HOSPITAL///////////////////////////
string AL="Laboratorio.xlsx",AR="RayosX.xlsx",AM="Morgue.xlsx";
///////////////////ARCHIVOS-FARMACIA//////////////////////////
string AI="Inyectable.xlsx",AC="Capsula.xlsx",AJ="Jarabe.xlsx";
/////////////////////ARCHIVOS-SALAS///////////////////////////
string AQ="Quirofano.xlsx",AU="Urgencias.xlsx",AMa="Maternidad.xlsx",APs="Psiquiatria.xlsx",APe="Pediatria.xlsx";
/////////////////////ARCHIVO-PERSONA//////////////////////////
string AP="Pacientes.xlsx"; 
////////////////////ARCHIVOS-EMPLEADOS////////////////////////
string AMe="Medico.xlsx",AE="Enfermeras.xlsx",AA="Administrativos.xlsx",ASg="ServiciosGenerales.xlsx";

/////////////////////////////Llenado 56-280/////////////////////////////////////
void LlenadoHospital(){
	string Code,Tipo,Cadaver,Autopsia;
	ifstream ArchivoL(AL.data(),ios::in);
	ifstream ArchivoR(AR.data(),ios::in);
	ifstream ArchivoM(AM.data(),ios::in);
	if(!ArchivoL||!ArchivoR||!ArchivoM){
		cout<<"ERROR!!!\nNo se Logro Cargar los Archivos"<<endl;
		return ; 
	}
	do{	
		getline(ArchivoL,Code);
		getline(ArchivoL,Tipo);
		H.push_back(new Laboratorio(Code,Tipo));
		
	}while(!ArchivoL.eof());
	ArchivoL.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoR,Code);
		getline(ArchivoR,Tipo);
		H.push_back(new RayosX(Code,Tipo));
	}while(!ArchivoR.eof());
	ArchivoR.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoM,Code);
		getline(ArchivoM,Cadaver);
		getline(ArchivoM,Autopsia);
		H.push_back(new Morgue(Code,Cadaver,Autopsia));
	}while(!ArchivoM.eof());
	ArchivoM.close();
	H.erase(H.begin()+(H.size()-1));
}

void LlenadoFarmacia(){
	string Code,Medicina,Cantidad;
	ifstream ArchivoI(AI.data(),ios::in);
	ifstream ArchivoC(AC.data(),ios::in);
	ifstream ArchivoJ(AJ.data(),ios::in);
	if(!ArchivoI||!ArchivoC||!ArchivoJ){
		cout<<"ERROR!!!\nNo se Logro Cargar los Archivos"<<endl;
		return; 
	}
	do{	
		getline(ArchivoI,Code);
		getline(ArchivoI,Medicina);
		getline(ArchivoI,Cantidad);
		H.push_back(new Inyectable(Code,Medicina,Cantidad));
		
	}while(!ArchivoI.eof());
	ArchivoI.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoC,Code);
		getline(ArchivoC,Medicina);
		getline(ArchivoC,Cantidad);
		H.push_back(new Capsula(Code,Medicina,Cantidad));
	}while(!ArchivoC.eof());
	ArchivoC.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoJ,Code);
		getline(ArchivoJ,Medicina);
		getline(ArchivoJ,Cantidad);
		H.push_back(new Jarabe(Code,Medicina,Cantidad));
	}while(!ArchivoJ.eof());
	ArchivoJ.close();
	H.erase(H.begin()+(H.size()-1));
}

void LlenadoSalas(){
	string Code,NumeroSala,Numero,Tipo;
	ifstream ArchivoQ(AQ.data(),ios::in);
	ifstream ArchivoU(AU.data(),ios::in);
	ifstream ArchivoMa(AMa.data(),ios::in);
	ifstream ArchivoPs(APs.data(),ios::in);
	ifstream ArchivoPe(APe.data(),ios::in);
	if(!ArchivoQ||!ArchivoU||!ArchivoMa||!ArchivoPs||!ArchivoPe){
		cout<<"ERROR!!!\nNo se Logro Cargar los Archivos"<<endl;
		return; 
	}
	do{	
		getline(ArchivoQ,Code);
		getline(ArchivoQ,NumeroSala);
		getline(ArchivoQ,Numero);
		H.push_back(new Quirofano(Code,NumeroSala,Numero));
		
	}while(!ArchivoQ.eof());
	ArchivoQ.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoU,Code);
		getline(ArchivoU,NumeroSala);
		getline(ArchivoU,Tipo);
		H.push_back(new Urgencias(Code,NumeroSala,Tipo));
	}while(!ArchivoU.eof());
	ArchivoU.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoMa,Code);
		getline(ArchivoMa,NumeroSala);
		getline(ArchivoMa,Tipo);
		H.push_back(new Maternidad(Code,NumeroSala,Tipo));
	}while(!ArchivoMa.eof());
	ArchivoMa.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoPs,Code);
		getline(ArchivoPs,NumeroSala);
		getline(ArchivoPs,Tipo);
		H.push_back(new Psiquiatria(Code,NumeroSala,Tipo));
	}while(!ArchivoPs.eof());
	ArchivoPs.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoPe,Code);
		getline(ArchivoPe,NumeroSala);
		H.push_back(new Pediatria(Code,NumeroSala));
	}while(!ArchivoPe.eof());
	ArchivoPe.close();
	H.erase(H.begin()+(H.size()-1));
}

void LlenadoPersonas(){
	string Code,Nombre,Apellido,Direccion,Historial,Familiar,Sala,Medicina,Medico,Temp;
	int Numero,Fecha;
	char sexo;
	short edad,telefono;
	ifstream ArchivoP(AP.data(),ios::in);
	if(!ArchivoP){
		cout<<"ERROR!!!\nNo se Logro Cargar los Archivos"<<endl;
		return; 
	}
	string L;
	do{	
		getline(ArchivoP,Code);
		getline(ArchivoP,Nombre);
		getline(ArchivoP,Apellido);
		getline(ArchivoP,Direccion);
		getline(ArchivoP,Temp);
		sexo = stoi(Temp);
		getline(ArchivoP,Temp);
		edad = stoi(Temp);
		getline(ArchivoP,Temp);
		telefono = stoi(Temp);
		getline(ArchivoP,Temp);
		Numero = stoi(Temp);
		getline(ArchivoP,Historial);
		getline(ArchivoP,Temp);
		Fecha = stoi(Temp);
		getline(ArchivoP,Familiar);
		getline(ArchivoP,Sala);
		getline(ArchivoP,Medicina);
		getline(ArchivoP,Medico);
		H.push_back(new Pacientes(Code,Nombre,Apellido,Direccion,sexo,edad,telefono,Numero,Historial,Fecha,Familiar,Sala,Medicina,Medico));
	}while(!ArchivoP.eof());
	ArchivoP.close();
	H.erase(H.begin()+(H.size()-1));
}


void LlenadoEmpleados(){
	string Code,Nombre,Apellido,Direccion,Tipo,Temp;
	int Salario;
	char sexo;
	short edad,telefono;
	ifstream ArchivoM(AMe.data(),ios::in);
	ifstream ArchivoE(AE.data(),ios::in);
	ifstream ArchivoA(AA.data(),ios::in);
	ifstream ArchivoSG(ASg.data(),ios::in);
	if(!ArchivoM||!ArchivoE||!ArchivoA||!ArchivoSG){
		cout<<"ERROR!!!\nNo se Logro Cargar los Archivos\n\n";
		return; 
	}
	do{	
		getline(ArchivoM,Code);
		getline(ArchivoM,Nombre);
		getline(ArchivoM,Apellido);
		getline(ArchivoM,Direccion);
		getline(ArchivoM,Temp);
		sexo = stoi(Temp);
		getline(ArchivoM,Temp);
		edad = stoi(Temp);
		getline(ArchivoM,Temp);
		telefono = stoi(Temp);
		getline(ArchivoM,Temp);
		Salario = stoi(Temp);
		getline(ArchivoM,Tipo);
		H.push_back(new Medico(Code,Nombre,Apellido,Direccion,sexo,edad,telefono,Salario,Tipo));
	}while(!ArchivoM.eof());
	ArchivoM.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoE,Code);
		getline(ArchivoE,Nombre);
		getline(ArchivoE,Apellido);
		getline(ArchivoE,Direccion);
		getline(ArchivoE,Temp);
		sexo = stoi(Temp);
		getline(ArchivoE,Temp);
		edad = stoi(Temp);	
		getline(ArchivoE,Temp);
		telefono = stoi(Temp);
		getline(ArchivoE,Temp);
		Salario = stoi(Temp);
		H.push_back(new Enfermeras(Code,Nombre,Apellido,Direccion,sexo,edad,telefono,Salario));
	}while(!ArchivoE.eof());
	ArchivoE.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoA,Code);
		getline(ArchivoA,Nombre);
		getline(ArchivoA,Apellido);
		getline(ArchivoA,Direccion);
		getline(ArchivoA,Temp);
		sexo = stoi(Temp);
		getline(ArchivoA,Temp);
		edad = stoi(Temp);	
		getline(ArchivoA,Temp);
		telefono = stoi(Temp);
		getline(ArchivoA,Temp);
		Salario = stoi(Temp);
		getline(ArchivoA,Tipo);
		H.push_back(new Administrativos(Code,Nombre,Apellido,Direccion,sexo,edad,telefono,Salario,Tipo));
	}while(!ArchivoA.eof());
	ArchivoA.close();
	H.erase(H.begin()+(H.size()-1));
	do{	
		getline(ArchivoSG,Code);
		getline(ArchivoSG,Nombre);
		getline(ArchivoSG,Apellido);
		getline(ArchivoSG,Direccion);
		getline(ArchivoSG,Temp);
		sexo = stoi(Temp);
		getline(ArchivoSG,Temp);
		edad = stoi(Temp);	
		getline(ArchivoSG,Temp);
		telefono = stoi(Temp);
		getline(ArchivoSG,Temp);
		Salario = stoi(Temp);
		H.push_back(new ServiciosGenerales(Code,Nombre,Apellido,Direccion,sexo,edad,telefono,Salario));
	}while(!ArchivoSG.eof());
	ArchivoSG.close();
	H.erase(H.begin()+(H.size()-1));
}
/////////////////////////////Guardar 280-460////////////////////////////////////
void GuardarHospital(){
	ofstream ArchivoL(AL.data(),ios::out);
	ofstream ArchivoR(AR.data(),ios::out);
	ofstream ArchivoM(AM.data(),ios::out);
	if(!ArchivoL || !ArchivoR || !ArchivoM ){
		cout<<"ERROR!!!\nNo se logro guardar los Los datos\n\n";
	}else{
		for(unsigned int i=0;i<H.size();i++){
			if(typeid(*H[i])==typeid(Laboratorio)){
				ArchivoL<<dynamic_cast <Laboratorio *>(H[i])->getCodigo()<<"\n"
						<<dynamic_cast <Laboratorio *>(H[i])->getTExamen()<<"\n";
			}else if(typeid(*H[i])==typeid(RayosX)){
				ArchivoR<<dynamic_cast <RayosX *>(H[i])->getCodigo()<<"\n"
						<<dynamic_cast <RayosX *>(H[i])->getTipo()<<"\n";
			}else if(typeid(*H[i])==typeid(Morgue)){
				ArchivoM<<dynamic_cast<Morgue*>(H[i])->getCodigo()<<"\n"
						<<dynamic_cast<Morgue*>(H[i])->getCadaver()<<"\n"
						<<dynamic_cast<Morgue*>(H[i])->getAutopsia()<<"\n";
			}
		}
	ArchivoL.close();
	ArchivoR.close();
	ArchivoM.close();
	cout<<"Se Guardaron los archivos :D"<<endl;
			}
	}


void GuardarFarmacia(){
	ofstream ArchivoI(AI.data(),ios::out);
	ofstream ArchivoC(AC.data(),ios::out);
	ofstream ArchivoJ(AJ.data(),ios::out);
	if(!ArchivoI || !ArchivoC || !ArchivoJ ){
		cout<<"ERROR!!!\nNo se logro guardar los Los datos\n\n";
	}else{
		for(unsigned int i=0;i<H.size();i++){
			if(typeid(*H[i])==typeid(Inyectable)){
				ArchivoI<<dynamic_cast <Inyectable *>(H[i])->getCodigo()<<"\n"
						<<dynamic_cast <Inyectable *>(H[i])->getMedicamento()<<"\n"
						<<dynamic_cast <Inyectable *>(H[i])->getCantidad()<<"\n";
			}else if(typeid(*H[i])==typeid(Capsula)){
			ArchivoC<<dynamic_cast <Capsula *>(H[i])->getCodigo()<<"\n"
					<<dynamic_cast <Capsula *>(H[i])->getMedicamento()<<"\n"
					<<dynamic_cast <Capsula *>(H[i])->getCantidad()<<"\n";
		}else if(typeid(*H[i])==typeid(Jarabe)){
			ArchivoJ<<dynamic_cast <Jarabe *>(H[i])->getCodigo()<<"\n"
					<<dynamic_cast <Jarabe *>(H[i])->getMedicamento()<<"\n"
					<<dynamic_cast <Jarabe *>(H[i])->getCantidad()<<"\n";
			}
		}
		ArchivoI.close();
		ArchivoC.close();
		ArchivoJ.close();
		cout<<"Se Guardaron los archivos :D"<<endl;
	}
}
void GuardarSalas(){
	ofstream ArchivoQ(AQ.data(),ios::out);
	ofstream ArchivoU(AU.data(),ios::out);
	ofstream ArchivoMa(AMa.data(),ios::out);
	ofstream ArchivoPs(APs.data(),ios::out);
	ofstream ArchivoPe(APe.data(),ios::out);
	if(!ArchivoQ||!ArchivoU||!ArchivoMa||!ArchivoPs||!ArchivoPe){
		cout<<"ERROR!!!\nNo se logro guardar los Los datos\n\n";
	}else{
		for(unsigned int i=0;i<H.size();i++){
			if(typeid(*H[i])==typeid(Quirofano)){
				ArchivoQ<<dynamic_cast <Quirofano *>(H[i])->getCodigo()<<"\n"
					<<dynamic_cast <Quirofano *>(H[i])->getnumero()<<"\n"
					<<dynamic_cast <Quirofano *>(H[i])->getN_quirofano()<<"\n";
		}else if(typeid(*H[i])==typeid(Urgencias)){
			ArchivoU<<dynamic_cast <Urgencias *>(H[i])->getCodigo()<<"\n"
					<<dynamic_cast <Urgencias *>(H[i])->getnumero()<<"\n"
					<<dynamic_cast <Urgencias *>(H[i])->getEmergencia()<<"\n";
		}else if(typeid(*H[i])==typeid(Maternidad)){
			ArchivoMa<<dynamic_cast <Maternidad *>(H[i])->getCodigo()<<"\n"
					<<dynamic_cast <Maternidad *>(H[i])->getnumero()<<"\n"
					<<dynamic_cast <Maternidad *>(H[i])->getParto()<<"\n";
		}else if(typeid(*H[i])==typeid(Psiquiatria)){
			ArchivoPs<<dynamic_cast <Psiquiatria *>(H[i])->getCodigo()<<"\n"
					<<dynamic_cast <Psiquiatria *>(H[i])->getnumero()<<"\n"
					<<dynamic_cast <Psiquiatria *>(H[i])->getEnfermedad_mental()<<"\n";
		}else if(typeid(*H[i])==typeid(Pediatria)){
			ArchivoPe<<dynamic_cast <Pediatria *>(H[i])->getCodigo()<<"\n"
					<<dynamic_cast <Pediatria *>(H[i])->getnumero()<<"\n";
		}
	}
		ArchivoQ.close();
		ArchivoU.close();
		ArchivoMa.close();
		ArchivoPs.close();
		ArchivoPe.close();
		cout<<"Se Guardaron los archivos :D"<<endl;
	}
}

void GuardarPersonas(){
	ofstream ArchivoP(AP.data(),ios::out);
	if(!ArchivoP){
		cout<<"ERROR!!!\nNo se logro guardar los Los datos\n\n";
	}else{
		for(unsigned int i=0;i<H.size();i++){
			if(typeid(*H[i])==typeid(Pacientes)){
				ArchivoP<<dynamic_cast <Pacientes *>(H[i])->getCodigo()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getNombre()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getApellido()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getDireccion()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getsexo()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getedad()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->gettelefono()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getNcama()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getHistorial()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getFechaI()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getFamiliar()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getMedicamento()<<"\n"
						<<dynamic_cast <Pacientes *>(H[i])->getMedico()<<"\n";
			}
	}
	ArchivoP.close();
	cout<<"Se Guardaron los archivos :D"<<endl;
	}
}

void GuardarEmpleados(){
	ofstream ArchivoM(AMe.data(),ios::out);
	ofstream ArchivoE(AE.data(),ios::out);
	ofstream ArchivoA(AA.data(),ios::out);
	ofstream ArchivoSG(ASg.data(),ios::out);
	if(!ArchivoM || !ArchivoE || !ArchivoA ||!ArchivoSG){
		cout<<"ERROR!!!\nNo se logro guardar los Los datos\n\n";
	}else{
		for(unsigned int i=0;i<H.size();i++){
			if(typeid(*H[i])==typeid(Medico)){
				ArchivoM<<dynamic_cast <Medico *>(H[i])->getCodigo()<<"\n"
						<<dynamic_cast <Medico *>(H[i])->getNombre()<<"\n"
						<<dynamic_cast <Medico *>(H[i])->getApellido()<<"\n"
						<<dynamic_cast <Medico *>(H[i])->getDireccion()<<"\n"
						<<dynamic_cast <Medico *>(H[i])->getsexo()<<"\n"
						<<dynamic_cast <Medico *>(H[i])->getedad()<<"\n"
						<<dynamic_cast <Medico *>(H[i])->gettelefono()<<"\n"
						<<dynamic_cast <Medico *>(H[i])->getSalario()<<"\n"
						<<dynamic_cast <Medico *>(H[i])->getEspecialidad()<<"\n";
		}else if(typeid(*H[i])==typeid(Enfermeras)){
			ArchivoE<<dynamic_cast <Enfermeras *>(H[i])->getCodigo()<<"\n"
				<<dynamic_cast <Enfermeras *>(H[i])->getNombre()<<"\n"
				<<dynamic_cast <Enfermeras *>(H[i])->getApellido()<<"\n"
				<<dynamic_cast <Enfermeras *>(H[i])->getDireccion()<<"\n"
				<<dynamic_cast <Enfermeras *>(H[i])->getsexo()<<"\n"
				<<dynamic_cast <Enfermeras *>(H[i])->getedad()<<"\n"
				<<dynamic_cast <Enfermeras *>(H[i])->gettelefono()<<"\n"
				<<dynamic_cast <Enfermeras *>(H[i])->getSalario()<<"\n";
		}else if(typeid(*H[i])==typeid(Administrativos)){
			ArchivoM<<dynamic_cast <Administrativos *>(H[i])->getCodigo()<<"\n"
				<<dynamic_cast <Administrativos *>(H[i])->getNombre()<<"\n"
				<<dynamic_cast <Administrativos *>(H[i])->getApellido()<<"\n"
				<<dynamic_cast <Administrativos *>(H[i])->getDireccion()<<"\n"
				<<dynamic_cast <Administrativos *>(H[i])->getsexo()<<"\n"
				<<dynamic_cast <Administrativos *>(H[i])->getedad()<<"\n"
				<<dynamic_cast <Administrativos *>(H[i])->gettelefono()<<"\n"
				<<dynamic_cast <Administrativos *>(H[i])->getSalario()<<"\n"
				<<dynamic_cast <Administrativos *>(H[i])->getArea()<<"\n";
		}else if(typeid(*H[i])==typeid(ServiciosGenerales)){
			ArchivoE<<dynamic_cast <ServiciosGenerales *>(H[i])->getCodigo()<<"\n"
				<<dynamic_cast <ServiciosGenerales *>(H[i])->getNombre()<<"\n"
				<<dynamic_cast <ServiciosGenerales *>(H[i])->getApellido()<<"\n"
				<<dynamic_cast <ServiciosGenerales *>(H[i])->getDireccion()<<"\n"
				<<dynamic_cast <ServiciosGenerales *>(H[i])->getsexo()<<"\n"
				<<dynamic_cast <ServiciosGenerales *>(H[i])->getedad()<<"\n"
				<<dynamic_cast <ServiciosGenerales *>(H[i])->gettelefono()<<"\n"
				<<dynamic_cast <ServiciosGenerales *>(H[i])->getSalario()<<"\n";
		}
		ArchivoM.close();
		ArchivoE.close();
		ArchivoA.close();
		ArchivoSG.close();
		cout<<"Se Guardaron los archivos :D"<<endl;
		}
	}
}
//////////////////////////////Agregar:484-//////////////////////////////////////
template<class ingresar>
ingresar Agregar(ingresar Temp){
	cin.get();
	if(Opcion2=='a')
}
//////////////////////////////Imprimir//////////////////////////////////////////
void Imprimir(){
	bool change=true;
	for (unsigned int i=0; i<H.size(); i++){
//////////////////////////IMPRIMIR-HOSPITAL/////////////////////////////////////		
		if(Opcion2=='a'){
			if(typeid(*H[i])==typeid(Laboratorio)&& H[i]->soy()=="Laboratorio"){
				if (change == true ){
					H[i]->encabezado();
					change=false;
				}
				cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
				H[i]->ImprimirT();	
			}else if(typeid(*H[i])==typeid(RayosX)&& H[i]->soy()=="RayosX"){
			if(change == true){
				H[i]->encabezado();
				change= false;
			}
			cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
			H[i]->ImprimirT();
		 }else if(typeid(*H[i])==typeid(Morgue)&& H[i]->soy()=="Morgue"){
			if(change == true){
				H[i]->encabezado();
				change= false;
			}
			cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
			H[i]->ImprimirT();
		}
	}	
//////////////////////////IMPRIMIR-FARMACIA/////////////////////////////////////		
		if(Opcion2=='b'){
			if(typeid(*H[i])==typeid(Inyectable)&& H[i]->soy()=="Inyeccion"){
				if (change == true ){
					H[i]->encabezado();
					change=false;
				}
				cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
				H[i]->ImprimirT();
			}else if(typeid(*H[i])==typeid(Capsula)&& H[i]->soy()=="Capsula"){
			if(change == true){
				H[i]->encabezado();
				change= false;
			}
		cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
		H[i]->ImprimirT();
		}else if(typeid(*H[i])==typeid(Jarabe)&& H[i]->soy()=="Jarabe"){
			if(change == true){
				H[i]->encabezado();
				change= false;
			}
			cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
			H[i]->ImprimirT();
		}
	}	
///////////////////////////IMPRIMIR-SALAS//////////////////////////////////////			
		if(Opcion2=='c'){
			if(typeid(*H[i])==typeid(Quirofano)&& H[i]->soy()=="Quirofano"){
				if (change == true ){
					H[i]->encabezado();
					change=false;
				}
				cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
				H[i]->ImprimirT();	
		}else if(typeid(*H[i])==typeid(Urgencias)&& H[i]->soy()=="Urgencias"){
			if(change == true){
				H[i]->encabezado();
				change= false;
			}
			cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
			H[i]->ImprimirT();
		}else if(typeid(*H[i])==typeid(Maternidad)&& H[i]->soy()=="Maternidad"){
			if(change == true){
				H[i]->encabezado();
				change= false;
			}
			cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
			H[i]->ImprimirT();
		}else if(typeid(*H[i])==typeid(Psiquiatria)&& H[i]->soy()=="Psiquiatria"){
			if(change == true){
				H[i]->encabezado();
				change= false;
			}
			cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
			H[i]->ImprimirT();
		}else if(typeid(*H[i])==typeid(Pediatria)&& H[i]->soy()=="Pediatria"){
				if(change == true){
					H[i]->encabezado();
					change= false;
				}
				cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
				H[i]->ImprimirT();	
			} 
		}
/////////////////////////////IMPRIMIR-PACIENTE//////////////////////////////////			
		if(Opcion2=='d'){
			if(typeid(*H[i])==typeid(Pacientes)&& H[i]->soy()=="Pacientes"){
				if (change == true ){
					H[i]->encabezado();
					change=false;
				}
				cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
				H[i]->ImprimirT();	
			}
		}	
//////////////////////////IMPRIMIR-EMPLEADOS////////////////////////////////////
			if(Opcion2=='e'){
				if(typeid(*H[i])==typeid(Medico)&& H[i]->soy()=="Medico"){
					if (change == true ){
						H[i]->encabezado();
						change=false;
					}
				cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
				H[i]->ImprimirT();
			}else if(typeid(*H[i])==typeid(Enfermeras)&& H[i]->soy()=="Enfermeras"){
				if(change == true){
					H[i]->encabezado();
					change= false;
				}
				cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
				H[i]->ImprimirT();
			}else if(typeid(*H[i])==typeid(Administrativos)&& H[i]->soy()=="Administrativos"){
				if(change == true){
					H[i]->encabezado();
					change= false;
				}
			cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
			H[i]->ImprimirT();	
			}else if(typeid(*H[i])==typeid(ServiciosGenerales)&& H[i]->soy()=="ServiciosGenerales"){
				if(change == true){
					H[i]->encabezado();
					change= false;
				}
				cout<<"|"<<setfill(' ')<<setw(4)<<i+1;
				H[i]->ImprimirT();		
			}
		}
	}
}	
/////////////////////////////////////Etiquetas//////////////////////////////////			
void tag(){
	if (Opcion2=='a'){
		Etiqueta="Datos de Hospital";
	}else if (Opcion2=='b'){
		Etiqueta="Datos de Farmacia";
	}else if(Opcion2=='c'){
		Etiqueta="Datos de Salas";
	}else if(Opcion2=='d'){
		Etiqueta="Datos de Pacientes";
	}else {
		Etiqueta="Datos de Empleados";
	}
}
/////////////////////////////MENUS 460-716//////////////////////////////////////
void MenuPrincipal(char *RespuestaPtr){
	cout<<"\n\t\t .:. Bienvenido al sistema de Krakenhaus.:.\n"<<endl
		<<"Seleccione Que desea Realizar."<<endl
		<<"A.-> Agregar Datos del Hospital."<<endl
		<<"B.-> Imprimir Datos del Hospital."<<endl
		<<"C.-> Modficar Datos del Hospital."<<endl
		<<"D.-> Eliminar Datos del Hospital."<<endl
		<<"E.-> Salir del programa."<<endl;
	cin>>*RespuestaPtr;
	*RespuestaPtr=toupper(*RespuestaPtr);
	if(*RespuestaPtr<'A' || *RespuestaPtr>'E'){
		cout<<"\nOpcion Invalida!!!."<<endl
			<<"NOTA: Intenta de nuevo ingresando una de las opciones"<<endl;
		MenuPrincipal(RespuestaPtr);
	}
}

void MenuGeneral(char *RespuestaPtr){
	cout<<"\nSeleccione el dato del  Hospital que desea "<<Etiqueta<<"."<<endl
		<<"a.-> Datos de Hospital."<<endl
		<<"b.-> Datos de Farmacia."<<endl
		<<"c.-> Datos de Salas."<<endl
		<<"d.-> Datos de Pacientes"<<endl
		<<"e.-> Datos de Empleados"<<endl;	
	if (Opcion1 == 'e'){
		cout<<"e.-> Por Empleo."<<endl
			<<"f.-> Volver Al Menu Principal."<<endl;
	}else{
		cout<<"f.-> Volver Al Menu Principal."<<endl;
	}
	cin>>*RespuestaPtr;
	*RespuestaPtr=tolower(*RespuestaPtr);
	if(*RespuestaPtr<'a' || *RespuestaPtr>'f'){
			cout<<"\nOpcion Invalida!!!."<<endl
				<<"NOTA: Intenta de nuevo ingresando una de las opciones"<<endl;
		MenuGeneral(RespuestaPtr);
	}
}

void MenuModificar(int *RespuestaPtr){
	cout<<"Seleccione alguna de nuestras opciones"<<endl
		<<"1.->Modificar Codigo";
	if(Opcion2=='a'){
		cout<<"2.-> Modificar Laboratorios"<<endl
			<<"3.-> Modificar Rayos X"<<endl
			<<"4.-> Modificar Morgue"<<endl
			<<"5.-> Regresar"<<endl;
	i}f(Opcion2=='b'){
		cout<<"2.-> Modificar Medicamento Inyectables."<<endl
			<<"3.-> Modificar Medicamento Capsulas."<<endl
			<<"4.-> Modificar Medicamento Jarabe."<<endl
			<<"5.-> Regresar."<<endl;
	}if(Opcion2=='c'){
		cout<<"2.-> Modificar Sala Quirofano."<<endl
			<<"3.-> Modificar Sala Urgencias."<<endl
			<<"4.-> Modificar Sala Maternidad."<<endl
			<<"5.-> Modificar Sala Psiquiatria."<<endl
			<<"6.-> Modificar Sala Pediatria."<<endl
			<<"7.-> Regresar."<<endl;
	}if(Opcion2=='d'){
		cout<<"2.-> Modificar Pacientes."<<endl
			<<"3.-> Regresar."
	}if(Opcion2=='e'){
		cout<<"2.-> Modificar Empleados."<<endl
			<<"3.-> Regresar."<<endl;
	}
	cin>>*RespuestaPtr;
	if(*Respuesta<1||*RespuestaPtr>7){
		cout<<"\nOpcion Invalida!!!."<<endl
			<<"NOTA: Intenta de nuevo ingresando una de las opciones"<<endl;
		MenuModificar(RespuestaPtr);
	}
}
///////////////////////////////Inicio del Main//////////////////////////////////	
int main(){
	LlenadoHospital();
	LlenadoFarmacia();
	LlenadoSalas();
	LlenadoPersonas();
	LlenadoEmpleados();
	do{
		MenuPrincipal(&Opcion1);
		switch(Opcion1){
		case 'E':
			cout<<"Cerrando Programa"<<endl;
		break;
		case 'A':
			Etiqueta="Agregar";
			do{
				MenuGeneral(&Opcion2);
				switch(Opcion2){
				case 'f':
					cout<<"\nVolviendo al menu principal.\n";
					break;
				case 'e':
					
					break;
				case 'd':
					
					break;
				case 'c':
					
					break;
				case 'b':
					
					break;
				case 'a':
					
					break;
				default:
					cout<<"Opcion Invalida!!!.\n"
						<<"La opccion que ingreso no se encuentra entre las opciones disponibles.\n"
						<<"Porfavor Intentelo denuevo.\n";
				}
			} while(Opcion2!='f');
		case 'B':
			Etiqueta="Imprimir";
			do{
				MenuGeneral(&Opcion2);
				switch(Opcion2){
				case 'f':
					cout<<"\nVolviendo al menu principal.\n";
					break;
				case 'e':
					cout<<"Imprimiendo Empleados";
					Imprimir();
					break;
				case 'd':
					cout<<"Imprimiendo Pacientes";
					Imprimir();
					break;
				case 'c':
					cout<<"Imprimiendo Salas";
					Imprimir();
					break;
				case 'b':
					cout<<"Imprimiendo Farmacia";
					Imprimir();
					break;
				case 'a':
					cout<<"Imprimiendo Datos de Hospital";
					Imprimir();
					break;
				default:
					cout<<"Opcion Invalida!!!.\n"
						<<"La opccion que ingreso no se encuentra entre las opciones disponibles.\n"
						<<"Porfavor Intentelo denuevo.\n";
				}
			}while (Opcion2!='f');
		}
	} while(Opcion1!='E');
	return 0;
}

