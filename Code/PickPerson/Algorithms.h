/***********************************************************************
 * Module:  Algorithms.h
 * Author:  ismae
 * Modified: domingo, 7 de febrero de 2021 22:59:50
 * Purpose: Declaration of the class Algorithms
 ***********************************************************************/

#if !defined(__Taller_Algorithms_h)
#define __Taller_Algorithms_h

#include "List.h"
#include "Person.h"
#include <string>

using namespace std;

class Algorithms
{
public:
   void sort(List*);
   void swap(void);
   Person* seach(List *,string param);

protected:
private:

};

#endif