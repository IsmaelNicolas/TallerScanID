#ifndef AGE_H
#define AGE_H

#include <ctime>

class Age
{
	public:
		Age calculateAge();
		int getYear();
		void setYear(int newYear);
		int getMonth();
		void setMonth(int newMonth);
		int getDay();
		void setDay(int newDay);
		Age();
	private:
		int year;
		int month;
		int day;
};

#endif