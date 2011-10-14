#include "dateC.h"
#include <iostream>

using std::cout;
using std::endl;



void prettyPrint(DateC& d)
{
	std::cout << d.getDay() << " " << DateC::monthToString(d.getMonth()) << " " << d.getYear();
}



int main()
{
	DateC date_d(28,9,1964);
	for( int i = 0; i < 3 ; i++ ) {
        date_d.advance(); 
        cout << endl;
		prettyPrint(date_d);
		cout << endl;
    }
    

	/*
	DateC example_date(10,10,10);
	cout << example_date.getDay() << endl;
	example_date.reset(11,5,2011);
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
	
	cout << endl << endl << DateC::monthToString(1);
	
	cout << endl << endl << endl;
	cout << example_date.getDay() << " " << DateC::monthToString(example_date.getMonth()) 
		 << " " << example_date.getYear() << endl;
	example_date.advance(444,0,0);
	cout << example_date.getDay() << " " << DateC::monthToString(example_date.getMonth()) 
		 << " " << example_date.getYear() << endl << endl << endl << endl;
	example_date.advance(0,13,0);
	cout << example_date.getDay() << " " << DateC::monthToString(example_date.getMonth()) 
		 << " " << example_date.getYear() << endl;
		 
	*/
	
    return 0;
}


