#include "Persona.h"
#include <string>
#include<iostream>

using namespace std;


std::string Persona::getNombre(void)
{
	return nombre;
}



void Persona::setNombre(std::string newNombre)
{
	nombre = newNombre;
}



std::string Persona::getApellido(void)
{
	return apellido;
}



void Persona::setApellido(std::string newApellido)
{
	apellido = newApellido;
}



std::string Persona::getCedula(void)
{
	return cedula;
}



void Persona::setCedula(std::string newCedula)
{
	cedula = newCedula;
}



std::string Persona::getCorreo(void)
{
	return correo;
}



void Persona::setCorreo(std::string newCorreo)
{
	correo = newCorreo;

}


std::string Persona::mostrarInformacion(){
	return  "Nombre: " + nombre + "\nApellido: " + apellido + "\nCedula: " + cedula;
}
