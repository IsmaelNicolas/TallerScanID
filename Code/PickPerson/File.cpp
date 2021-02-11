#include "File.h"
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;
/*
File::File(List* people){
	this->people = people;
}
*/
void File::saveInFile()
{
	/*
	FILE *fich;
	
	//cout<<endl<<prsn->toString()<<endl;
	
	
	if((fich = fopen("Registro.dat","ab"))==NULL){
		printf("\nFichero no existe! ");
	}else{
		fwrite(&people,sizeof(people),1,fich);	// Escribe todo lo que tenemos en la estructura en el fichero . . . .. . 
		fclose(fich);	//Cierra el fichero para que no quede abierto . . . . .
		cout<<"\nDate saved into file the file.\n";
	}
	
	
	
	//cout<<prsn->toString()<<endl;
	
	fstream file;
	file.open("Registro.txt",ios::out|ios::binary);
	if(!file){
		cout<<"Error in creating file...\n";
		return;
	}
	
	file.write((char*)&people,sizeof(people));
	file.close();
	cout<<"Date saved into file the file.\n";*/


}

void File::viewFile(){
	
	/*FILE *fich;
	
	if((fich = fopen("Registro.dat","rb")) == NULL){
		printf("\n Fichero no existe ");
	}else{
		
		fread(&people,sizeof(people),1,fich);	// Lee los registros del Fichero Posicion por posicion . . . .
		while(! feof(fich)){	// Recorriendo el Fichero . . . .
			printf("\n ____________________________");
            cout<<endl<<people->toString()<<endl;
			fread(&people,sizeof(people),1,fich);
		}
	}
	fclose(fich);
	getch();*/
	
	//Person prsn;
	/*
	fstream file;
	file.open("Registro.txt",ios::in|ios::binary);
	if(!file){
		cout<<"Error in opening file...\n";
		return ;
	}
	try{
		if(file.read((char*)&people,sizeof(people))){
			cout<<endl<<endl;
			cout<<"Data extracted from file..\n";
			//print the object
			cout<<people->toString()<<endl;
		}
		else{
			cout<<"Error in reading data from file...\n";
		return ;
		}
	}catch (invalid_argument& e){
		cout<<"Error in reading data from file...\n"<<endl;
	}
	
	*/
} 