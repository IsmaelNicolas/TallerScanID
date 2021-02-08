/***********************************************************************
 * Module:  Node.h
 * Author:  ismae
 * Modified: lunes, 8 de febrero de 2021 1:30:20
 * Purpose: Declaration of the class Node
 ***********************************************************************/

#if !defined(__Taller_Node_h)
#define __Taller_Node_h

class Node
{
public:
   int getData(void);
   void setData(int newData);
   int getNext(void);
   void setNext(int newNext);
   Node();
   ~Node();

protected:
private:
   int data;
   int next;


};

#endif