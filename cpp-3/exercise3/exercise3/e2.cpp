#include<iostream>
int main()
{
	using namespace std;
	cout << "input height:_feet,_inch" << endl;
	int feet, inch, pounds;
	double m, kg, bmi;
	cin >> feet;
	cin >> inch;
	inch = inch + 12 * feet;
	cout << "your height is " << inch << "inch." << endl;
	m = inch * 0.0254;
	cout << "input weight:_pounds" << endl;
	cin >> pounds;
	kg = pounds / 2.2;
	cout << "your weight is " << kg << "kg." << endl;
	bmi = kg / (m * m);
	cout << "your bmi is " << bmi << endl;
	return 0;
}