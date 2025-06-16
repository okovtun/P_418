#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;;

#define tab "\t"
#define delimiter "\n-------------------------------\n"

#define ARRAYS_2D_BASICS
//#define SHIFTS
//#define COLUMNS_SHIFT
//#define CROSS_CUTTING_SHIFT

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 10;
	const int COLS = 10;
	int arr[ROWS][COLS] =
	{
		{  0, 1, 2, 3, 4, 5, 6, 7, 8, 9 },
		{ 10,11,12,13,14,15,16,17,18,19 },
		{ 20,21,22,23,24,25,26,27,28,29 },
	};

#ifdef ARRAYS_2D_BASICS
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
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

	//����� ������������ � ������������� �������� � �������:
	int min, max;
	min = max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;

	//���������� �������:
	int iterrations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - ��������� �������;
					//arr[k][l] - ������������ �������;
					iterrations++;
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "��������� ��������: " << iterrations << endl;
	cout << "��������� �������: " << exchanges << endl;

	//����� ���������������� �������:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
		cout << endl;
	}
#endif // ARRAYS_2D_BASICS

#ifdef SHIFTS
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
		cout << endl;
	}
	cout << delimiter << endl;

	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;

#ifdef COLUMNS_SHIFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			int buffer = arr[i][0];
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			arr[i][COLS - 1] = buffer;
		}
	}
#endif // COLUMNS_SHIFT

#ifdef CROSS_CUTTING_SHIFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 1; j < COLS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			if (i != ROWS - 1)arr[i][COLS - 1] = arr[i + 1][0];
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
#endif // CROSS_CUTTING_SHIFT



	//����� ���������� �������:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
		cout << endl;
	}
#endif // SHIFTS
}