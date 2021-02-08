/***********************************************************************
 * Module:  List.h
 * Author:  ismae
 * Modified: domingo, 7 de febrero de 2021 21:51:42
 * Purpose: Declaration of the class List
 ***********************************************************************/

#if !defined(__Taller_List_h)
#define __Taller_List_h

class List
{
public:
   void add(void);
   void toString(void);
   List();
   ~List();
   bool empy(void);
   int getSize(void);

protected:
private:
   Nodo* node;
   int size;


};

#endif