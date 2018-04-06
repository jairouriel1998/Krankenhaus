#ifndef PACIENTES_H
#define PACIENTES_H
#include <QString>

class pacientes{
private:
    QString C_persona;
    QString C_hospital;
    QString Nombres;
    QString Apellidos;
    int Edad;
    QString Sexo;
    QString Telefono;
    QString Direccion;
    int N_cama;
    QString Historial;
    QString Fecha_ingreso;
    QString Familiar;
    QString Sala;
    QString Medicamento;
    QString Medico;
public:
    pacientes();
    pacientes(const QString&, const QString&, const QString&, const QString&, const int, const QString&, const QString&, const QString&, const int, const QString&, const QString&, const QString&, const QString&, const QString&, const QString&);
    ~pacientes();

    void setC_persona(const QString&);
    void setC_Hospital(const QString&);
    void setNombres(const QString&);
    void setApellidos(const QString&);
    void setEdad(const int);
    void setSexo(const QString&);
    void setTelefono(const QString&);
    void setDireccion(const QString&);
    void setN_cama(const int);
    void setHistorial(const QString&);
    void setFecha_ingreso(const QString&);
    void setFamiliar(const QString&);
    void setSala(const QString&);
    void setMedicamento(const QString&);
    void setMedico(const QString&);

    QString getC_persona();
    QString getC_Hospital();
    QString getNombres();
    QString getApellidos();
    int getEdad();
    QString getSexo();
    QString getTelefono();
    QString getDireccion();
    int getN_cama();
    QString getHistorial();
    QString getFecha_ingreso();
    QString getFamiliar();
    QString getSala();
    QString getMedicamento();
    QString getMedico();
};

#endif // PACIENTES_H
