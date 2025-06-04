#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;
	int arr[SIZE] = { 3, 5, 8 };

	//arr[2] = 1024;			//Обращение к элементу массива на запись
	//cout << arr[2] << endl;	//Обращение к элементу массива на чтение

	//Ввод элементов массива с клавиатуры:
	//cout << "Введите элементы массива: ";
	int minRand, maxRand;
	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальное случайное число: "; cin >> maxRand;
	for (int i = 0; i < SIZE; i++)
	{
		//cin >> arr[i];
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//Функция rand() возвразает псевдослучайное число в диапазоне от 0 до 32 767 (RAND_MAX)
	}

	//Вывод массива на экран:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//Вывод массива на экран в обратном порядке:
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;

	//Среднее-арифметическое элементов массива:
	cout << "Среднее-арифметическое элементов массива: " << (double)sum / SIZE << endl;

	//Найти минимальное значение в массиве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве: " << max << endl;

	//Сортировка массива:
}