#include<iostream>
int main()
{
	using namespace std;
	const int size = 12;
	const int year = 3;
	string months[size]{ "1:", "2:", "3:", "4:", "5:", "6:", "7:", "8:", "9:", "10:", "11:", "12:" };
	int sales[year][size]{0};
	int sumy[year]{0};
	int sum = 0;
	for (int i = 0; i < year; i++)
	{
		cout << i + 1 << "year: " << endl;
		for (int j = 0; j < size; j++)
		{
			cout << months[j];
			cin >> sales[i][j];
			sumy[i] += sales[i][j];
		}
		cout << i + 1 << " year sum is " << sumy[i] << endl;
		sum += sumy[i];
	}
	cout << "sum is " << sum << endl;
	return 0;
}