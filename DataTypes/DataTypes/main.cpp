//DataTypes
#include<iostream>
using namespace std;

#define delimiter "\n--------------------------------\n"

void main()
{
	setlocale(LC_ALL, "Russian");
	/*cout << "DataTypes\n";;
	cout << true << endl;
	cout << false << endl;*/

	cout << delimiter << endl;
	cout << "float:\n";
	cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << delimiter << endl;

	cout << "double:\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;

	double price;	//Объявление переменной
	//price = 0;		//Инициализация после объявления
	//double price = 0;	//Инициализация переменной 'price' при объявлении
	//cout << "Введите стоимость: ";
	//cin >> price;	//Инициализация вводом с клавиатуры
	//cout << "Вы ввели значение: " << price << endl;
	//Init - начало

	cout << "CONSTANTS" << endl;

	int speed = 0;	//переменное значение
	const int MAX_SPEED = 250;	//Постоянное значение

	cout << typeid(sizeof(250)).name() << endl;
	cout << typeid(.250f).name() << endl;
	//		typeid(value).name()
	//	value - это значение, для которого нужно определить тип.
	//  метод name() вовзращает имя типа.

	250;	// числовая константа типа 'int';
	250l;	// числовая константа типа 'long';
	250L;	// числовая константа типа 'long';
	250ULL;	// числовая константа типа 'unsigned long long';
	250.;	// числовая константа типа 'double';
	.250;	// числовая константа типа 'double';
	250.f;	// числовая константа типа 'float';
	.250f;	// числовая константа типа 'float';

	//Символьная константа - это одиночный символ, заключенный в одинарные кавычки,
	//						 например '+'.
	//Все символьные константы являются константами типа 'char'.
	cout << typeid('+').name() << endl;
	cout << '+' << endl;
	cout << "+" << endl;
	cout << sizeof('+') << endl;
	cout << sizeof("+") << endl;
	//0 - NULL Terminator
}