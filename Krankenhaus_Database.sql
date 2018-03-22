CREATE DATABASE Krankenhaus_Database; /* CREANDO LA BASE DE DATOS */

USE Krankenhaus_Database;  /* ABRIENDO LA BASE DE DATOS RECIEN CREADA */

/* CREANDO LAS TABLAS QUE SE USARÁN */
CREATE TABLE Hospital(
  C_hospital VARCHAR(20) PRIMARY KEY
);

CREATE TABLE Personas(
  C_persona VARCHAR(30),
  C_hospital VARCHAR(30),
  Nombres VARCHAR(30),
  Apellidos VARCHAR(30),
  Edad INT,
  Sexo VARCHAR(10),
  Telefono VARCHAR(8),
  Direccion TEXT,
  PRIMARY KEY (C_persona),
  FOREIGN KEY (C_hospital) REFERENCES Hospital(C_hospital)
);

CREATE TABLE Paciente(
  C_persona VARCHAR(30),
  N_cama INT,
  Historial TEXT,
  Fecha_ingreso VARCHAR(30),
  Familiar VARCHAR(30),
  Sala VARCHAR(30),
  Medicamento TEXT,
  Medico VARCHAR(30),
  PRIMARY KEY (C_persona),
  FOREIGN KEY (C_persona) REFERENCES Personas(C_persona)
);

CREATE TABLE Empleados(
  C_persona VARCHAR(30),
  Salario FLOAT,
  Tipo TEXT,
  Descripcion TEXT,
  PRIMARY KEY (C_persona),
  FOREIGN KEY (C_persona) REFERENCES Personas(C_persona)
);

CREATE TABLE Farmacia(
  C_farmacia VARCHAR(30),
  C_hospital VARCHAR(30),
  Medicamento TEXT,
  Cantidad TEXT,
  PRIMARY KEY (C_farmacia),
  FOREIGN KEY C_hospital REFERENCES Hospital(C_hospital)
);

CREATE TABLE Laboratorio(
  C_laboratorio VARCHAR(30),
  C_hospital VARCHAR(30),
  TipoExamen TEXT,
  PRIMARY KEY (C_laboratorio),
  FOREIGN KEY C_hospital REFERENCES Hospital(C_hospital)
);

CREATE TABLE Morgue(
  C_morgue VARCHAR(30),
  C_hospital VARCHAR(30),
  Cadaver TEXT,
  Autopsia TEXT,
  PRIMARY KEY (C_morgue),
  FOREIGN KEY (C_hospital) REFERENCES Hospital(C_hospital)
);

CREATE TABLE RayosX(
  C_rayos VARCHAR(30),
  C_hospital VARCHAR(30),
  Tipo TEXT,
  PRIMARY KEY (C_rayos),
  FOREIGN KEY (C_hospital) REFERENCES Hospital(C_hospital)
);

CREATE TABLE Salas(
  C_sala VARCHAR(30),
  C_hospital VARCHAR(30),
  Sala TEXT,
  Elemento TEXT,
  PRIMARY KEY (C_sala),
  FOREIGN KEY (C_hospital) REFERENCES Hospital(C_hospital)
);
