#include "File.h"
#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>
//using namespace std;

void File::makePDF(Person) {




}

File::File() {
	/*
	std::ofstream wfile("data.txt",std::ios::binary);

	if (!wfile) {
		std::cout << "El archivo no se puedo abrir" << std::endl;
		system("pause");
	}

	Person p;

	for (int i = 0; i < 10; ++i) {
		wfile.write(reinterpret_cast<const char*>(&p),sizeof(Person) );
	}
	*/
}

void File::insertarCliente(Person persona)
{
	std::ofstream wfile("data.txt",std::ios::in , std::ios::binary);

	if (!wfile) {
		std::cerr << "El archivo no se puedo abrir" << std::endl;
		system("pause");
	}
	
	wfile.seekp( sizeof(Person) );
	wfile.write(reinterpret_cast<const char*>(&persona),sizeof(Person) );
}


void File::obtenerClientes() {
	
	Person persona;

	std::fstream wfile("data.txt" , std::ios::out|std::ios::in | std::ios::binary);

	if (!wfile) {
		std::cout << "El archivo no se puedo abrir" << std::endl;
		system("pause");
	}

	std::cout << std::left << std::setw(16) << "Nombre y Apellido" <<
		std::setw(11) << "Cedula" <<
		std::setw(4) << "Edad" << std::endl;
	
	wfile.read(reinterpret_cast<char*>(&persona), sizeof(Person));
	while (wfile && !wfile.eof() )
	{
		std::cout << std::left << std::setw(16) << persona.getName()<<persona.getSurname() <<
		std::setw(11) << persona.getId() <<
		std::setw(4) << persona.getAge().getYear() << std::endl;

		wfile.read(reinterpret_cast<char*>(&persona), sizeof(Person));

	}
	wfile.close();


}
