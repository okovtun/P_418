#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	cout << temperature << endl;

	if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	if (temperature > 50)
	{
		cout << "�� �� ��������" << endl;
	}
	if (temperature > 30)
	{
		cout << "�����" << endl;
	}
	if (temperature > 10)
	{
		cout << "�����" << endl;
	}
	if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	if (temperature > -70)
	{
		cout << "�� �� ��������� ������" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
}

/*
if (condition)
	{
		...;
		code1;
		...;
	}
	else
	{
		...;
		code2;
		...;
	}
	//Condition - ��� ������� (���������� ���������).
	//������� - ��� ���������. (bool)
	//if - ����;
	//else - �����, � ��������� ������;



	if (condition)
	{
		.....;
		conditional-code;
		.....;
	}

	//
*/

/*
	
	if(cond_1)
	{
		code_1;
	}
	else if(cond_2)
	{
		code_2;
	}
	.......
	.......
	else if(cond_N)
	{
		code_N;
	}
	else
	{
		default_code;
	}


	1. ������� ������ ������� � ()!!!
	2. ����� ��������� ����� 'else' ������� �� ������� �������
		else (condition) // - ��� �����������!!! Compile error
	   ���� ����� 'else' ����� �������� �������, �� ������� ����� 'if',
	   � ����� �������:
	   else if(condition)// - ��� ���������, ����� ��� ��������������.
	3. �������� ����� 'else' ����� ���� �������� ������ ����� 'if()...';


*/

/*
���� (Loop - �����) - ��� ����������� ���������, ������� ���������
	 ����������� ��������� (���������) ������������ ���.

while		- ��� ���� � ������������;
do...while	- ���� � ������������;
for			- ���� �� �������� ����� ��������;

�������� - ��� ����������� ���������� ���� �����;
���� ����� - ��� ���, ������� ����� ��������� (����������� ���������);
*/