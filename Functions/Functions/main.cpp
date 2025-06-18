#include<iostream>
using namespace std;

int Add(int a, int b, int c = 0);		//Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

//Too few arguments in function call
//Too many arguments in function call
//Function doesn't take N arguments

//			Default arguments

//LNK-2019: Unresolved externals

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;

	int c = Add(a, b);		//Использование функции (Вызов функции - Function call)

	cout << a << " + " << b << " = " << c << endl;
	//int value_1 = 5, value_2 = 3;
	//cout << Add(22, 33) << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}

int Add(int a, int b, int c = 0)		//Реализация функции (Определение функции - Function definition)
{
	int res = a + b + c;
	return res;
}
int Sub(int a, int b)
{
	//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication
	return a * b;
}
double Div(int a, int b)
{
	return (double)a / b;
}