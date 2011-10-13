#ifndef GUARD_dateC_h
#define GUARD_dateC_h

#include <string>
#include <iostream>


class DateC
{
public:
	DateC(): year(1), month(1), day(1) {}
	DateC(int y, int m, int d): year(y), month(m), day(d) {}
	
	int getYear() const { return year; }
	int getMonth() const { return month; }
	int getDay() const { return day; }
	
	void setYear(int y) { year=y; }
	void setMonth(int m) { month=m; }
	void setDay(int d) { day=d; }
	
	void reset(int y, int m, int d) { year=y; month=m; day=d; }
	void advance(int y, int m, int d) { year+=y; month+=m; day+=d; }
	void normalize();
	
	int daysInMonth(int m) const;
	static std::string monthToString(int m)
	{
	switch (m) {
		case 1: return "January";
		case 2: return "February";
		case 3: return "March";
		case 4:	return "April";
		case 5:	return "May";
		case 6:	return "June";	
		case 7:	return "July";
		case 8:	return "August";
		case 9:	return "September";
		case 10:return "October";
		case 11:return "November";
		case 12:return "December";		
	}
	}
	
	// tests
	static void testOperators(void);
	static void testAdvancesWrap(void);
	static void testYearWrap(void);
	static void testMonthWrap(void);
	
private:
	int year, month, day;
};
/*
static std::string DateC::monthToString(int m)
{
	switch (m) {
		case 1: return "January";
		case 2: return "February";
		case 3: return "March";
		case 4:	return "April";
		case 5:	return "May";
		case 6:	return "June";	
		case 7:	return "July";
		case 8:	return "August";
		case 9:	return "September";
		case 10:return "October";
		case 11:return "November";
		case 12:return "December";		
	}
}
*/


void prettyPrint(DateC& d)
{
	std::cout << d.getDay() << " " << DateC::monthToString(d.getMonth()) << d.getYear();
}

#endif