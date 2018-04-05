#include "controller.h"

controller::controller(){
    try{
            driver = get_driver_instance();
            connection = driver->connect("localhost","root","");
            connection->setAutoCommit(0);
            connection->setSchema("Krankenhaus_database");
        }catch(SQLException &ex){
            cout<<"Error, no se puede connectar a la base de datos" <<ex.getErrorCode() << endl;
        }
}


