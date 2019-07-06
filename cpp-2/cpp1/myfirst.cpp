#include <iostream>
#include <stdio.h>
#include <cmath>

void simon(int);
double stonetolb(double);

//using namespace std;//名称空间支持

int main()
{
	using namespace std;

	int df = 0xABCD;// 0177;
	cout << df << endl;

	simon(5);
	double stone = 2.4;
	double pounds = stonetolb(stone);
	cout << pounds << endl;

	double x = rand();
	double y = sqrt(x);
	cout << x << endl << y << endl;

	cout << "Hello World!";
	cout << endl;
	cout << endl;
	cout << "Hello World!" << endl;
	printf("Hello World!\n");//need include<stdio.h>

	int carrots;
	carrots = 25;
	carrots = carrots - 5;
	cout << "I have " << carrots << " carrots." << endl;

	cin >> carrots;
	cout << "I have " << carrots << " carrots." << endl;

	string carrot;
	cin >> carrot;
	cout << "I have " << carrot << " carrots." << endl;

	return 0;
}
void simon(int a)
{
	using namespace std;

	double b = sqrt(5);
	cout << b << endl;
}
double stonetolb(double a)
{
	return pow(a, a);
}

