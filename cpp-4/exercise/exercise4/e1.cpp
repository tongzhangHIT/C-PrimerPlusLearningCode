#include<iostream>
#include<string>
int main()
{
	using namespace std;
	string firstname, lastname;
	char letter;
	int age;
	cout << "What is your first name?";
	getline(cin, firstname);
	cout << "What is your last name?";
	cin >> lastname;
	cout << "What letter grade do you deserve?";
	cin >> letter;
	cout << "What is your age?";
	cin >> age;
	cout << "Name:" << lastname << "," << firstname << endl << "Grade:" << (char)(letter + 1) << endl << "Age:" << age;
}