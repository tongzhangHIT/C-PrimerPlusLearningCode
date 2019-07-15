#include<iostream>
int main()
{
	using namespace std;
	int a, b, sum=0;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	for (int i = a; i <= b;i++)
		sum += i;
	cout << "sum= " << sum << endl;
	return 0;
}