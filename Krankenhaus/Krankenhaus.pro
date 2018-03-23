
#-------------------------------------------------
#
# Project created by QtCreator 2018-03-22T22:02:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Krankenhaus
TEMPLATE = app

LIBS        += -lGL
LIBS        += -L/usr/local/lib -L/usr/lib -lmysqlcppconn
INCLUDEPATH += -I/usr/include -I/usr/local/include
               -I/usr/local/include/cppconn

SOURCES += main.cpp\
        krankenhaus.cpp \
    people.cpp

HEADERS  += krankenhaus.h \
    Clases/Administrativos.h \
    Clases/Capsula.h \
    Clases/Empleados.h \
    Clases/Enfermeras.h \
    Clases/Farmacia.h \
    Clases/Hospital.h \
    Clases/inyectable.h \
    Clases/Jarabe.h \
    Clases/Laboratorio.h \
    Clases/Maternidad.h \
    Clases/Medico.h \
    Clases/Morgue.h \
    Clases/Pacientes.h \
    Clases/Pediatria.h \
    Clases/Personas.h \
    Clases/Psiquiatria.h \
    Clases/Quirofano.h \
    Clases/RayosX.h \
    Clases/Salas.h \
    Clases/ServiciosGenerales.h \
    people.h

FORMS    += krankenhaus.ui \
    people.ui
