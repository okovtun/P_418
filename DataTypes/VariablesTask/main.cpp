#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double money;
	cout << "������� �����: "; cin >> money;
	money += 1e-8;
	cout << "�����: " << money << endl;
	int rub = money;	//����� ���������� ������� �������������� ����� �� 'double' � 'int',
						//��� ���� ������� ����� ��������.
	cout << rub << " ���.\t";
	int cop = (money - rub) * 100;
	cout << cop << " ���.\n";
}