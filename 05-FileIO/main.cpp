
#include <fstream>
#include <iostream>
#include <string>



using std::cout;
using std::cin;
using std::endl;



struct Entity
{
	std::string name;
	int x;
	int y;
	int hp;
	int att;
	int def;
};

void makeArray(std::string s, int a[], int size);
void makeEntity(Entity& e, std::string s);
void printEntity(Entity& e);



int main()
{
	cout << "Hello world!\n";

	cin.get();

	std::string path;
	std::fstream file;
	std::string buffer;






	file.open("Entities.txt");
	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
	}

	bool startFlag = false;
	std::string entdat = "";
	while (std::getline(file, buffer))
	{
		if (buffer[0] == '@')
		{
			startFlag = true;
		}
		else if (buffer == "" && startFlag)
		{
			Entity e;
			makeEntity(e, entdat);
			printEntity(e);
			entdat = "";
			startFlag = false;
		}

		if (startFlag)
		{
			entdat.append(buffer);
			entdat.append(" ");
		}
	}

	file.close();

	cin.get();





	
	file.open("Commas.txt");
	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
	}

	std::getline(file, buffer);
	int intarray[4];
	makeArray(buffer, intarray, 4);
	for (int i = 0; i < 4; ++i)
	{
		cout << intarray[i] << endl;
	}

	file.close();

	cin.get();





	cout << "Enter file path\n";
	std::getline(cin, path);

	file.open(path);
	if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
	}

	int garbleChance = 10;
	while (std::getline(file, buffer))
	{
		for (int i = 0; i < buffer.size(); ++i)
		{
			if (rand() % 100 + 1 < garbleChance)
			{
				buffer[i] = 219;
			}
		}
		cout << buffer << endl;
	}

	file.close();







	cout << endl;
	cout << "Enter file path to save data to\n";
	std::getline(cin, path);

	file.open(path, std::ios::out);
	/*if (file.fail())
	{
		std::cerr << "File not found." << std::endl;
	}*/

	cout << "Enter name:\n";
	std::getline(cin, buffer);
	file << buffer << endl;

	cout << "Enter age:\n";
	std::getline(cin, buffer);
	file << buffer << endl;

	cout << "Enter favorite color:\n";
	std::getline(cin, buffer);
	file << buffer << endl;

	file.close();

	cout << "That's all! Check file for results.\n";

	cin.get();


	return 0;
}



void makeArray(std::string s, int a[], int size)
{
	int start = 1;
	int aidx = 0;
	for (int i = start; i < s.size() && aidx < size; ++i)
	{
		if (s[i] == ',' || s[i] == '}')
		{
			a[aidx] = std::stoi(s.substr(start, i - start));

			++aidx;
			start = i + 2;
		}
	}
}


void makeEntity(Entity& e, std::string s)
{
	int start = 1;
	int item = 0;;
	for (int i = start; i < s.size(); ++i)
	{
		if (s[i] == ' ' || i == s.size() - 1)
		{
			switch (item)
			{
			case 0:
				e.name = s.substr(start, i - start);
				break;
			case 1:
				e.x = std::stoi(s.substr(start, i - start));
				break;
			case 2:
				e.y = std::stoi(s.substr(start, i - start));
				break;
			case 3:
				e.hp = std::stoi(s.substr(start, i - start));
				break;
			case 4:
				e.att = std::stoi(s.substr(start, i - start));
				break;
			case 5:
				e.def = std::stoi(s.substr(start, i - start));
				break;
			default:
				break;
			}

			++item;
			start = i + 1;
		}
	}
}

void printEntity(Entity& e)
{
	cout << e.name << endl;
	cout << e.x << endl;
	cout << e.y << endl;
	cout << e.hp << endl;
	cout << e.att << endl;
	cout << e.def << endl;
	cout << endl;
}
