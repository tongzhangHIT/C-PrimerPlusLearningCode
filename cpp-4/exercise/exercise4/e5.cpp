#include<iostream>
using namespace std;
struct CandyBar
{
	string band;
	float weight;
	int cal;
};
int main()
{
	CandyBar snack =
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << snack.band << endl << snack.weight << endl << snack.cal << endl;
	return 0;
}