
#include <iostream>
#include <assert.h>
#include <fstream>

#include "Increments.h"
#include "Globals.h"

using std::cout;
using std::cin;
using std::endl;



void releaseHalfLove();
void stepFizzBuzz();
float divide(float a, float b);
void printRandMsg();
int& picker(int& a, int& b, int& c);
int arrayCopy(int * srcArr, size_t srcSize,
	int * dstArr, size_t dstSize);
void gridGen(int width, int height);
void toUpper(char * cstr);
void toLower(char * cstr);
void printFile(char * filePath);




int main()
{
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();
	releaseHalfLove();

	cin.get();



	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();
	stepFizzBuzz();

	cin.get();





	cout << counter << endl;
	increment();
	cout << counter << endl;
	increment();
	cout << counter << endl;
	increment();
	cout << counter << endl;
	increment();
	cout << counter << endl;
	increment();
	cout << counter << endl;
	decrement();
	cout << counter << endl;
	decrement();
	cout << counter << endl;
	decrement();
	cout << counter << endl;
	decrement();
	cout << counter << endl;
	decrement();
	cout << counter << endl;
	decrement();

	cin.get();



	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();
	printRandMsg();

	cin.get();





	int lkjas = 2;
	int lk4jk = 4;
	int wdltr = 6;

	cout << picker(lkjas, lk4jk, wdltr) << endl;
	cout << picker(lkjas, lk4jk, wdltr) << endl;
	cout << picker(lkjas, lk4jk, wdltr) << endl;
	cout << picker(lkjas, lk4jk, wdltr) << endl;
	cout << picker(lkjas, lk4jk, wdltr) << endl;
	cout << picker(lkjas, lk4jk, wdltr) << endl;
	cout << picker(lkjas, lk4jk, wdltr) << endl;

	cin.get();








	return 0;
}



void releaseHalfLove()
{
	static int v = 1;

	cout << "Half-Love " << v << " was released!\n";

	++v;
	if (v > 2)
	{
		v = 1;
	}
}

void stepFizzBuzz()
{
	static int n = 1;

	if (n % 3 != 0 && n % 5 != 0)
	{
		cout << n;
	}

	if (n % 3 == 0)
	{
		cout << "Fizz";
	}
	if (n % 5 == 0)
	{
		cout << "Buzz";
	}


	cout << endl;

	++n;
}

float divide(float a, float b)
{
	assert(b);
	return a / b;
}

void printRandMsg()
{
	std::string msgs[] =
	{ "HI!",
	"HEYO!",
	"WHAT'S GOING ON?",
	"Mercury is the closest planet to the sun.",
	"I think",
	"tl;dr" };

	cout << msgs[rand() % 6].c_str() << endl;
}

int& picker(int& a, int& b, int& c)
{
	static int p = 0;


	switch (p)
	{
	case 0:
		++p;
		if (p > 2)
		{
			p = 0;
		}
		return a;
		break;
	case 1:
		++p;
		if (p > 2)
		{
			p = 0;
		}
		return b;
		break;
	case 2:
		++p;
		if (p > 2)
		{
			p = 0;
		}
		return c;
		break;
	default:
		break;
	}

}

int arrayCopy(int * srcArr, size_t srcSize,
	int * dstArr, size_t dstSize)
{
	assert(dstSize < srcSize);
}

void gridGen(int width, int height)
{
	assert(width > 0 && height > 0);
}

void toUpper(char * cstr)
{
	for (int i = 0; cstr[i] != 0; ++i)
	{
		assert((cstr[i] >= 65 && cstr[i] <= 90) || (cstr[i] >= 97 && cstr[i] <= 122));
	}
}

void toLower(char * cstr)
{
	for (int i = 0; cstr[i] != 0; ++i)
	{
		assert((cstr[i] >= 65 && cstr[i] <= 90) || (cstr[i] >= 97 && cstr[i] <= 122));
	}
}

void printFile(char * filePath)
{
	std::fstream myfile;
	myfile.open(filePath);
	assert(myfile.is_open());
}
