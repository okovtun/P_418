#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
//#define FIBONACCI_2
//#define SIMPLE_NUMBERS
//#define PERFECT_NUMBERS
//#define PYTHAGORAS_TABLE

void main()
{
	setlocale(LC_ALL, "");

#ifdef FACTORIAL
	int n;
	cout << "Введите число: "; cin >> n;
	double f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;	//основание степени
	int n;	//показатель степени
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
	main();
#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "Введите предел для ряда Фибоначчи: "; cin >> n;
	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
		cout << a << "\t";
#endif // FIBONACCI_1

#ifdef FIBONACCI_2
	int n;
	cout << "Введите количество чисел из ряда Фибоначчи: "; cin >> n;
	for (long long int i = 0, a = 0, b = 1, c = a + b; i++ <= n; a = b, b = c, c = a + b)
		cout << a << "\t";
#endif // FIBONACCI_1

#ifdef SIMPLE_NUMBERS
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		bool simple = true;		//Проедположим, что число простое,
		//но это нужно проветрить:
		//for (int j = 2; j < i / 2; j++)
		for (int j = 2; j <= sqrt(i); j++)//Функция sqrt(n) возвращает квадратный корень числа 'n'
		{
			if (i%j == 0)
			{
				simple = false;
				break;
			}
		}
		if (simple)cout << i << "\t";
	}
	cout << endl;
#endif // DEBUG

#ifdef PERFECT_NUMBERS
	int n;
	cout << "Введите предельное число: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		int sum = 0;
		for (int j = 1; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (i == sum)cout << i << "\t";
	}
#endif // PERFECT_NUMBERS

#ifdef PYTHAGORAS_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE

}
/*
--------------------------------------------
for - это цикл на заданное число итераций.
--------------------------------------------
*/

/*
------------------------------------------
for (counter; condition; expression)
{
	.....;
	group - of - statements;
	.....;
}

counter		- это счетчик цикла, это переменная,
			  которая считает сколько раз выполнился,
			  или будет выполнен цикл.
			  !!! ВЫРАЖЕНИЕ 'counter' ОТРАБАТЫВАЕТ ОДИН РАЗ - ПЕРЕД ПЕРВОЙ ИТЕРАЦИЕЙ !!!

condition	- это условие продолжения, или завершения цикла.
			  УСЛОВИЕ ПРОВЕРЯЕТСЯ ПЕРЕД КАЖДОЙ ИТЕРАЦИЕЙ !!!

expression  - это выражение, которое изменяет счетчик.
			  В этом выражении можно писать абсолютно все что угодно, но
			  как правило здесь пишут Increment/Decrement счетчика.

			  Expression ОТРАБАТЫВАЕТ ПОСЛЕ КАЖДОЙ ИТЕРАЦИИ !!!
------------------------------------------
*/