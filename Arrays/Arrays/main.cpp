#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };

	//arr[2] = 1024;			//��������� � �������� ������� �� ������
	//cout << arr[2] << endl;	//��������� � �������� ������� �� ������

	//���� ��������� ������� � ����������:
	//cout << "������� �������� �������: ";
	int minRand, maxRand;
	cout << "������� ����������� ��������� �����: "; cin >> minRand;
	cout << "������� ������������ ��������� �����: "; cin >> maxRand;
	for (int i = 0; i < SIZE; i++)
	{
		//cin >> arr[i];
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767 (RAND_MAX)
	}

	//����� ������� �� �����:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������� �� ����� � �������� �������:
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;

	//�������-�������������� ��������� �������:
	cout << "�������-�������������� ��������� �������: " << (double)sum / SIZE << endl;

	//����� ����������� �������� � �������:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "����������� �������� � �������: " << min << endl;
	cout << "������������ �������� � �������: " << max << endl;

	//���������� �������:
}