
#include <iostream>


void printFloats(float* a, int s);
int arraySum(int* a, int s);
float arrayAvg(int* a, int s);
int findCount(int trg, int* a, int s);
void arrayCopy(float* a1, int s1, float* a2, int s2);
void arrayReverse(float* a, int s);
void stringReverse(char* a, int s);



int main()
{

	float floats[] = { 1.0f, 2.4f, 4.2f };

	printFloats(floats, 3);
	std::cout << std::endl;

	std::cin.get();



	int ints[] = { 3, 5, 3 };
	int sum = arraySum(ints, 3);
	std::cout << sum;
	std::cout << std::endl;

	std::cin.get();



	float avg = arrayAvg(ints, 3);
	std::cout << avg;
	std::cout << std::endl;

	std::cin.get();



	float totalthrees = findCount(3, ints, 3);
	std::cout << totalthrees;
	std::cout << std::endl;

	std::cin.get();



	float floatses[] = { 3.0f, 1.4f, 64.2f };
	arrayCopy(floatses, 3, floats, 3);
	printFloats(floats, 3);
	std::cout << std::endl;

	std::cin.get();



	arrayReverse(floats, 3);
	printFloats(floats, 3);
	std::cout << std::endl;

	std::cin.get();



	char srltkjsdkljfl[] = "ABCDEF";
	stringReverse(srltkjsdkljfl, 6);
	std::cout << srltkjsdkljfl << std::endl;

	std::cin.get();




	return 0;
}



void printFloats(float* a, int s)
{
	for (int i = 0; i < s; ++i)
	{
		std::cout << *(a + i) << std::endl;
	}
}

int arraySum(int* a, int s)
{
	int ret = 0;
	for (int i = 0; i < s; ++i)
	{
		ret += *(a + i);
	}
	return ret;
}

float arrayAvg(int* a, int s)
{
	int total = arraySum(a, s);
	return (float)total / s;
}

int findCount(int trg, int* a, int s)
{
	int ret = 0;
	for (int i = 0; i < s; ++i)
	{
		if (*(a + i) == trg)
		{
			++ret;
		}
	}
	return ret;
}

void arrayCopy(float* a1, int s1, float* a2, int s2)
{
	for (int i = 0; i < s1; ++i)
	{
		*(a2 + i) = *(a1 + i);
	}
}

void arrayReverse(float* a, int s)
{
	float carrier;
	for (int i = 0; i < s/2; ++i)
	{
		carrier = *(a + i);
		*(a + i) = *(a + (s - 1 - i));
		*(a + (s - 1 - i)) = carrier;
	}
}

void stringReverse(char* a, int s)
{
	char carrier;
	for (int i = 0; i < s / 2; ++i)
	{
		carrier = *(a + i);
		*(a + i) = *(a + (s - 1 - i));
		*(a + (s - 1 - i)) = carrier;
	}
}
