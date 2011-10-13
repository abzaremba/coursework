#include "dateC.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	DateC example_date(1,10,10);
	cout << example_date.getDay() << endl;
	example_date.reset(2010,11,11);
	cout << example_date.getYear() << " " << example_date.getMonth() << " " << example_date.getDay();
	example_date.advance(1,1,1);
	cout << endl;
	cout << example_date.getYear() << " " << example_date.getMonth() << " " << example_date.getDay();
	
	for (int i=0; i!=12; ++i)
		cout<< "\nMonth number: " << i+1 << ", number of days in this month: " << example_date.daysInMonth(i+1);
	
	cout << endl << endl;
	cout << example_date.getMonth() << endl << endl;
	example_date.setMonth(33);
	cout << example_date.getMonth() << endl << endl;
	example_date.normalize();
	cout << example_date.getMonth();
	
	//cout << endl << endl << monthToString(1);
	
    return 0;
}