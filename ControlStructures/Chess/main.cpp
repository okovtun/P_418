#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE		(char)218
#define UPPER_RIGHT_ANGLE		(char)191
#define LOWER_LEFT_ANGLE		(char)192
#define LOWER_RIGHT_ANGLE		(char)217
#define HORIZONTAL_LINE			(char)196
#define VERTICAL_LINE			(char)179
#define WHITE_BOX				(char)219
#define BLACK_BOX				(char)32

//#define INTRO
//#define ASCII

void main()
{
	setlocale(LC_ALL, "");	//Включаем Русскую кодировку
	int n;
	cout << "Введите размер доски: "; cin >> n;

#ifdef INTRO
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*if ((i + j) % 2 == 0)cout << "+ ";
			else cout << "- ";*/
			//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
			//Conditional Ternary Operator
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";

			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // INTRO

	setlocale(LC_ALL, "C");	//Возвращаем кодировку по умолчанию
#ifdef ASCII
	for (int i = 176; i < 224; i++)
	{
		//if (i % 16 == 0)cout << endl;
		//cout << (char)i << " ";
		cout << i << "\t" << (char)i << endl;
	}
	cout << endl;
#endif // ASCII
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			//cout << "* ";
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else
			{
				//TODO:
				if (i % 2 == j % 2)cout << WHITE_BOX << WHITE_BOX;
				else cout << BLACK_BOX << BLACK_BOX;
			}
		}
		cout << endl;
	}

	setlocale(LC_ALL, "");
	cout << "Вот и сказочке конец" << endl;
}