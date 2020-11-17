#include <iostream>
#include <ctime>

/* Заполнить массив уникальными случайными числами */

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	int const SIZE = 10;
	int arr[SIZE];

	bool alreadyThere;

	for (int i = 0; i < SIZE;)
	{
		alreadyThere = false;

		int newRanomValue = rand() % 20;

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRanomValue)
			{
				alreadyThere = true;
				break;	
			}
		}
 
		if (alreadyThere != true)
		{
			arr[i] = newRanomValue;
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}