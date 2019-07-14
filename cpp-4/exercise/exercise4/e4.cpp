#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string firstname, lastname, name;
	cout << "first name: ";
	getline(cin, firstname);
	cout << "last name: ";
	getline(cin, lastname);
	name = lastname + "," + firstname;
	cout << name << endl;
	return 0;
}