#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 5;
	const int COLS = 8;
	int arr[ROWS][COLS] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
		cout << endl;
	}

	//����� ��������� ���������� �������:
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "����� ��������� �������: " << sum << endl;
	cout << "�������-��������������:  " << (double)sum / ROWS / COLS << endl;
}