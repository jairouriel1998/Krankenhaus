#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QList>
#include <QString>
#include <cppconn/connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include "pacientes.h"

using namespace sql;
using std::cout;
using std::endl;

class controller{
private:
    Driver *driver;
    Connection *connection;

public:
    controller();
    ~controller();
    QList<pacientes> getPacientes();
    void closeConnection();
};

#endif // CONTROLLER_H
