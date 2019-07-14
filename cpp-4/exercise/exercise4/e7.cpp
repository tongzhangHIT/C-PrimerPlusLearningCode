#include<iostream>
#include<string>
using namespace std;
struct pizza
{
	string company;
	float diameter;
	float weight;
};
int main()
{
	pizza pizza1;
	cout << "company: ";
	//cin >> pizza1.company;
	getline(cin, pizza1.company);
	cout << "diameter: ";
	cin >> pizza1.diameter;
	cout << "weight: ";
	cin >> pizza1.weight;
	cout << endl << pizza1.company << endl << pizza1.diameter << endl << pizza1.weight << endl;
	return 0;
}