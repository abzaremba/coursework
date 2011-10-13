#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::min;


int main()
{

	int parcel_weight;
	cout << "Type weight in kilograms: ";
	cin >> parcel_weight;
	
	if (parcel_weight<=0 || parcel_weight >44) {
		cout << "\nParcel weight has to be a positive number, not bigger than 44";
		return 0;
	}
	
	int parcel_price = 13;
	
	if (parcel_weight>1){
		parcel_price = parcel_price + 6 * (min(parcel_weight - 1, 4));
		if (parcel_weight>5){
			parcel_price = parcel_price + 5 * (min(parcel_weight - 5, 5));
			if (parcel_weight>10){
				parcel_price = parcel_price + 4 * (parcel_weight - 10);
			}
		}
	}
	
	cout << "\nParcel price equals " << parcel_price;
	
	return 0;

}