#include <iostream>
#include "Menu.h"
#include "List.h"
#include "Person.h"
#include "Algorithms.h"
#include "Options.h"
#include "File.h"
using namespace std;

int main(int argc, char** argv) {

    int option = 0, opt = 0;
    Menu menu;
    Options optn;
    List* people = new List();
    Algorithms algrtms;
    string mainMenu[] = { "Nueva Persona","Mostrar Personas ingresadas","Ver Registro","Backup","Salir" };
    string viewPerson[] = { "Ver todas","Ver Persona","Atras" };

    do
    {

        option = menu.makeMenu("< PICK - PERSON >", mainMenu, 5);

        switch (option)
        {
        case 1:
            //Nueva persona
            system("cls");
            optn.inputNewPerson(people);
            system("pause");
            break;

        case 2:
        
            //Mostrar personas
            opt = menu.makeMenu("< Mostrar Personas >", viewPerson, 3);

            switch (opt)
            {
            case 1:

                system("cls");
                algrtms.sort(people);
                cout << people->toString() << endl;
                system("pause");

                break;
            case 2:

                system("cls");
                optn.viewPerson(people);
                system("pause");

                break;
            default:
                break;
            }

            break;
        
        case 3: {
            //Registro
            system("cls");
            cout << "Registro" << endl;
            File f;
            f.obtenerClientes();
            //cout << p.mostrarInformacion()<<endl;
            system("pause");
            break;
        }
            
            
        case 4:

            //Backup
            system("cls");
            cout << "Backup" << endl;
            system("pause");
            break;

        default:
            system("cls");
            break;
        }

    } while (option > 0 && option < 5);


    return EXIT_SUCCESS;
}