/***********************************************************************
 * Module:  QRcode.h
 * Author:  ismae
 * Modified: domingo, 7 de febrero de 2021 21:55:35
 * Purpose: Declaration of the class QRcode
 ***********************************************************************/

#if !defined(__Taller_QRcode_h)
#define __Taller_QRcode_h

#include <Generator.h>

class QRcode : public Generator
{
public:
   int make(void);

protected:
private:

};

#endif