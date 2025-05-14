#include<iostream>
using namespace std;

//#define FACTORIAL
//#define POWER

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

	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}

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