#include<iostream>
#include<string>
int main()
{
	using namespace std;
	//string done = "done";
	string word;
	int count = 0;
	while (cin >> word && word != "done")
		++count;
	cout << count << endl;
	return 0;
}