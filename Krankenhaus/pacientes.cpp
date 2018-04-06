#include "pacientes.h"

pacientes::pacientes(){
    setC_persona("");
    setC_Hospital("");
    setNombres("");
    setApellidos("");
    setEdad(0);
    setSexo("");
    setTelefono("");
    setDireccion("");
    setN_cama(0);
    setHistorial("");
    setFecha_ingreso("");
    setFamiliar("");
    setSala("");
    setMedicamento("");
    setMedico("");
}

pacientes::pacientes(const QString &c_persona, const QString &c_hospital, const QString &nombres, const QString &apellidos, const int edad, const QString &sexo, const QString &telefono, const QString &direccion, const int n_cama, const QString &historial, const QString &fecha_ingreso, const QString &familiar, const QString &sala, const QString &medicamento, const QString &medico){
    setC_persona(c_persona);
    setC_Hospital(c_hospital);
    setNombres(nombres);
    setApellidos(apellidos);
    setEdad(edad);
    setSexo(sexo);
    setTelefono(telefono);
    setDireccion(direccion);
    setN_cama(n_cama);
    setHistorial(historial);
    setFecha_ingreso(fecha_ingreso);
    setFamiliar(familiar);
    setSala(sala);
    setMedicamento(medicamento);
    setMedico(medico);
}

pacientes::~pacientes(){}

void pacientes::setC_persona(const QString &c_persona){C_persona = c_persona;}
void pacientes::setC_Hospital(const QString &c_hospital){C_hospital = c_hospital;}
void pacientes::setNombres(const QString &nombres){Nombres = nombres;}
void pacientes::setApellidos(const QString &apellidos){Apellidos = apellidos;}
void pacientes::setEdad(const int edad){Edad = edad;}
void pacientes::setSexo(const QString &sexo){Sexo = sexo;}
void pacientes::setTelefono(const QString &telefono){Telefono = telefono;}
void pacientes::setDireccion(const QString &direccion){Direccion = direccion;}
void pacientes::setN_cama(const int n_cama){N_cama = n_cama;}
void pacientes::setHistorial(const QString &historial){Historial = historial;}
void pacientes::setFecha_ingreso(const QString &fecha_ingreso){Fecha_ingreso = fecha_ingreso;}
void pacientes::setFamiliar(const QString &familiar){Familiar = familiar;}
void pacientes::setSala(const QString &sala){Sala = sala;}
void pacientes::setMedicamento(const QString &medicamento){Medicamento = medicamento;}
void pacientes::setMedico(const QString &medico){Medico = medico;}


QString pacientes::getC_persona(){return C_persona;}
QString pacientes::getC_Hospital(){return C_hospital;}
QString pacientes::getNombres(){return Nombres;}
QString pacientes::getApellidos(){return Apellidos;}
int pacientes::getEdad(){return Edad;}
QString pacientes::getSexo(){return Sexo;}
QString pacientes::getTelefono(){return Telefono;}
QString pacientes::getDireccion(){return Direccion;}
int pacientes::getN_cama(){return N_cama;}
QString pacientes::getHistorial(){return Historial;}
QString pacientes::getFecha_ingreso(){return Fecha_ingreso;}
QString pacientes::getFamiliar(){return Familiar;}
QString pacientes::getSala(){return Sala;}
QString pacientes::getMedicamento(){return Medicamento;}
QString pacientes::getMedico(){return Medico;}


