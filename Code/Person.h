/***********************************************************************
 * Module:  Person.h
 * Author:  ismae
 * Modified: domingo, 7 de febrero de 2021 21:42:23
 * Purpose: Declaration of the class Person
 ***********************************************************************/

#if !defined(__Taller_Person_h)
#define __Taller_Person_h

#include <string>
#include "Age.h"

class Person
{
public:
   std::string getName(void);
   void setName(std::string newName);
   std::string getSurname(void);
   void setSurname(std::string newSurname);
   Age getAge(void);
   void setAge(Age newAge);
   std::string getId(void);
   void setId(std::string newId);
   std::string getEmail(void);
   void setEmail(std::string newEmail);

protected:
private:
   std::string name;
   std::string surname;
   Age age;
   std::string id;
   std::string email;


};

#endif