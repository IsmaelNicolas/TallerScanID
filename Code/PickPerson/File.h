#ifndef FILE_H
#define FILE_H

#include "Person.h" 
#include "List.h"

class File
{
	public:
		char insertarCliente(Person persona);
		Person* obtenerClientes(int* n);
		//File(List* people);
	private:
		//List* people;
};

#endif