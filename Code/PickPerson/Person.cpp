/***********************************************************************
 * Module:  Person.cpp
 * Author:  ismae
 * Modified: domingo, 7 de febrero de 2021 21:42:23
 * Purpose: Implementation of the class Person
 ***********************************************************************/

#include "Person.h"
#include  <sstream>
#include <iostream>

std::string Person::getName(void)
{
   return name;
}


void Person::setName(std::string newName)
{
   name = newName;
}


std::string Person::getSurname(void)
{
   return surname;
}



void Person::setSurname(std::string newSurname)
{
   surname = newSurname;
}


Age Person::getAge(void)
{
   return age;
}


void Person::setAge(Age newAge)
{
   age = newAge;
}


std::string Person::getId(void)
{
   return id;
}

void Person::setId(std::string newId)
{
   id = newId;
}


std::string Person::getEmail(void)
{
   return email;
}



void Person::setEmail(std::string newEmail)
{
   email = newEmail;
}

std::string Person::mostrarInformacion() {
	return  "Nombre: " + this->name + "\nApellido: " + this->surname + "\nCedula: " + this->id;
}

std::string Person::toString()
{
	std::stringstream s;

	s<<"Nombre: "<<this->name<<std::endl;	
	s<<"Apellido: "<<this->surname<<std::endl;
	s<<"Edad: "<<this->age.getYear()<<std::endl;
	//s<<"Correo: "<<this->email<<std::endl;
	
	return s.str();	
}