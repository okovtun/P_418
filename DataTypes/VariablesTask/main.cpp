#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double money;
	cout << "Введите сумму: "; cin >> money;
	money += 1e-8;
	cout << "Сумма: " << money << endl;
	int rub = money;	//здесь происходит неявное преобразование типов из 'double' в 'int',
						//при этом дробная часть теряется.
	cout << rub << " руб.\t";
	int cop = (money - rub) * 100;
	cout << cop << " коп.\n";
}