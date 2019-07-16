#include<iostream>
#include<cstring>
int main()
{
	using namespace std;
	char done[5]="done";
	char word[20];
	int count = 0;
	while (cin >> word && strcmp(word, done))
		++count;
	cout << count << endl;
	return 0;
}