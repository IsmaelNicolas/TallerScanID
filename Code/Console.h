/***********************************************************************
 * Module:  Console.h
 * Author:  ismae
 * Modified: lunes, 8 de febrero de 2021 1:24:35
 * Purpose: Declaration of the class Console
 ***********************************************************************/

#if !defined(__Taller_Console_h)
#define __Taller_Console_h

class Console
{
public:
   void hideCursor(void);
   void changeSize(void);
   void gotoXY(void);
   void changeColor(void);

protected:
private:
   int cursor;
   int with;
   int heigth;


};

#endif