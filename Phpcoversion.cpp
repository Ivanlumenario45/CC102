#include <iostream>
using namespace std;
const float exchangeRate = 55.87;


int main () { 
	
	int choice;
	float amount, convertedAmount ;
	
	cout << "Currency Converter\n";
	cout << "1. Converter Dollar to PHP\n";
	cout << "2. Converter PHP to Dollar\n";
	cout << "Choose an option (1 or 2) ";
	cin >> choice;
	
	if (choice == 1 ){
		cout << "Enter amount in Dollar:";
		cin >> amount;
		convertedAmount = amount * exchangeRate;
		cout << amount << " Dollar (s) = " << convertedAmount << " PHP\n";	
	}else if (choice == 2) {
		cout << "Enter amount in PHP ";
		cin >> amount;
		convertedAmount = amount / exchangeRate;
		cout << amount << " PHP = " << convertedAmount << " Dollar (s)\n";
	}else {
			cout << "Invalid choice. Please run the program again. \n";
		}
		
	return 0;
 }
	