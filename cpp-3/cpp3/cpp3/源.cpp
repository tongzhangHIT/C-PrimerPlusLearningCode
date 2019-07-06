#include <iostream>
#include <climits>              // use limits.h for older systems
//#define ZERO 0
int main()
{
	using namespace std;

	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	
	cout << "$"<<'\?';
	char at = 0;
	cout.put(at);
	char ch;
	cin >> ch;
	cout << ch << endl;
	cout.put(ch);

	int a = 42;
	int b = 042;
	int c = 0x42;
	cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
	cout << hex << "a=" << a << ",b=" << b << ",c=" << c << endl;
	cout << oct << "a=" << a << ",b=" << b << ",c=" << c << endl;
	cout << dec;

	const int ZERO = 0;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "sam=" << sam << " sue=" << sue << endl;
	cout << "add 1" << endl;
	sam = sam + 1; sue = sue + 1;
	cout << "sam=" << sam << " sue=" << sue << endl;
	sam = sue = ZERO;
	cout << "sam=" << sam << " sue=" << sue << endl;
	cout << "minus 1" << endl;	
	sam = sam - 1; sue = sue - 1;
	cout << "sam=" << sam << " sue=" << sue << endl;

	int n_int = INT_MAX;        // initialize n_int to max int value
	short n_short = SHRT_MAX;   // symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// sizeof operator yields size of type or of variable
	cout << endl << "int is " << sizeof(int) << " bytes." << endl;//类型名加括号，变量名可不加括号
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum values:" << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;
	// cin.get();
	return 0;
}
