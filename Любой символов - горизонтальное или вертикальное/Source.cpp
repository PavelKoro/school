#include<iostream>
using namespace std;

/* ����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, ��� �������������� - ��������� ������������. */

int main()
{
	setlocale(LC_ALL, "Rus");

	int simbolCount, lineType, index = 0;
	char simbol;

	cout << "\t��������� ���������� �������� � �����: ";
	cin >> simbolCount;

	cout << "\t������� ������: ";
	cin >> simbol;

	cout << endl;

	cout << "\t�������� ��� �����" << endl
		<< "\t1 - ������������ �����" << endl
		<< "\t2 - �������������� �����" << endl;

	cout << endl;

	cout << "\t�������� �����, ���������� �� ��������: ";
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
		cout << "\t������! ����� ���� �����������!" << endl;
		break;
	}
	cout << endl << endl;
}

