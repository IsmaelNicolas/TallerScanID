/***********************************************************************
 * Module:  Node.h
 * Author:  ismae
 * Modified: lunes, 8 de febrero de 2021 1:30:20
 * Purpose: Declaration of the class Node
 ***********************************************************************/

#if !defined(__Taller_Node_h)
#define __Taller_Node_h

#include "Person.h"

class Node
{
public:
   Person* getData(void);
   void setData(Person* newData);
   Node* getNext(void);
   void setNext(Node* newNext);
   Node();
   Node(Person* , Node* );
   ~Node();

protected:
private:
   Person* data;
   Node* next;


};

#endif