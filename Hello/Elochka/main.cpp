#include<iostream>
using namespace std;

#define offset "\t\t\t\t\t\t"
//define - ���������� (definition - �����������)
//��������� #define ������� ���������������� (������)
#define PI	3.14

#define Elochka

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined Elochka
//���� ���������� Elochka, �� ������������� ��� ����� ����� �����������,
//�� ��������� #endif
	cout << offset << "� ���� �������� ������,\n";
	cout << offset << "� ���� ��� �����.\n";
	cout << offset << "����� � ����� ��������,\n";
	cout << offset << "������ ����.\n";
	cout << "\n";
	cout << offset << "������ �� ���� �������:\n";
	cout << offset << "\"���, ������, ���-���!\"\n";
	cout << offset << "����� ������� ��������:\n";
	cout << offset << "\"������, �� ��������!\"\n";
	cout << "\n";
	cout << offset << "�������� ����� ���������\n";
	cout << offset << "��� ������� ������.\n";
	cout << offset << "����� ����, �������� ����,\n";
	cout << offset << "������ ��������.\n";
	cout << "\n";
	cout << offset << "��! ���� �� ���� �������\n";
	cout << offset << "��� ������� �������.\n";
	cout << offset << "������� ����������\n";
	cout << offset << "���������, �����.\n";
	cout << "\n";
	cout << offset << "���� ������� ���������,\n";
	cout << offset << "� � ������� �������.\n";
	cout << offset << "������ �� ���� ������\n";
	cout << offset << "��� ����� �������.\n";
	cout << "\n";
	cout << offset << "������ ��� ��������,\n";
	cout << offset << "�� �������� � ��� ������\n";
	cout << offset << "� �����, ����� �������\n";
	cout << offset << "�������� ��������.\n";
	cout << PI;
#endif

}