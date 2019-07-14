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
	pizza* pizza1=new pizza;
	cout << "diameter: ";
	(cin >> pizza1->diameter).get();
	cout << "company: ";
	getline(cin, pizza1->company);
	cout << "weight: ";
	cin >> (*pizza1).weight;
	cout << endl << pizza1->company << endl << pizza1->diameter << endl << pizza1->weight << endl;
	return 0;
}