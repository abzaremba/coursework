#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


int main()
{

	cout << "Enter coefficients of the quadratic equation: ";
	double a,b,c;
	cin >> a >> b >> c;
	
	if (a==0)	{
		cout << "First coefficient should be different from 0!";
		return 0;
	}
	
	double delta = pow(b,2) - 4 * a * c;
	
	if (delta < 0)
		cout << "This quadratic equation doesn't have any real solutions.";
	else if (delta == 0) {
		cout << "This quadratic equation has one real solution: ";
		cout << -b/(2*a);
	} else {
		cout << "This quadratic equation has two real solutions. \nFirst solution: ";
		cout << (-b - sqrt(delta))/(2*a);
		cout << "\nSecond solution: ";
		cout << (-b + sqrt(delta))/(2*a);
	}
	
	return 0;

}