#include <iostream>
#include "Menu.h"

using namespace std;

int main(int argc, char** argv) {
	
	int option=0;
	Menu menu;
	string mainMenu[] = {"Nueva Persona","Mostrar Persona","Buscar Persona","Backup","Salir"};
	
	do
    {   
        
        option = menu.makeMenu("< PICK - PERSON >", mainMenu, 5);

        switch (option)
        {
        case 1:
        	system("cls");
			cout<<option<<endl;
			system("pause");
            break;

        case 2:
        	system("cls");
			cout<<option<<endl;
			system("pause");
            break;    
        case 3:
        	system("cls");
        	cout<<option<<endl;
			system("pause");
			break;
		case 4:
			system("cls");
			cout<<option<<endl;
			system("pause");
			break;    
        default:
            system("cls");
            break;
        }

    } while (option > 0 && option <5);
    
	
	
	return 0;
}