// CPlusPrimerPlus.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>
using namespace std;

struct CandyBar
{
	string Brand;
	double Weight;
	int Calorie;
};

struct Pizza
{
	string Corp;
	double Diameter;
	double Weight;
};

void Fun271();
void Fun272();
void Fun273();
void ThreeBlindMice();
void SeeHowTheyRun();
void Fun274();
void Fun275();
void Fun276();
void Fun277();
void showargs(int,int);
void Func372();
void Func373();
void Func374();
void Func375();
void Func376();
void Func377();
void Func4131();
void Func4133();
void Func4135();
void Func4136();
void Func4137();
void Func4138();
void Func4139();
void Func41310();
void Func591();
void Func592();
void Func593();
void Func594();
void Func595();
void Func596();
int _tmain(int argc, _TCHAR* argv[])
{
	Func596();
	return 0;
}

void Fun271()
{
	cout << "Name:Peter,Addr:China";
}
void Fun272()
{
	cout << "请输入LONG值（一LONG等于220码）";
	int num;
	cin >> num;

	cout << endl << num << "LONG = " << num * 200 << "码";
}
void Fun273()
{
	ThreeBlindMice();
	ThreeBlindMice();
	SeeHowTheyRun();
	SeeHowTheyRun();
}
void ThreeBlindMice()
{
	cout << "three blind mice" << endl;
}
void SeeHowTheyRun()
{
	cout << "see how they run" << endl;
}
void Fun274()
{
	cout << "Enter your age:";
	int age;
	cin >> age;
	cout << endl << "this age include " << age << " monthes" << endl;
}
void Fun275()
{
	cout << "Please enter a Celsius value:";
	double celsius;
	cin >> celsius;
	cout << endl << celsius << " degrees Celsius is " << 1.8 * celsius + 32.0 << " degrees Fahrenheit " << endl;
}
void Fun276()
{
	cout << "Enter the number of lightyears:";
	double lightyears;
	cin >> lightyears;
	cout << endl << lightyears << " lightyears = " << 63240 * lightyears << " astronomical units. " << endl;
}
void Fun277()
{
	cout << "Enter the number of hours:";
	int hour,minite;
	cin >> hour;
	cout << "Enter the number of minites:";
	cin >> minite;
	showargs(hour, minite);
}
void showargs(int hour, int minites)
{
	cout << "Time:" << hour << ":" << minites << endl;
}

void Func371()
{
	const int times = 12;
	cout << "Please enter inch:___";
	double inch;
	cin >> inch;

	int foot = (int)inch / times;
	double blance = inch - foot * times;

	cout << inch << "inch is " << foot << " foot and " << blance << " inch";
}
void Func372()
{
	const int foot2inch = 12;
	const double kg2pound = 2.2;
	const double inch2m = 0.0254;
	cout << "Please enter foot:___";
	int foot;
	cin >> foot;
	cout << "Please enter inch:___";
	double inch;
	cin >> inch;
	cout << "Please enter pound:___";
	double pound;
	cin >> pound;

	double kg = pound / 2.2;
	double m = ((foot * foot2inch) + inch) * inch2m;
	double bmi = kg / (m*m);
	cout << "BMI is " << bmi;
}
void Func373()
{
	const int convert = 60;
	
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	
	cout << "First, enter the degrees:";
	int degrees;
	cin >> degrees;
	
	cout << "Next, enter the minutes of arc:";
	int minutes;
	cin >> minutes;

	cout << "Finally, enter the seconds of arc:";
	int seconds;
	cin >> seconds;

	double result = degrees + (minutes*1.0 / convert) + (seconds*1.0 / (convert*convert));

	cout << degrees << " degress, " << minutes << " minutes, " << seconds << " seconds = " << result << " degrees.";
}
void Func374()
{
	const double convert = 60;

	cout << "Enter the number of seconds:";

	long sec;
	cin >> sec;

	long minutes = sec / convert;
	long hours = minutes / convert;
	long days = hours / 24;

	cout << sec << " seconds = " << days << " days, " << (hours- days *24) << " hours, " << (minutes- hours*convert) << " minutes, " << sec-(minutes*convert) << " seconds.";
}
void Func375()
{
	const double convert = 60;

	cout << "Enter the world's population:";
	long long world;
	cin >> world;

	cout << "Enter the population of us:";
	long long us;
	cin >> us;

	double percent = us*100.0 / world;

	cout << "The population of the US is " << percent << "% of the world's population.";
}
void Func376()
{
	cout << "Enter the km:";
	int km;
	cin >> km;

	cout << "Enter the gas litre:";
	int litre;
	cin >> litre;

	double result = litre * 100.0 / km;

	cout << "100 km use gas " << result << " litre.";
}
void Func377()
{
	const double gallon2litre = 3.875;
	const double km2mile = 0.6214;

	cout << "Enter the l/km:";
	double litre;
	cin >> litre;

	double mile = 100 * km2mile;
	double gallon = litre / gallon2litre;
	double result = mile / gallon;

	cout << litre << " l/km = " << result << " mpg.";
}

void Func4131()
{
	string firstname,lastname;
	char letter;
	int age;
	cout << "What is your first name?";
	getline(cin, firstname);
	cout << "What is your last name?";
	cin >> lastname;
	cout << "What letter grade do you deserve?";
	cin >> letter;
	cout << "What is your age?";
	cin >> age;

	cout << "Name:" << lastname << "," << firstname << endl << "Grade:" << (char)(letter + 1) << endl << "Age:" << age;
}
void Func4133()
{
	//const int size = 20;
	//char firstname[size];
	//char lastname[size];
	//char fullname[size+2];
	string firstname, lastname,fullname;
	cout << "Enter your first name:";
	cin >> firstname;
	cout << "Enter your last name:";
	cin >> lastname;
	
	fullname = lastname + ", " + firstname;
	//strcpy_s(fullname, lastname);
	//strcat_s(fullname, ", ");
	//strcat_s(fullname, firstname);

	cout << "Here's the infomation in a single string: " << fullname;
}
void Func4135()
{
	CandyBar snack{ "Mocha Munch", 2.3, 350 };
	cout << "Brand:" << snack.Brand << ",Weight:" << snack.Weight << ",Calorie:" << snack.Calorie;
}
void Func4136()
{
	CandyBar snack[]{ {"Mocha Munch1", 2.3, 350}, { "Mocha Munch2", 2.4, 351 }, { "Mocha Munch3", 2.5, 352 } };
	cout << "snack[0] Brand:" << snack[0].Brand << ",Weight:" << snack[0].Weight << ",Calorie:" << snack[0].Calorie << endl;
	cout << "snack[1] Brand:" << snack[1].Brand << ",Weight:" << snack[1].Weight << ",Calorie:" << snack[1].Calorie << endl;
	cout << "snack[2] Brand:" << snack[2].Brand << ",Weight:" << snack[2].Weight << ",Calorie:" << snack[2].Calorie << endl;
}
void Func4137()
{
	Pizza pizza;
	cout << "Enter Pizza Corp:";
	getline(cin, pizza.Corp);
	cout << "Enter Pizza Diameter:";
	cin >> pizza.Diameter;
	cout << "Enter Pizza Weight:";
	cin >> pizza.Weight;

	cout << "pizza, Corp:" << pizza.Corp << ",Diameter:" << pizza.Diameter << ",Weight:" << pizza.Weight;
}
void Func4138()
{
	Pizza * pizza = new Pizza();

	cout << "Enter Pizza Diameter:";
	cin >> pizza->Diameter;
	cin.get();
	cout << "Enter Pizza Corp:";
	getline(cin, pizza->Corp);
	cout << "Enter Pizza Weight:";
	cin >> pizza->Weight;

	cout << "pizza, Corp:" << pizza->Corp << ",Diameter:" << pizza->Diameter << ",Weight:" << pizza->Weight;
	delete pizza;
}
void Func4139()
{
	CandyBar * snack = new CandyBar[3]{ { "Mocha Munch1", 2.3, 350 }, { "Mocha Munch2", 2.4, 351 }, { "Mocha Munch3", 2.5, 352 } };
	cout << "snack[0] Brand:" << snack[0].Brand << ",Weight:" << snack[0].Weight << ",Calorie:" << snack[0].Calorie << endl;
	cout << "snack[1] Brand:" << snack[1].Brand << ",Weight:" << snack[1].Weight << ",Calorie:" << snack[1].Calorie << endl;
	cout << "snack[2] Brand:" << snack[2].Brand << ",Weight:" << snack[2].Weight << ",Calorie:" << snack[2].Calorie << endl;
	delete [] snack;
}
void Func41310()
{
	array<double, 3> scores;

	cin >> scores[0] >> scores[1] >> scores[2];

	cout << "1." << scores[0] << " ,2." << scores[1] << " ,3." << scores[2] << endl;

	double avg = (scores[0] + scores[1] + scores[2]) / 3;
	cout << "avg:" << avg;
}

void Func591()
{
	int a, b, sum = 0;
	cout << "Enter two numbers:";
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		sum += i;
	}
	cout << sum;
}
void Func592()
{
	const int arsize = 101;
	array<long double, arsize> factorials;
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < arsize; i++)
	{
		factorials[i] = i*factorials[i - 1];
	}
	for (int i = 0; i < arsize; i++)
	{
		cout << i << "! = " << factorials[i] << endl;
	}
}
void Func593()
{
	int sum = 0;
	int n;
	while (cin >> n && n!=0)
	{
		sum += n;
		cout << "sum:" << sum << endl;

	}
}
void Func594()
{
	double daphne = 100, celo = 100, drate = 0.1, crate = 0.05, dsum = 100, csum = 100;

	
	int year = 1;
	while (dsum>=csum)
	{
		
		dsum += drate * daphne;
		csum += csum * crate;
		cout << "year:" << year << ", Daphne:" << dsum << ", Celo:" << csum << endl;
		year++;
		
	}
}
void Func595()
{
	const int size = 12;
	string months[size]{ "1.", "2.", "3.", "4.", "5.", "6.", "7.", "8.", "9.", "10.", "11.", "12." };
	int sales[size]{0};
	for (int i = 0; i < size; i++)
	{
		cout << months[i] << ":";
		cin >> sales[i];
	}

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += sales[i];
	}
	cout << sum;
}
void Func596()
{
	const int size = 12;
	const int years = 3;
	string months[size]{ "1.", "2.", "3.", "4.", "5.", "6.", "7.", "8.", "9.", "10.", "11.", "12." };
	int sales[years][size];
	for (int i = 0; i < years; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << "year:" << i + 1 << ",month:" << months[j];
			cin >> sales[i][j];
		}
	}


	int yearsum = 0, total = 0;
	for (int i = 0; i < years; i++)
	{
		yearsum = 0;
		for (int j = 0; j < size; j++)
		{
			yearsum += sales[i][j];
		}
		cout << "year" << (i + 1) << ":" << yearsum << endl;
		total += yearsum;
	}
	cout << "total:" << total << endl;
}