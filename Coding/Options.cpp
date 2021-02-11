#include "Options.h"
#include "InputData.h"
#include "Console.h"
#include <iostream>
#include "Algorithms.h"
//#include "GenerarQR.cpp"
#include "File.h"

using namespace std;

void Options::inputNewPerson(List* people)
{
	system("cls");
	Person* prsn = new Person();
	Console screen;
	string dato = "";
	InputData in;
	Age current,brth;
	
	int specialDay = 28;
	int dayMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	do
	{
		screen.gotoXY(4,4);
		dato = in.InputNumber("Ingrese su numero de cedula:               \b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		
	} while (dato == "" || dato.size() != 10);
	
	prsn->setId(dato);
	
	do{
		screen.gotoXY(4,6);
		dato = in.InputText("Ingrese el nombre:     \b\b\b\b\b ");
	}while (dato == "");
	
	prsn->setName(dato);
	
	do{
		screen.gotoXY(4,8);
		dato = in.InputText("Ingrese el apellido:     \b\b\b\b\b ");
	}while (dato == "");
	
	prsn->setSurname(dato);
	
	do{
		
		screen.gotoXY(4, 10);
		dato = in.InputNumber("Ingrese su anio de nacimiento: (AAAA):      \b\b\b\b\b\b");
			
	} while (dato.size() != 4 || stoi(dato) <= (current.getYear() - 100) || stoi(dato) >= (current.getYear() -18) );
		
	brth.setYear(stoi(dato));
	
	if(stoi(dato) % 4 == 0 && stoi(dato) % 100 != 0 || stoi(dato) % 400 == 0){
		specialDay = 29;
	}
	
	do{
		
		screen.gotoXY(4, 11);
		dato = in.InputNumber("Ingrese su mes de nacimiento: (MM):      \b\b\b\b\b\b");
		
	}while(dato.size() !=2 || stoi(dato) <=0 || stoi(dato) > 12);
	
	brth.setMonth(stoi(dato));
	
	do{
		
		screen.gotoXY(4, 12);
		dato = in.InputNumber("Ingrese su dia de nacimiento: (DD):      \b\b\b\b\b\b");
		
		
		if( (stoi(dato) % 4 == 0 && stoi(dato) % 100 != 0 || stoi(dato) % 400 == 0) && stoi(dato) == 2 ){
			specialDay = 29;
		}else{
			specialDay = dayMonth[ brth.getMonth() -1];
		}
		
		
	}while ( dato.size() != 2 || stoi(dato) <= 0 || stoi(dato) > specialDay );
	
	brth.setDay(stoi(dato));
	
	prsn->setAge(brth.calculateAge());
	
	//File dataFile(people);
	//dataFile.saveInFile();
	
	people->add(prsn);
	
	
	
	cout<<"\n\t";
}

void Options::viewPerson(List* people){

	Console screen;
	string dato = "";
	Algorithms lgrtm;
	Person* prsn = new Person(); 
	InputData in;
	
	//GeneraQR qr;
	string info;
	char* cadena = new char[50];
	
	do
	{
		screen.gotoXY(4,4);
		dato = in.InputNumber("Ingrese su numero de cedula:               \b\b\b\b\b\b\b\b\b\b\b\b\b\b");
		
	} while (dato == "" || dato.size() != 10);
	
	prsn =  lgrtm.seach(people,dato);
	
	cout<<"\n";	
		
	if(prsn ==NULL){
		cout<<"\tNo existe informacion... "<<endl;
	}else{
		screen.changeColor(WHITE,BLACK);
		cout<<prsn->toString()<<endl;
	}
	
	info = "Nombre: " + prsn->getName() +"\nApellido: " + prsn->getSurname() + "Cedula: " + prsn->getId();
	
	for(int i = 0; i<info.size() ; i++){
		*(cadena + i) = info[i];
	}
	
	//qr.crear_QR(cadena);
	

}
