#include <iostream>
using namespace std;

int main() {
	string nickname, cyl, school;
	
	cout << "Nickname: ";
	cin >> nickname;
	
	cout << "Course and year: ";
	cin >> cyl;
	
	cout << "School: ";
	cin >> school;
	
	cout << "Wow Congrats" <<nickname<< "!" <<cyl<< "is a nice course. And you are studying in" <<school<< "which is one of the Center of Excellence in Tertiary Education" << endl;

	return 0;	
	
}