#include "File.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Console.h"
#include "Age.h"
#include <sstream>
#include <direct.h> 
#include <Windows.h>



void File::makeBackup() {

	Age ag;
	std::ostringstream oss;	

	std::string back = "C:\\PickPerson\\Backups\\BackUp-" + ag.getDate() +".csv";
	oss<< "copy C:\\PickPerson\\Registros\\register.csv" << " "<<back;
	
	system(oss.str().c_str());

	std::cout << "BackUp-"<< ag.getDate()<<".csv" <<std::endl;
	std::cout << "\n" << std::endl;
	
}

void File::makePDF(Person* person) {


	remove("C:\\PickPerson\\Temp\\temp.txt");
	std::ofstream outdata;
	outdata.open("C:\\PickPerson\\Temp\\temp.txt");
	
	if (!outdata) { // file couldn't be opened
		std::cout << "Error: file could not be opened" << std::endl;
	}

	outdata << person->getName() <<std::endl;
	outdata << person->getSurname() << std::endl;
	outdata << person->getAge().getYear() << std::endl;
	outdata << person->getId() << std::endl;

	outdata.close();

	system("python pdf.py");

}

File::File() {
	
	std::ofstream CreateFile("C:\\PickPerson\\Registros\\register.csv", std::ios::app);

}

void File::insertarCliente(Person* person)
{
	std::ofstream wfile("C:\\PickPerson\\Registros\\register.csv",std::ios::app);

	if (!wfile) {
		std::cerr << "El archivo no se puedo abrir" << std::endl;
		system("pause");
	}
	
	wfile << person->getName()<< ";" << person->getSurname() << ";" << person->getAge().getYear() << ";" << person->getId() << std::endl;

	wfile.close();

}


void File::mostrarClientes() {
	
	Console screen;
	std::string data = "";
	std::string refinedData  = "";

	std::ifstream outfile;

	std::string name;
	//std::string surname;
	std::string age;
	std::string id;

	outfile.open("C:\\PickPerson\\Registros\\register.csv");

	if (outfile.fail()) {
		std::cerr << "\nNo se pudo abrir el registro" << std::endl;
	}
	screen.changeColor(WHITE,BLACK);

	std::cout << std:: endl;
	std::cout << "\t\t" << std::setfill('-') << std::setw(47) << "-" << std::endl;
	std::cout << std::setfill(' ');// << std::setw(44) << " " << std::endl;

	std::cout << std::left <<"\t\t"<<std::setw(25) << "|  Nombre y apellido" <<
	std::setw(7) << "| Edad" <<
	std::setw(12) << "| Cedula" <<std::setw(0)<<"  |"<< std::endl;
	std::cout << "\t\t" << std::setfill('-') << std::setw(47) << "-" << std::endl;
	std::cout << std::setfill(' ');
	//std::cout << std::endl;


	while (std::getline(outfile,data)  ) {

		std::stringstream dataProcess(data); 

		std::getline(dataProcess, refinedData, ';');
		name = refinedData;

		std::getline(dataProcess, refinedData, ';');
		name = name + " " + refinedData;

		std::getline(dataProcess, refinedData, ';');
		age = refinedData;

		std::getline(dataProcess, refinedData, ';');
		id = refinedData;

		std::cout << std::left <<"\t\t" << std::setw(25) << "|  " + name  <<
		std::setw(7) << "| " + age <<
		std::setw(12) << "| " + id << std::setw(0) << "  |" << std::endl;

		std::cout << "\t\t" << std::setfill('-') << std::setw(47) << "-" << std::endl;
		std::cout << std::setfill(' ');
	}

	outfile.close();

}
