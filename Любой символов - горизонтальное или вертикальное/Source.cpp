#include<iostream>
using namespace std;

/* Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь. */

int main()
{
	setlocale(LC_ALL, "Rus");

	int simbolCount, lineType, index = 0;
	char simbol;

	cout << "\tВвыведите количество символов в линии: ";
	cin >> simbolCount;

	cout << "\tВведите символ: ";
	cin >> simbol;

	cout << endl;

	cout << "\tВыберите тип линии" << endl
		<< "\t1 - Вертикальная линия" << endl
		<< "\t2 - Горизонтальная линия" << endl;

	cout << endl;

	cout << "\tВыбирите цифру, отвечающая за действие: ";
	cin >> lineType;

	switch (lineType)
	{
	case 1:
		while (index < simbolCount)
		{
			cout << simbol << endl;
			index++;
		}
		break;
	case 2:
		while (index < simbolCount)
		{
			cout << simbol << " ";
			index++;
		}
		break;
	default:
		cout << endl;
		cout << "\tОшибка! Пункт меню отсутствует!" << endl;
		break;
	}
	cout << endl << endl;
}

