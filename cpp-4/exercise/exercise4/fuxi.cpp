//1
char actor[30];
short batsie[100];
float chuck[13];
long double dipsea[64];
//2
#include<array>
using namespace std;
array<char, 30> actor;
array<short, 100> batsie;
array<float, 13> chuck;
array<long double, 64> dipsea;
//3
int oddly[5] = { 1,3,5,7,9 };
//4
int even = oddly[0] + oddly[4];
//5
#include<iostream>
cout << ideas[1] << endl;
//6
char launch[] = "cheeseburger";
//7
#include<string>
string launch = "waldorfsalad";
//8
struct fish
{
	char kind[20];
	int weight;
	float length;
};
//9
fish luofei = { "lf",15,3.65 };
//10
//enum response { yes = 1, no = 0, maybe = 2 };
enum response { no, yes, maybe };
//11
double ted;
double* pd = &ted;
cout << *pd << endl;
//12
float treacle[10];
float* pf = treacle;//&treacle[0]
cout << *pf << *(pf + 9) << endl;
cout << pf[0] << pf[9] << endl;
//13
int size;
cin >> size;
int* pt = new int [size];
vector<int> dv(size);
//14
//µÿ÷∑
//15
fish* pole = new fish;
cout << polr->kind << endl;
//16

//17
std::vector<std::string> vstr(10);
std::array<std::string, 10> astr;