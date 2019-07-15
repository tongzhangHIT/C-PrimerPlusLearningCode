#include<iostream>
#include<string>
#include<cstring>
#include<ctime>
const int ArSize = 20;
int main()
{
	using namespace std;

	const int Cities = 5;
	const int Years = 4;
	const char* cities[Cities] =   // array of pointers
	{                               // to 5 strings
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	int maxtemps[Years][Cities] =   // 2-D array
	{
		{96, 100, 87, 101, 105},   // values for maxtemps[0]
		{96, 98, 91, 107, 104},   // values for maxtemps[1]
		{97, 101, 93, 108, 107}, // values for maxtemps[2]
		{98, 103, 95, 109, 108}   // values for maxtemps[3]
	};
	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	/*
	char ch;//cin
	int count = 0;      // use basic input
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;          // get a character
	while (ch != '#')   // test the character
	{
		cout << ch;     // echo the character
		++count;        // count the character
		cin >> ch;      // get the next character
	}
	cout << endl << count << " characters read\n";
	cin.clear();*/
	/*
	char ch1;//cin.get(char)
	int count1 = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch1);        // use the cin.get(ch) function
	while (ch1 != '#')
	{
		cout << ch1;
		++count1;
		cin.get(ch1);    // use it again
	}
	cout << endl << count1 << " characters read\n";
	cin.clear();*/
	/*
	char ch2;
	int count2 = 0;
	cin.get(ch2);        // attempt to read a char
	while (cin.fail() == false)  // test for EOF
	{
		cout << ch2;     // echo character
		++count2;
		cin.get(ch2);    // attempt to read another char
	}
	//while (cin.get(ch2))
	//{
	//	cout << ch2;
	//	++count2;
	//}
	cout << endl << count2 << " characters read\n";*/
	/*
	int ch3;                         // should be int, not char
	int count3 = 0;
	while ((ch3 = cin.get()) != EOF) // test for end-of-file
	{
		cout.put(char(ch3));
		++count3;
	}
	cout << endl << count3 << " characters read\n";*/

	double prices[5] = { 4.99,10.99,3.55,5.61,6.24 };
	for (double x : prices)//基于范围的for循环
		cout << x << endl;
	for (double& x : prices)
	{
		x = x * 0.8;
		cout << x << endl;
	}

	int n;
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";
	do
	{
		cin >> n;       // execute body
	} while (n != 7);   // then test
	cout << "Yes, 7 is my favorite.\n";

	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay);       // wait until time elapses
	cout << "done \a\n";

	char name[ArSize];
	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:\n";
	int i0 = 0;                  // start at beginning of string
	while (name[i0] != '\0')     // process to end of string
	{
		cout << name[i0] << ": " << int(name[i0]) << endl;
		i0++;                    // don't forget this step
	}

	string word2 = "?ate";
	for (char ch = 'a'; word2 != "mate"; ch++)
	{
		cout << word2 << endl;
		word2[0] = ch;
	}
	cout << "After loop ends, word is " << word2 << endl;

	char word0[5] = "?ate";
	for (char ch = 'a'; strcmp(word0, "mate"); ch++)
	{
		cout << word0 << endl;
		word0[0] = ch;
	}
	cout << "After loop ends, word is " << word0 << endl;

	int a = 20;
	int b = 20;
	cout << "a   = " << a << ":   b = " << b << "\n";
	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
	cout << "a   = " << a << ":   b = " << b << "\n";

	cout << "Enter a word: ";
	string word;
	cin >> word;
	// display letters in reverse order
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
	cout << "\nBye.\n";

	cout << "Enter a word: ";
	string word1;
	cin >> word1;
	// physically modify string object
	char temp;
	int i, j;
	for (j = 0, i = word1.size() - 1; j < i; --i, ++j)
	{                       // start block
		temp = word1[i];
		word1[i] = word1[j];
		word1[j] = temp;
	}                       // end block
	cout << word1 << "\nDone\n";

	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;
	
	int x;
	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;

	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);   //a newer C++ feature
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;

	return 0;
}