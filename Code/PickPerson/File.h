#ifndef FILE_H
#define FILE_H

#include "Person.h" 
#include "List.h"

class File
{
	public:
		void insertarCliente(Person*);
		void mostrarClientes();
		void makePDF(Person*);
		void makeBackup();
		File();
	private:
		//List* people;
};

#endif