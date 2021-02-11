/***********************************************************************
 * Module:  List.cpp
 * Author:  ismae
 * Modified: domingo, 7 de febrero de 2021 21:51:42
 * Purpose: Implementation of the class List
 ***********************************************************************/

#include "List.h"
#include <stdlib.h>
#include <sstream>
#include <iostream>

////////////////////////////////////////////////////////////////////////
// Name:       List::add()
// Purpose:    Implementation of List::add()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List::add(Person* newPerson)
{
   Node* aux = this->node;
   Node* newNode;
   
   	//this->node = new Node(newPerson,NULL);
   if(empy())
   {
   		this->node = new Node(newPerson,this->node);	
   }
   else
   {
   	
   		while( aux->getNext() != NULL )
		{
   			aux = aux->getNext();		
		}
		newNode = new Node(newPerson,NULL);
		aux->setNext(newNode);
		//this->node = aux;
   }
   
   size++;
   
}

////////////////////////////////////////////////////////////////////////
// Name:       List::toString()
// Purpose:    Implementation of List::toString()
// Return:     void
////////////////////////////////////////////////////////////////////////

std::string List::toString(void)
{
   std::stringstream s;
   Node* aux = this->node;
   
   while( aux != NULL )
	{	
		
		s<<aux->getData()->toString()<<std::endl;
   		aux = aux->getNext();		
	}
   return s.str();
}

////////////////////////////////////////////////////////////////////////
// Name:       List::List()
// Purpose:    Implementation of List::List()
// Return:     
////////////////////////////////////////////////////////////////////////

List::List()
{
	this->node =NULL;
	size=0;
}

////////////////////////////////////////////////////////////////////////
// Name:       List::~List()
// Purpose:    Implementation of List::~List()
// Return:     
////////////////////////////////////////////////////////////////////////

List::~List()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       List::empy()
// Purpose:    Implementation of List::empy()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool List::empy(void)
{
   return (this->node == NULL)? true:false;
}

////////////////////////////////////////////////////////////////////////
// Name:       List::getSize()
// Purpose:    Implementation of List::getSize()
// Return:     int
////////////////////////////////////////////////////////////////////////

int List::getSize(void)
{
   return size;
}

Node* List::getNext(){
	return this->node; 
}
