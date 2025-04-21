#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	cout << "ControlStructures" << endl;
	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	cout << temperature << endl;

	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	if (temperature > 30)
	{
		cout << "Жарко" << endl;
	}
	if (temperature > 10)
	{
		cout << "Тепло" << endl;
	}
	if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	if (temperature > -70)
	{
		cout << "Вы на Серверном полюсе" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
}

/*
if (condition)
	{
		...;
		code1;
		...;
	}
	else
	{
		...;
		code2;
		...;
	}
	//Condition - это условие (логическое выражение).
	//Условие - это сравнение. (bool)
	//if - если;
	//else - иначе, в противном случае;



	if (condition)
	{
		.....;
		conditional-code;
		.....;
	}

	//
*/

/*
	
	if(cond_1)
	{
		code_1;
	}
	else if(cond_2)
	{
		code_2;
	}
	.......
	.......
	else if(cond_N)
	{
		code_N;
	}
	else
	{
		default_code;
	}


	1. УСЛОВИЕ ВСЕГДА ПИШЕТСЯ В ()!!!
	2. ПОСЛЕ КЛЮЧЕВОГО СЛОВА 'else' НИКОГДА НЕ ПИШЕТСЯ УСЛОВИЕ
		else (condition) // - ЭТО НЕПРАВИЛЬНО!!! Compile error
	   Если после 'else' нежно написать условие, то сначала пишут 'if',
	   в потом условие:
	   else if(condition)// - Это правильно, такой код скомпилируется.
	3. КЛЮЧЕВОЕ СЛОВО 'else' МОЖЕТ БЫТЬ НАПИСАНО ТОЛЬКО ПОСЛЕ 'if()...';


*/

/*
Цикл (Loop - Петля) - это управляющая структура, которая позволяет
	 многократно выполнить (зациклить) определенный код.

while		- это цикл с предусловием;
do...while	- цикл с постусловием;
for			- цикл на заданное число итераций;

Итерация - это однократное выполнение тела цикла;
Тело цикла - это код, который нужно зациклить (многократно выполнить);
*/