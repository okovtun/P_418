#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Нажмите клавишу: ";
	char key;

	do
	{
		key = _getch();
		if (key == 'w')
		{
			cout << "Вперёд!" << endl;
		}
		else if (key == 'a')
		{
			cout << "Влево!" << endl;
		}
		else if (key == 's')
		{
			cout << "Назад!" << endl;
		}
		else if (key == 'd')
		{
			cout << "Вправо!" << endl;
		}
		else if (key == 32)
		{
			cout << "Прыжок!" << endl;
		}
		else if (key == 13)
		{
			cout << "Огонь!" << endl;
		}
		else if (key == 27)
		{
			cout << "Выход!" << endl;
			break;
		}
	} while (true);
}