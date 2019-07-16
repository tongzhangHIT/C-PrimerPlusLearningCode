#include<iostream>
#include <climits>
#include<cctype>
bool is_int(double);
int main()
{
	using namespace std;
	
	enum { red, orange, yellow, green, blue, violet, indigo };
	cout << "Enter color code (0-6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red: cout << "Her lips were red.\n"; break;
		case orange: cout << "Her hair was orange.\n"; break;
		case yellow: cout << "Her shoes were yellow.\n"; break;
		case green: cout << "Her nails were green.\n"; break;
		case blue: cout << "Her sweatsuit was blue.\n"; break;
		case violet: cout << "Her eyes were violet.\n"; break;
		case indigo: cout << "Her mood was indigo.\n"; break;
		}
		cout << "Enter color code (0-6): ";
		cin >> code;
	}
	cout << "Bye\n";

	cout << "Please enter 1, 2, 3, 4, or 5:\n"<<"1) alarm           2) report\n"<<"3) alibi           4) comfort\n"<<"5) quit\n";
	int choices;
	cin >> choices;
	while (choices != 5)
	{
		switch (choices)
		{
		case 1:   cout << "\a\n";
			break;
		case 2:   cout << "It's been an excellent week for business.\n"<<"Sales are up 120%. Expenses are down 35%.\n";
			break;
		case 3:   cout << "The boss was in all day.\n";
			break;
		case 4:   cout << "Your employees think you are the finest CEO\n"<<"in the industry. The board of directors think\n"
			"you are the finest CEO in the industry.\n";
			break;
		default:   cout << "That's not a choice.\n";
		}
		cout << "Please enter 1, 2, 3, 4, or 5:\n""1) alarm           2) report\n""3) alibi           4) comfort\n""5) quit\n";
		cin >> choices;
	}
	cout << "Bye!\n";

	cout << "Please enter a, r, l, c, or q:\n""1) alarm           2) report\n""3) alibi           4) comfort\n""5) quit\n";
	char choice;
	cin >> choice;
	while (choice != 'Q' && choice != 'q')
	{
		switch (choice)
		{
		case 'a':
		case 'A':cout << "\a\n";
			break;
		case 'r':
		case 'R':cout << "It's been an excellent week for business.\n" << "Sales are up 120%. Expenses are down 35%.\n";
			break;
		case 'l':
		case 'L':cout << "The boss was in all day.\n";
			break;
		case 'c':
		case 'C':cout << "Your employees think you are the finest CEO\n" << "in the industry. The board of directors think\n"
			"you are the finest CEO in the industry.\n";
			break;
		default:   cout << "That's not a choice.\n";
		}
		cout << "Please enter a, r, l, c, or q:\n""1) alarm           2) report\n""3) alibi           4) comfort\n""5) quit\n";
		cin >> choice;
	}
	cout << "Bye!\n";

	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;   // c = a if a > b, else c = b
	cout << " is " << c << endl;

	cout << "Enter text for analysis, and type @"
		" to terminate input.\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	cin.get(ch);                // get first character
	while (ch != '@')            // test for sentinel
	{
		if (isalpha(ch))         // is it an alphabetic character?
			chars++;
		else if (isspace(ch))    // is it a whitespace character?
			whitespace++;
		else if (isdigit(ch))    // is it a digit?
			digits++;
		else if (ispunct(ch))    // is it punctuation?
			punct++;
		else
			others++;
		cin.get(ch);            // get next character
	}
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " punctuations, "
		<< others << " others.\n";

	double num;
	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (!is_int(num))    // continue while num is not int-able
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int(num);    // type cast
	cout << "You've entered the integer " << val << "\nBye\n";

	const char* qualify[4] =       // an array of pointers*/
	{                               // to strings
		"10,000-meter race.\n",
		"mud tug-of-war.\n",
		"masters canoe jousting.\n",
		"pie-throwing festival.\n"
	};
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "You qualify for the " << qualify[index];

	const int ArSize = 6;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program terminates "
		<< "when you make\n" << ArSize << " entries "
		<< "or enter a negative value.\n";
	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize && temp >= 0) // 2 quitting criteria
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)             // room left in the array,
		{
			cout << "Next value: ";
			cin >> temp;            // so get next value
		}
	}
	if (i == 0)
		cout << "No data--bye\n";
	else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			<< "the New Age than you do.\n";
	}

	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue? <y/n> ";
	char ch1;
	cin >> ch1;
	if (ch1 == 'y' || ch1 == 'Y')             // y or Y
		cout << "You were warned!\a\a\n";
	else if (ch1 == 'n' || ch1 == 'N')        // n or N
		cout << "A wise choice ... bye\n";
	else
		cout << "That wasn't a y or n! Apparently you "
		"can't follow\ninstructions, so "
		"I'll trash your disk anyway.\a\a\a\n";

	cin.get();
	const int Fave = 29;
	int n;
	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: ";
	do
	{
		cin >> n;
		if (n < Fave)
			cout << "Too low -- guess again: ";
		else if (n > Fave)
			cout << "Too high -- guess again: ";
		else
			cout << Fave << " is right!\n";
	} while (n != Fave);

	cin.get();
	char ch0;
	cout << "Type, and I shall repeat.\n";
	cin.get(ch0);
	while (ch0 != '.')
	{
		if (ch0 == '\n')
			cout << ch0;     // done if newline
		else
			//cout << ++ch0;   // done otherwise
			cout << char (ch0 + 32);
		cin.get(ch0);
	}
	// try ch + 1 instead of ++ch for interesting effect
	//ch+1输出int类型，需要char(ch+1)
	cout << "\nPlease excuse the slight confusion.\n";

	return 0;
}
bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)   // use climits values
		return true;
	else
		return false;
}