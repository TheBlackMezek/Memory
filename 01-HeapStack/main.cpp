
#include <iostream>




int pointDif(int* a, int* b);
void popArray(int* a, int s);
void printArray(int a[], int s);

int** pointtopoint;


int main()
{
	int first = 10;
	int* second = &first;
	//pointtopoint = &second;
	pointtopoint = new int*[10];
	
	int* dynInt = new int(10);
	float* dynFloat = new float(3.14523545234523234234234);
	bool* dynBool = new bool(true);

	int* dynIntA = new int[10];
	float* dynFloatA = new float[23];
	bool* dynBoolA = new bool[9];



	std::cout << dynInt << std::endl;
	std::cout << dynFloat << std::endl;
	std::cout << dynBool << std::endl;
	std::cout << dynIntA << std::endl;
	std::cout << dynFloatA << std::endl;
	std::cout << dynBoolA << std::endl;
	std::cout << std::endl;



	delete dynInt;
	delete dynFloat;
	delete dynBool;
	delete[] dynIntA;
	delete[] dynFloatA;
	delete[] dynBoolA;


	std::cin.get();




	int stackA = 10;
	int stackB = 4;
	int* pstackA = &stackA;
	int* pstackB = &stackB;

	std::cout << pointDif(pstackA, pstackB);
	std::cout << std::endl;

	std::cin.get();




	int* heapArray = new int[100];

	for (int i = 0; i < 100; ++i)
	{
		heapArray[i] = i + 1;
		std::cout << &heapArray[i] << " ";
		std::cout << heapArray[i] << std::endl;;
	}
	std::cout << std::endl;

	popArray(heapArray, 100);
	printArray(heapArray, 100);
	std::cout << std::endl;

	delete[] heapArray;

	std::cin.get();




	int numOfNums = 0;
	int numOfOdd = 0;
	int numOfEven = 0;
	int newnum = 0;
	std::cout << "How many numbers would you like to enter?\n";
	std::cin >> numOfNums;
	for(int i = 0; i < numOfNums; ++i)
	{
		std::cout << "Enter a number\n";
		std::cin >> newnum;
		(newnum % 2 == 0) ? ++numOfEven : ++numOfOdd;
	}

	if (numOfEven > numOfOdd)
	{
		std::cout << "You entered more even than odd numbers.\n";
	}
	else if (numOfEven < numOfOdd)
	{
		std::cout << "You entered more odd than even numbers.\n";
	}
	else
	{
		std::cout << "You entered the same number of even and off numbers.\n";
	}

	std::cin >> newnum;




	numOfNums = 0;
	int numsum = 0;
	std::cout << "How many numbers would you like to enter to add up to 21?\n";
	std::cin >> numOfNums;
	for (int i = 0; i < numOfNums; ++i)
	{
		std::cout << "Enter a number\n";
		std::cin >> newnum;
		numsum += newnum;
	}

	if (numsum == 21)
	{
		std::cout << "Those add up to 21!\n";
	}
	else
	{
		std::cout << "Those do not add up to 21!\n";
	}

	std::cin >> newnum;



	

	return 0;
}



int pointDif(int* a, int* b)
{
	return *a - *b;
}

void popArray(int* a, int s)
{
	for (int i = 0; i < s; ++i)
	{
		a[i] = (i + 1) * 3;
	}
}

void printArray(int* a, int s)
{
	for (int i = 0; i < s; ++i)
	{
		std::cout << a[i] << std::endl;
	}
}