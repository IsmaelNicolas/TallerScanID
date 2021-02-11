#include "File.h"
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

char File::insertarCliente(Person persona)
{
	FILE* archivo;
	char insercion;

	archivo = fopen("personas.dat", "ab");

	if (archivo == NULL) {
		insercion = 0;

	}
	else {
		fwrite(&persona, sizeof(persona), 1, archivo);
		insercion = 1;

		fclose(archivo);
	}

	return insercion;
}

Person* File::obtenerClientes(int* n) {
	FILE* archivo;
	Person persona;
	Person* personas;
	int i;

	archivo = fopen("personas.dat", "rb");

	if (archivo == NULL) {
		*n = 0;
		personas = NULL;

	}
	else {

		fseek(archivo, 0, SEEK_END);
		*n = ftell(archivo) / sizeof(Person);
		personas = (Person*)malloc((*n) * sizeof(Person));

		fseek(archivo, 0, SEEK_SET);
		fread(&persona, sizeof(persona), 1, archivo);
		i = 0;
		while (!feof(archivo)) {
			personas[i++] = persona;
			fread(&persona, sizeof(persona), 1, archivo);
		}

		fclose(archivo);
	}

	return personas;
}