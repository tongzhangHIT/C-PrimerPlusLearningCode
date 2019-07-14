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
	CandyBar snack[] =
	{
		{"Mocha Munch",2.3,350},
		{"Mocha Munch1",2.31,3501},
		{"Mocha Munch2",2.32,3502}
	};
	cout << snack[0].band << endl << snack[0].weight << endl << snack[0].cal << endl;
	cout << snack[1].band << endl << snack[1].weight << endl << snack[1].cal << endl;
	return 0;
}