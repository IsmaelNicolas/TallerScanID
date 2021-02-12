#ifndef FILE_H
#define FILE_H

#include "Person.h" 
#include "List.h"

class File
{
	public:
		void insertarCliente(Person persona);
		void obtenerClientes();
		void makePDF(Person);
		File();
	private:
		//List* people;
};

#endif