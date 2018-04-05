#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QList>
#include <QString>
#include <cppconn/connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include "Clases/Pacientes.h"

using namespace sql;


class controller{
private:
    Driver *driver;
    Connection *connection;

public:
    controller();
    ~controller();
    QList<Pacientes> getPacientess();
    void closeConnection();
};

#endif // CONTROLLER_H
