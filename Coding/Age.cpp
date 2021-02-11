#include "Age.h"

Age::Age(){
	time_t today = time(NULL);
	struct tm now = *localtime(&today);
	year = now.tm_year+1900;
	month = now.tm_mon + 1;
	day = now.tm_mday;
}

int Age::getYear(){
	return this->year;
}

void Age::setYear(int newYear){
	this->year = newYear;
}

int Age::getMonth(){
	return this->month;
}

void Age::setMonth(int newMonth){
	this->month = newMonth;
}

int Age::getDay(){
	return this->day;
}

void Age::setDay(int newDay){
	this->day = newDay;
}

Age Age::calculateAge(){
	
	Age aux;
	Age current;
	
	time_t today = time(NULL);
	struct tm now = *localtime(&today);
	
	current.setYear(now.tm_year+1900);
	current.setMonth(now.tm_mon + 1);
	current.setDay(now.tm_mday);
	
	if( current.getDay() < this->day )
	{
		
		current.setDay( current.getDay() +30 );
		current.setMonth( current.getMonth() -1 );
		aux.setDay(current.getDay() - this->day );
	
	}else
	{
		aux.setDay(current.getDay() - this->day);
	}
	
	if( current.getMonth() < this->month )
	{
		current.setMonth( current.getMonth() + 12 );
		current.setYear( current.getYear() -1 );
		aux.setMonth(current.getMonth() - this->month);
	}else
	{
		current.setMonth( current.getMonth() - this->month);	
	}
	
	aux.setYear( current.getYear() - this->year );
	
	return aux;
}
