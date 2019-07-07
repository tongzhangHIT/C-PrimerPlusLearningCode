#include <iostream>
#include <climits>              // use limits.h for older systems
//#define ZERO 0
int main()
{
	using namespace std;

	int auks, bats, coots;
	auks = 19.99 + 11.99;
	bats = (int)19.99 + (int)11.99;   // old C syntax
	coots = int(19.99) + int(11.99);  // new C++ syntax
	cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;
	char ch = 'Z';
	cout << "The code for " << ch << " is ";    // print as char
	cout << int(ch) << endl;                    // print as int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;       // using static_cast

	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	float tree = 3;
	cout << "tree=" << tree << endl;
	int guess(3.9832);
	cout << "guess=" << guess << endl;
	int debt = 7.2e12;
	cout << "debt=" << debt << endl;

	cout << "9/5=" << 9 / 5 << endl;
	cout << "9.0/5.0=" << 9.0 / 5.0 << endl;
	cout << "9/5.0=" << 9 / 5.0 << endl;
	cout << "1e7/9.0=" << 1e7 / 9.0 << endl;
	cout << "1e7f/9.0f=" << 1e7f / 9.0f << endl;
	cout << "1e7l/9.0l=" << 1e7l / 9.0l << endl;

	float hats = 50.25;
	float heads = 11.17;
	cout << "hats=" << hats << endl;
	cout << "heads=" << heads << endl;
	cout << "hats+heads=" << hats + heads << endl;
	cout << "hats-heads=" << hats - heads << endl;
	cout << "hats*heads=" << hats * heads << endl;
	cout << "hats/heads=" << hats / heads << endl;

	float tub = 10.0 / 3.0;     // good to about 6 places
	double mint = 10.0 / 3.0;   // good to about 15 places
	const float million = 1.0e6;
	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;
	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl<<endl;

	cout << "\aOperation \"HyperHype\" is now activated!\u00E2\n";
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
	cout.put(ch) << endl;

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
