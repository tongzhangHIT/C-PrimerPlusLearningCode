#include<iostream>
#include<string>
using namespace std;
struct car
{
	string manufacturer;
	int year;
};
int main()
{
	cout << "how many cars? ";
	int num;
	cin >> num;
	cin.get();
	car* users = new car[num];
	for (int i = 0; i < num; i++)
	{
		cout << "car #" << i + 1 << ":" << endl;
		cout << "manufacturer: ";
		getline(cin, users[i].manufacturer);
		cout << "year: ";
		cin >> users[i].year;
		cin.get();
	}
	cout << "your collection: " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << users[i].year << " " << users[i].manufacturer << endl;
	}
	return 0;
}