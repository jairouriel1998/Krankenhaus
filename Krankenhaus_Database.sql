CREATE DATABASE Krankenhaus_Database;

USE Krankenhaus_Database;

CREATE TABLE Hospital(
  C_hospital VARCHAR(20) PRIMARY KEY
);

CREATE TABLE Personas(
  C_persona VARCHAR(30) PRIMARY KEY,
  C_hospital VARCHAR(30),
  Nombres VARCHAR(30),
  Apellidos VARCHAR(30),
  Edad INT,
  Sexo VARCHAR(10),
  Telefono VARCHAR(8),
  Direccion TEXT 
);
