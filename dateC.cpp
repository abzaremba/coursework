#include "dateC.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;



void DateC::advance(int y, int m, int d) 
{ 
	
	day += d;
	int temp_month = month;
	while ( day > daysInMonth(temp_month) ) {
		cout << "day: " << day << " month: " << month << endl;
		cout << "daysInMonth(temp_month) " << daysInMonth(temp_month) << endl;
		day -= daysInMonth(temp_month);
		temp_month = (++temp_month> 12) ? 1 : temp_month;
		m += 1;
		cout << "day: " << day << " month: " << month << endl;
		cout << "d: " << d << " m: " << m << endl;
	}
	
	
	if (month+m>12) {
		cout << "m: " << m << " y: " << y << endl;
		cout << "month: " << month << " year: " << year << endl;
		y+=(month+m)/12;
		month=(month+m)%12;
		cout << "m: " << m << "y: " << y << endl;
		cout << "month: " << month << " year: " << year << endl;
	}
	
	year+=y;
}


int DateC::daysInMonth(int m) const
{
	switch (m) {
		case 2: return 28; break;
		case 4:	return 30; break;
		case 6:	return 30; break;
		case 9:	return 30; break;
		case 11:return 30; break;
		default : return 31; break;
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


