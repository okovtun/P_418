#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "������� �������: ";
	char key;

	do
	{
		key = _getch();
		if (key == 'w')
		{
			cout << "�����!" << endl;
		}
		else if (key == 'a')
		{
			cout << "�����!" << endl;
		}
		else if (key == 's')
		{
			cout << "�����!" << endl;
		}
		else if (key == 'd')
		{
			cout << "������!" << endl;
		}
		else if (key == 32)
		{
			cout << "������!" << endl;
		}
		else if (key == 13)
		{
			cout << "�����!" << endl;
		}
		else if (key == 27)
		{
			cout << "�����!" << endl;
			break;
		}
	} while (true);
}