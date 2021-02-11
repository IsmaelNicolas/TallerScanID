#include "InputData.h"
#include "Console.h"


string InputData::InputText(string messaje){

	Console screen;
    string text = "";
    char letter;
	
	screen.changeColor(GRAY,BLACK);
    cout << "\n\t" << messaje << " ";
    
    screen.changeColor(WHITE,BLACK);
    letter = getch();
    while (letter != 13) {

        if ((letter < 91 && letter > 64) || (letter < 123 && letter > 96) || letter == 48) {
            text.push_back(letter);
            cout << letter;
        }
        letter = _getch();
    }
    return text;
}

string InputData::InputNumber(string messaje) {

    string num = "";
    char dig;
    Console screen;
	
	screen.changeColor(GRAY,BLACK);
    cout << "\n\t" << messaje;
    dig = _getch();
    
    screen.changeColor(WHITE,BLACK);
    while (dig != 13) {

        if (dig < 58 && dig > 47) {
            num.push_back(dig);
            cout << dig;
        }
        dig = _getch();
    }
    //istringstream(num) >> numero;
    return num;
}