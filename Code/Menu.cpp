/***********************************************************************
 * Module:  Menu.cpp
 * Author:  ismae
 * Modified: domingo, 7 de febrero de 2021 23:08:54
 * Purpose: Implementation of the class Menu
 ***********************************************************************/

#include "Menu.h"
#include <windows.h>
////////////////////////////////////////////////////////////////////////
// Name:       Menu::makeMenu(std::string message, std::string* options, int index)
// Purpose:    Implementation of Menu::makeMenu()
// Parameters:
// - message
// - options
// - index
// Return:     int
////////////////////////////////////////////////////////////////////////

int Menu::makeMenu(std::string message, std::string* options, int index)
{
  	
  	screen.changeSize(60,30);
  	int selecction;
  	int key;
  	bool flag = true;
	  
	do{
		
		system("pause");
		
		
	}while(flag);   
  	
  	return selecction;
}