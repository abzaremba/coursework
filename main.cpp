/*
** main.cpp
** exercise date class
** homework 3 (June 2011)
** (c) Peter Woodward, City University
** use with datec .h and .cpp
*/

#include "dateC.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(unsigned int argc, char* argv[])
{
    DateC::testMonthWrap();
    DateC::testYearWrap();
    DateC::testAdvancesWrap();
    DateC::testOperators();
}

void DateC::testOperators(void)
{
    cout << "DateC::testOperators()" << endl ;
    cout << "**********************" << endl << endl ;
    cout << "\tCHECK INITIALIZATION:" << endl;
    cout << "\t---------------------" << endl;
    DateC b(5,6,2008);
    prettyPrint(b);
    cout << "ACTION: Call copy constructor ->" << endl;
    DateC a = b ; // note initialization calls copy cons
    prettyPrint(a);
    cout << endl << endl;

    cout << "\tCHECK ASSIGNMENT:" << endl;
    cout << "\t-----------------" << endl;
    DateC c, d(5,6,2008);
    prettyPrint(d);
    c = d; // call assignment
    cout << "ACTION: Call assignment op ->" << endl;
    prettyPrint(c);
    cout << endl << endl;
}
    
  
void DateC::testAdvancesWrap(void)
{
    DateC d;
    cout << "DateC::testAdvanceWrap()" << endl ;
    cout << "*********************" << endl << endl ;
    cout << "\tCHECK ADVANCE MULTIPLES:" << endl;
    cout << "\t------------------------" << endl;
    d.setDay(1);
    d.setMonth(12);
    d.setYear(1999); 
    prettyPrint(d);
    cout << "ACTION: set date 01-Dec-1999, advance, 31 days, 1 month and 1 year ->" << endl;
    d.advance(1,1,31);
    prettyPrint(d);
    cout << endl << endl;
}

void DateC::testYearWrap(void)
{
    DateC d;
    cout << "DateC::testYearWrap()" << endl ;
    cout << "*********************" << endl << endl ;
    cout << "\tCHECK COPY CONSTRUCTOR:" << endl;
    cout << "\t-----------------------" << endl;
    prettyPrint(d);
    cout << "ACTION: Call copy constructor ->" << endl;
    DateC e(d);
    prettyPrint(e);
    cout << endl << endl;
    

    cout << "\tCHECK YEAR WRAP:" << endl;
    cout << "\t----------------" << endl;
    cout << "ACTION: Reset to 31-Dec-1980, advance 1 day ->" << endl;
    e.reset(1980,12,31); // note ordering y/m/d
    prettyPrint(e); e.advance(); // new year
    prettyPrint(e);
    cout << endl << endl;
    
    
    cout << "\tCHECK MILLENIUM WRAP:" << endl;
    cout << "\t---------------------" << endl;
    cout << "ACTION: Set day/month/year to 1-Dec-1999, advance 31 days ->" << endl;
    d.setDay(1);
    d.setMonth(12);
    d.setYear(1999); 
    prettyPrint(d);
    d.advance(0,0,31); // advance to new millenium, 31 days
    prettyPrint(d);
    cout << endl << endl;
    
    cout << "\tCHECK YEAR WRAP:" << endl;
    cout << "\t----------------" << endl;
    cout << "ACTION: advance 1 year ->" << endl;
    prettyPrint(d);
    d.advance(1,0,0); // advance to new month
    prettyPrint(d);
    cout << endl << endl;

}

void DateC::testMonthWrap(void)
{
    DateC d(28,9,1964);
    cout << "DateC::testMonthWrap()" << endl ;
    cout << "**********************" << endl << endl;
    cout << "\tCHECK MONTH WRAP (BY DAY):" << endl;
    cout << "\t--------------------------" << endl;
    prettyPrint(d); 
    cout << "ACTION: Advance by day ->";
    for( int i = 0; i < 3 ; i++ ) {
        d.advance(); 
        cout << "day ";
    }// this is 31 of sep, i.e.. 1/nov
    cout << endl;
    prettyPrint(d);
    cout << endl;
    
    cout << "\tCHECK DAYS IN MONTH:" << endl;
    cout << "\t--------------------" << endl;
    cout << "ACTION: Print days in month ->" ;
    cout << DateC::monthToString( d.getMonth()) ;
    cout << " are : " << d.daysInMonth( d.getMonth() ) ;
    cout << endl << endl ;

    cout << "\tCHECK MONTH WRAP, (BY MONTH)" << endl;
    cout << "\t----------------------------" << endl;
    d.setDay(1);
    d.setMonth(12);
    d.setYear(1999); 
    prettyPrint(d);
    d.advance(0,1,0); // advance to new month
    cout << "ACTION: Advance by 1 month ->" << endl;
    prettyPrint(d);
    cout << endl << endl;
}


