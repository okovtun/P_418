#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "������� ������ �����(������� 1): "; cin >> size;
	cout << endl;
	//�������
	for (int i = 0; i < 5 * size; i++)
	{
		for (int j = 0; j < 5 * size; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl << endl;

	//���������� �����������
	for (int i = 0; i < 5 * size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << ("* ");

		}
		cout << endl;
	}

	cout << endl << endl;
	//���������� �����������
	for (int i = 5 * size; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << ("* ");

		}
		cout << endl;
	}

	cout << endl << endl;

	//����������� � ��������(?)
	for (int i = 0; i < 5 * size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}

		if (i >= (5 * size) - (2 * size))
		{
			for (int l = 1; l <= size; l++)
			{
				cout << "    ";
			}

		}

		for (int k = 0; k < (5 * size - i); k++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl << endl;

	//��� ������ �� ����� �������, ��� ������ �����������
	/*					*
				  * *
				* * *
		  * * * *
		* * * * *               */

	for (int i = 0; i < 5 * size; i++)
	{
		for (int j = 0; j < (5 * size - 1 - i) * 2; j++)
		{
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl << endl;

	cout << endl << endl;
	//����
	for (int i = 0; i < 5 * size; i++)
	{
		for (int j = 5 * size; j > i; j--)
		{
			cout << " ";
		}
		cout << "/";
		if (i > 0) {
			for (int j = 0; j < (i); j++)
			{
				cout << "  ";
			}
		}
		cout << "\\\n";
	}
	for (int i = (5 * size) - 1; i >= 0; i--)
	{
		for (int j = 5 * size; j > i; j--)
		{
			cout << " ";
		}
		cout << "\\";
		if (i > 0) {
			for (int j = 0; j < (i); j++)
			{
				cout << "  ";
			}
		}
		cout << "/\n";
	}
}
