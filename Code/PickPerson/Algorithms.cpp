/***********************************************************************
 * Module:  Algorithms.cpp
 * Author:  ismae
 * Modified: domingo, 7 de febrero de 2021 22:59:50
 * Purpose: Implementation of the class Algorithms
 ***********************************************************************/

#include "Algorithms.h"
#include "Person.h"
#include "List.h"

////////////////////////////////////////////////////////////////////////
// Name:       Algorithms::sort()
// Purpose:    Implementation of Algorithms::sort()
// Return:     int
////////////////////////////////////////////////////////////////////////

void Algorithms::sort(List * People)
{
	Node* aux = People->getNext();
	Node* swapAux = NULL;
	Person *person;
   
	if (People->empy())return;

	while(aux->getNext() != NULL)
	{	
		swapAux = aux->getNext();
		while(swapAux != NULL )
		{
			if(aux->getData()->getSurname() > swapAux->getData()->getSurname() )
			{
				person = swapAux->getData();
				swapAux->setData(aux->getData());
				aux->setData(person);
			}
			swapAux = swapAux->getNext();
		}
		aux= aux->getNext();
	}
   
}

////////////////////////////////////////////////////////////////////////
// Name:       Algorithms::swap()
// Purpose:    Implementation of Algorithms::swap()
// Return:     int
////////////////////////////////////////////////////////////////////////

void Algorithms::swap(void)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Algorithms::seach()
// Purpose:    Implementation of Algorithms::seach()
// Return:     int
////////////////////////////////////////////////////////////////////////

Person* Algorithms::seach(List * people,string param)
{
	
	if(people->empy() ){
		return NULL;
	}

	Person* prsn = NULL;
   	Node *aux = people->getNext();

	

	do{
		if(param ==aux->getData()->getId() )
		{
			return aux->getData();
		}else
		{
			aux = aux->getNext();
		}
	}while(aux!=NULL) ;
	
	return prsn;
	
}