#include<iostream>
using namespace std;

//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "");

#ifdef PALINDROME
	int number;		//число, введенное ползователем
	int reverse = 0;//исходное число, записанное наоборот
	cout << "Введите число: "; cin >> number;
	//для того чтобы исходное число 'number' осталось неизменным, 
	//создаем его копию, и дальше будем работать с копией.
	int buffer = number;
	while (buffer)
	{
		reverse *= 10;				//освобождаем место под следующий разряд
		reverse += buffer % 10;		//добавляем младший разряд к обратной записи числа
		buffer /= 10;				//убираем младший разряд из прямой записи числа
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}
#endif // PALINDROME

	int number;		//Номер билета
	int sum_1 = 0;	//Сумма трех старших разрядов
	int sum_2 = 0;	//Сумма трех младших разрядов
	cout << "Введите нмер билета: "; cin >> number;
	while (number > 1000)
	{
		sum_1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum_2 += number % 10;
		number /= 10;
	}
	cout << sum_1 << endl;
	cout << sum_2 << endl;
}