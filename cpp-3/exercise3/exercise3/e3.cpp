#include<iostream>
int main()
{
	using namespace std;
	const double fector = 60.0;
	int degree, minute, second;
	cout << "enter degrees, minutes and seconds." << endl;
	cout << "first, degrees:" << endl;
	cin >> degree;
	cout << "second, minutes:" << endl;
	cin >> minute;
	cout << "third, seconds:" << endl;
	cin >> second;
	double degrees;
	degrees = degree + minute / fector + second / fector / fector;
	cout << degree << "degrees, " << minute << "minutes, " << second << "seconds = ";
	cout << degrees << "degrees.";
	return 0;
}