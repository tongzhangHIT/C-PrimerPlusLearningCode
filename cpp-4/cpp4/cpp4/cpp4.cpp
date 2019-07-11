#include<iostream>
#include<cstring>
#include<string>
struct inflatable   // structure declaration
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;



	inflatable guest =
	{
		"Glorious Gloria",  // name value
		1.88,               // volume value
		29.99               // price value
	};  
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};  // NOTE: some implementations require using static inflatable guest =
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	inflatable choice = pal;
	cout << choice.name << " " << choice.volume << endl;
	inflatable guests[2] =
	{
		{"auda",123,3.66},
		{"qwwre",666,0.15}
	};
	cout << guests[0].name << endl;
	
	char charr[20];
	string str;
	cin >> str;
	cout << "Length of string in charr before input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);     // indicate maximum length
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str);          // cin now an argument; no length specifier
	cout << "You entered: " << str << endl;
	cout << "Length of string in charr after input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str after input: "
		<< str.size() << endl;

	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";
	// assignment for string objects and character arrays
	str1 = str2;                // copy str2 to str1
	strcpy_s(charr1, charr2);     // copy charr2 to charr1
	// appending for string objects and character arrays
	str1 += " paste";           // add paste to end of str1
	strcat_s(charr1, " juice");   // add juice to end of charr1
	// finding the length of a string object and a C-style string
	int len1 = str1.size();     // obtain length of str1
	int len2 = strlen(charr1);  // obtain length of charr1
	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters.\n";
	
	string s1 = "penguin";
	string s2, s3;
	cout << "You can assign one string object to another: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;
	cout << "You can assign a C-style string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2: " << s2 << endl;
	cout << "You can concatenate strings: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;
	cout << "You can append strings.\n";
	s1 += s2;
	cout << "s1 += s2 yields s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

	/*char charr1[20];            // create an empty array
	char charr2[20] = "jaguar"; // create an initialized array
	string str1;                // create an empty string object
	string str2 = "panther";    // create an initialized string
	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;                // use cin for input
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2 // use cout for output
		<< endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;    // use array notation
		*/
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";
	cin.get(name, ArSize).get();    // read string, newline
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	/*const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";
	cin.getline(name, ArSize);  // reads through newline
	cout << "Enter your favorite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";*/
	
	/*const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";*/

	const int Size = 15;
	char name1[Size];               // empty array
	char name2[Size] = "C++owboy";  // initialized array
	// NOTE: some implementations may require the static keyword to initialize the array name2
	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';                // set to null character
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;

	char cat[4] = { 'a','b','c','\0' };
	char cat1[4] = "a b";
	//char cat2[4] = { 'a',' ','b','c' };//²»ÊÇ×Ö·û´®
	cout << cat << endl << cat1 << endl;// << cat2 << endl;

	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	int yamscout[3] = { 20,30,5 };
	cout << "Sizee of yams array = " << sizeof yams << " bytes.\n";
	//cout << yamscout << endl;//µØÖ·£¿
	//cout << yams << endl;

	cin.get();
	return 0;
}