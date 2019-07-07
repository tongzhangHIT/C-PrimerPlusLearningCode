#include<iostream>
int main()
{
	using namespace std;
	int inch,feet;
	cout << "input height(inch):__\b\b" ;
	cin >> inch;
	const int fector=12;
	feet = inch / fector;
	cout << "height is " << feet << "feet.";
	return 0;
}