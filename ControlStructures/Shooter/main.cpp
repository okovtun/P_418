﻿#include<iostream>
#include<conio.h>
using namespace std;

#define Escape		27
#define Enter		13
#define UpArrow		72
#define DownArrow	80
#define LeftArrow	75
#define RightArrow	77

void main()
{
	setlocale(LC_ALL, "");
		cout << true << endl;
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		/*if (key == 'w' || key == 'W' || key == UpArrow)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S' || key == DownArrow)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'a' || key == 'A' || key == LeftArrow)
		{
			cout << "Влево" << endl;
		}
		else if (key == 'd' || key == 'D' || key == RightArrow)
		{
			cout << "Вправо" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == 13)
		{
			cout << "Огонь" << endl;
		}
		else
		{
			if(key != -32 && key != Escape)cout << "Error" << endl;
		}*/

		switch (key)
		{
		case 'w':
		case 'W':
		case UpArrow: cout << "Вперед" << endl; break;
		case 's':
		case 'S':
		case DownArrow: cout << "Назад" << endl; break;
		case 'a':
		case 'A':
		case LeftArrow: cout << "Влево" << endl; break;
		case 'd':
		case 'D':
		case RightArrow: cout << "Вправо" << endl; break;
		case Escape:cout << "Выход" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
}