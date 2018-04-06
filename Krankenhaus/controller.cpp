#include "controller.h"

controller::controller(){
    try{
            driver = get_driver_instance();
            connection = driver->connect("localhost","root","");
            connection->setAutoCommit(0);
            connection->setSchema("Krankenhaus_database");
        }catch(SQLException &ex){
            cout<<"Error, no se puede connectar a la base de datos" <<ex.getErrorCode();
        }
}

QList <pacientes> controller::getPacientes(){
    QList <pacientes> lista;
    PreparedStatement *consulta = connection->prepareStatement("SELECT * FROM Personas Pe INNER JOIN Paciente Pa WHERE Pe.C_persona  = Pa.C_persona");
    ResultSet *resultados = NULL;
    try{
        resultados =  consulta->executeQuery();
        while(resultados->next()){
            pacientes p;
            p.setC_persona(QString::fromStdString(resultados->getString("C_persona")));
            p.setC_Hospital(QString::fromStdString(resultados->getString("C_hospital")));
            p.setNombres(QString::fromStdString(resultados->getString("Nombres")));
            p.setApellidos(QString::fromStdString(resultados->getString("Apellidos")));
            p.setEdad(resultados->getInt("Edad"));
            p.setSexo(QString::fromStdString(resultados->getString("Sexo")));
            p.setTelefono(QString::fromStdString(resultados->getString("Telefono")));
            p.setDireccion(QString::fromStdString(resultados->getString("Direccion")));
            p.setN_cama(resultados->getInt("N_cama"));
            p.setHistorial(QString::fromStdString(resultados->getString("Historial")));
            p.setFecha_ingreso(QString::fromStdString(resultados->getString("Fecha_ingreso")));
            p.setFamiliar(QString::fromStdString(resultados->getString("Familiar")));
            p.setSala(QString::fromStdString(resultados->getString("Sala")));
            p.setMedicamento(QString::fromStdString(resultados->getString("Medicamento")));
            p.setMedico(QString::fromStdString(resultados->getString("Medico")));
            lista.append(p);
        }
    }catch(SQLException &ex){
        cout<<"Ha ocurrido un error" <<ex.getErrorCode() << endl;
    }
    resultados->close();
    consulta->close();
    delete resultados;
    delete consulta;
    return lista;
}



void controller::closeConnection(){
    connection->close();
}

controller::~controller(){
    delete connection;
    //borrar driver
}

