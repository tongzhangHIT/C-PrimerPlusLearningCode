#include<iostream>
#include<array>
int main()
{
	using namespace std;
	array<float, 3> time;
	cin >> time[0] >> time[1] >> time[2];
	cout << "1: " << time[0] << " ,2: " << time[1] << " ,3: " << time[2] << endl;
	cout  << (time[0] + time[1] + time[2]) / 3 << endl;
	return 0;
}