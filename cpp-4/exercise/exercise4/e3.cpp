#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char firstname[20], lastname[20], name[20];
	cout << "first name: ";
	cin.getline(firstname, 20);
	cout << "last name: ";
	cin.getline(lastname, 20);
	strcpy_s(name, lastname);
	strcat_s(name, ",");
	strcat_s(name, firstname);
	cout << name << endl;
	return 0;
}