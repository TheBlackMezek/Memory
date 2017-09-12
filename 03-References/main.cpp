
#include <iostream>

using std::cout;
using std::cin;
using std::endl;




struct Rampet
{
	float happiness;
	float fluffiness;
	float toughness;
};

struct Track
{
	std::string name;
};

struct Playlist
{
	std::string name;
	int length;
	Track * tracks;
};


void product(float a, float b, float& c);
void swap(float&a, float&b);

void fragmentRampet(Rampet& r);
void collectRampet(Rampet& r);
void helloRampet(Rampet& r);

void printPlaylist(Playlist& p);
void shufflePlaylist(Playlist& p);
void dedupePlaylist(Playlist& p);






int main()
{
	cout << "Hello World!" << endl;

	cin.get();






	int *intptr = new int(10);
	int *inpyt2 = new int(15);

	inpyt2 = intptr;

	*inpyt2 = 45;

	cout << *intptr << endl;

	int num = 2;
	float dec = 1.5f;
	bool binary = true;
	char chr = 'h';

	int& numRef = num;
	float& decRef = dec;
	bool& binaryRef = binary;
	char& chrRef = chr;

	cout << numRef << endl;
	cout << decRef << endl;
	cout << binaryRef << endl;
	cout << chrRef << endl;

	cin.get();




	product(1.3f, 3.5f, decRef);

	cout << dec;

	cin.get();




	float sldfkjslkdjf = 9.0f;
	float lkdjfln43lkn = 0.3f;
	cout << sldfkjslkdjf << endl;
	cout << lkdjfln43lkn << endl;
	swap(sldfkjslkdjf, lkdjfln43lkn);
	cout << sldfkjslkdjf << endl;
	cout << lkdjfln43lkn << endl;

	cin.get();





	Playlist play;
	play.name = "Tracklist";
	play.length = 7;
	play.tracks = new Track[7];
	for (int i = 0; i < play.length; ++i)
	{
		Track t;

		switch (i)
		{
		case 0:
			t.name = "Uncharted Worlds";
			break;
		case 1:
			t.name = "The Wards";
			break;
		case 2:
			t.name = "Rasputin";
			break;
		case 3:
			t.name = "Soviet History in Tetris";
			break;
		case 4:
			t.name = "Union of the Strong";
			break;
		case 5:
			t.name = "Beyond Eternity";
			break;
		case 6:
			t.name = "Beyond Eternity";
			break;
		default:
			break;
		}

		play.tracks[i] = t;
	}


	printPlaylist(play);
	cout << endl;

	shufflePlaylist(play);
	printPlaylist(play);
	cout << endl;

	dedupePlaylist(play);
	printPlaylist(play);
	cout << endl;


	delete[] play.tracks;
	cin.get();







	return 0;
}





void product(float a, float b, float& c)
{
	c = a * b;
}

void swap(float&a, float&b)
{
	float temp = a;

	a = b;
	b = temp;
}

void fragmentRampet(Rampet& r)
{
	--r.toughness;
	++r.fluffiness;
}

void collectRampet(Rampet& r)
{
	++r.toughness;
	--r.fluffiness;
}

void helloRampet(Rampet& r)
{
	++r.happiness;
}




void printPlaylist(Playlist& p)
{
	for (int i = 0; i < p.length; ++i)
	{
		cout << p.tracks[i].name.c_str() << endl;
	}
}

void shufflePlaylist(Playlist& p)
{
	int shuffles = p.length * 10;
	std::string temp = "";

	for (int q = 0; q < shuffles; ++q)
	{
		for (int i = 0; i < p.length; ++i)
		{
			int shuf = rand() % 3;
			if (shuf == 0 && i > 0)
			{
				temp = p.tracks[i].name;
				p.tracks[i].name = p.tracks[i - 1].name;
				p.tracks[i - 1].name = temp;
			}
			else if (shuf == 1 && i < p.length - 1)
			{
				temp = p.tracks[i].name;
				p.tracks[i].name = p.tracks[i + 1].name;
				p.tracks[i + 1].name = temp;
			}
		}
	}
}

void dedupePlaylist(Playlist& p)
{
	int deleted = 0;

	for (int i = 0; i < p.length; ++i)
	{
		for (int q = 0; q < p.length; ++q)
		{
			if (i != q && p.tracks[q].name != "" && p.tracks[q].name == p.tracks[i].name)
			{
				p.tracks[q].name = "";
				++deleted;
			}
		}
	}

	for (int q = 0; q < deleted; ++q)
	{
		for (int i = 0; i < p.length - 1; ++i)
		{
			if (p.tracks[i].name == "")
			{
				p.tracks[i].name = p.tracks[i + 1].name;
			}
		}
	}

	p.length -= deleted;
}
