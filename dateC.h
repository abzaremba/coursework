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
	void advance(int y=0, int m=0, int d=1);
	void normalize();
	
	int daysInMonth(int m) const;
	static std::string monthToString(int m)
	{
	switch (m) {
		case 1: return "January"; break;
		case 2: return "February"; break;
		case 3: return "March"; break;
		case 4:	return "April"; break;
		case 5:	return "May"; break;
		case 6:	return "June"; break;
		case 7:	return "July"; break;
		case 8:	return "August"; break;
		case 9:	return "September"; break;
		case 10:return "October"; break;
		case 11:return "November"; break;
		default:return "December"; break;
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
void prettyPrint(DateC& d)
{
	std::cout << d.getDay() << " " << DateC::monthToString(d.getMonth()) << " " << d.getYear();
}
*/

#endif
