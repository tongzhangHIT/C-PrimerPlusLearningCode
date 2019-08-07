//1
//执行更高效

//2
#include <iostream>
int main()
{
	char ch;

	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;     // done if newline
		else
			//std::cout << ++ch;   // done otherwise
			std::cout << ch+1;
		std::cin.get(ch);
	}
	// try ch + 1 instead of ++ch for interesting effect
	std::cout << "\nPlease excuse the slight confusion.\n";
	// std::cin.get();
	// std::cin.get();
	return 0;
}
//++ch为char型；ch+1为int型

//3
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int ct1, ct2;
	ct1 = ct2 = 0;
	while ((ch = cin.get()) != '$')
	{
		cout << ch;
		ct1++;
		if (ch = '$')
			ct2++;
		cout << ch;
	}
	cout << "ct1=" << ct1 << "ct2=" << ct2 << endl;
	return 0;
}

//4
//a
weight >= 115 && weight < 125
//b
ch='q'||ch='Q'
//c
x%2==0&&x!=26
//d
x%2==0&&x%26!=0
//e
donation>=10000&&donation<=20000 || guest==1
//f
(ch>='a'&&ch<='x')||(ch>='A'&&ch<="X")

//5
//区分x类型，bool型或其他

//6
(x >=0 )? x : -x

//7
switch (ch)
{
case 'A':a_grade++;
case 'B':b_grade++;
case 'C':c_grade++;
case 'D':d_grade++;
default:f_grade++;
//	break;
}

//8
//使用整数标签，输入非整数将不能处理而挂起程序
//使用字符标签，输入整数时仍可处理

//9
int line = 0;
char ch;
while (cin.get(ch))
{
	if (ch == 'Q')
		break;
	if (ch != '\n')
		continue;
	line++;
}

while (cin.get(ch) &&ch!= 'Q')
{
	if (ch == '\n')
		line++;
}