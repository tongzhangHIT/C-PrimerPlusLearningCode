#include<iostream>
int main()
{
	using namespace std;
	cout << "number: ";
	int row;
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int j = row - i; j > 1; j--)
					cout << ".";
		for (int j = 0; j < i + 1; j++)
			cout << "*";
		cout << endl;
	}	
	return 0;
}