#include<iostream>
int main()
{
	using namespace std;
	int year=0;
	double daphne, celo;
	daphne = celo = 100;
	do
	{
		daphne += 10;
		celo *= 1.05;
		++year;
	} while (daphne > celo);
	cout << "year= " << year << endl;
	cout << "daphne= " << daphne << endl;
	cout << "celo= " << celo << endl;
	return 0;
}