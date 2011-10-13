#include "dateC.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int DateC::daysInMonth(int m) const
{
	switch (m) {
		case 1: return 31;
		case 2: return 28;
		case 3: return 31;
		case 4:	return 30;
		case 5:	return 31;
		case 6:	return 30;	
		case 7:	return 31;
		case 8:	return 31;
		case 9:	return 30;
		case 10:return 31;
		case 11:return 30;
		case 12:return 31;		
	}
}

void DateC::normalize()
{
	if (year<1) {
		cout << "Year must be a positive integer. Automatically changing the year to 1." << endl;
		year=1;
	}
	if (month<1){
		cout << "Month must be between 1 and 12 (inclusive). Automatically changing the month to 1.";
		cout << endl;
		month=1;
	}
	if (month>12){
		cout << "Month must be between 1 and 12 (inclusive). Automatically changing the month to 12.";
		cout << endl;
		month=12;
	}
	if (day<1){
		cout << "Day must be a positive integer. Automatically changing the month to 1.";
		cout << endl;
		month=1;
	} 
	if (day>daysInMonth(month)){
		cout << "For month number: " << month;
		cout << " day must be not bigger than " << daysInMonth(month);
		cout << ". Automatically changing the month to " << daysInMonth(month) << ".";
		cout << endl;
		month=daysInMonth(month);
	} 
}


/*
void prettyPrint(DateC& d)
{
	
}
*/