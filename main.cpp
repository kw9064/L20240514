#include <iostream>
#include <conio.h>
#include <winsock.h>
using namespace std;

int main()
{
	int Map[10][10] =
	{
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	};

int PlayerX = 1;
int PlayerY = 1;
char Key = 0;

	for (;;)
	{
		cin >> Key;
		if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'd')
		{
			PlayerX++;
		}

	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << "P";
			}
			else if (Map[Y][X] == 0)
			{
				cout << " ";
			}
			else if (Map[Y][X] == 1)
			{
				cout << "*";
			}
		}
		cout << endl;
	}

	return 0;
}