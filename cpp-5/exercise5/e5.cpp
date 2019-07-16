#include<iostream>
int main()
{
	using namespace std;
	const int size = 12;
	string months[size]{ "1:", "2:", "3:", "4:", "5:", "6:", "7:", "8:", "9:", "10:", "11:", "12:" };
	int sales[size]{ 0 };
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		cout << months[i];
		cin >> sales[i];
		sum += sales[i];
	}
	cout << sum;
	return 0;
}