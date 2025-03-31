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
	cout << "Введите стоимость: ";
	cin >> price;	//Ввод с клавиатуры
	cout << "Вы ввели значение: " << price << endl;
}