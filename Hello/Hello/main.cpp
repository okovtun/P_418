﻿#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "\t\t\t\t\t\tHello World!\n";
	cout << "Привет Мир!";
	//Escape-последовательности
}

//Ctrl+F7 - Компиляция
//Ctrl+F5 - Запуск

/*
----------------------------------------
#include<iostream>
# - показывает что #include - это директива.
Директива - это указание компилятору на выполнение некоторых действий.
Директива #include (включить, подключить) указывает компилятору на то,
что к нашему исходному файлу нужно подключить другой файл, в данном случае <iostream>
При компиляции на место директивы #include 
происходит встраивание содержимого другого файла в наш файл.

Библиотека <iostream> содержит потоки ввода/вывода cin/cout 
для ввода с клавиатуры и вывода на экран.

Имя другог файла может быть указано в <> или ""
<> - компилятор будет искать файл в системных каталогах Visual Studio
"" - компилятор будет искать файл сначала в каталоге с проектом, 
	 а потом в системных каталогах Visual Studio
----------------------------------------
using namespace std;	
Говорит компилятору использовать пространство имен 'std'
В этом именном пространстве объявлены потоки cin/cout.
Пространства имен нужны для повторного использования имен.
Именные пространства учень удобно сравнивать с каталогами (папками).
----------------------------------------
void main()
main() - это главная функция, которая является точкой входа, 
		 поскольку с нее начинается выполнение любой программы.
Фукция main() ОБЯЗАТЕЛЬНО ДОЛЖНА БЫТЬ В ЛЮБОМ ПРОЕКТЕ, НО ТОЛЬКО ОДНА,
в противном случае возникают ошибки на этапе компоновки.

() - подказывают что main() - это функция
{} - показывают тело и область видимости функции main()
void (Пустота) - показывает что функция main() ничего НЕ возвращает по завершении.
----------------------------------------
cout (Console Out) - поток вывода на экран. Выводит значения в окно консоли.
cout может выводить сколько угодно значений, при этом они разделяются <<;
<< - оператор перенаправления в поток, направляет значения в поток 'cout';
"Hello World" - это строковая константа.
Строковая константа - это последовательность символов, заключенная в ""
; - признак конца выражения, так же как . является признаком конца предложения в письенной речи.
----------------------------------------
*/