#include<iostream>
int main()
{
	using namespace std;
	int num, sum=0;
	/*
	cout << "input: ";
	cin >> num;
	while (num != 0)
	{
		sum += num;
		cout << "sum= " << sum << endl;
		cout << "input: ";
		cin >> num;
	}
	cout << "end" << endl;
	*/
	while (cin >> num && num != 0)
	{
		sum += num;
		cout << "sum:" << sum << endl;
	}	
	return 0;
}