#include <iostream>
using namespace std;

int main()
{
	char choice;
	cout <<"  Is it  raining? [Y/N]";
	cin >> choice;
	if (choice == 'Y') {
		cout << "Get an umbrella.";
	}
	else if (choice == 'N') { 
		cout << "It is sunny";
	}
	return 0;
	
}