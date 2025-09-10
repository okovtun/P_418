//DynamicMemory
#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	cout << "DynamicMemory" << endl;
	int n = 5;
	cout << "Введите размер массива: "; cin >> n;
	///////////////////////////////////////////////////
	///			(1) Выделение памяти:				///
	///////////////////////////////////////////////////
	int* arr = new int[n];

	///////////////////////////////////////////////////
	///			(2) Использование памяти:			///
	///////////////////////////////////////////////////
	FillRand(arr, n);
	Print(arr, n);

	//Добавление значения в конец массива:
	int value;	//добавляемое значение
	cout << "Введите добавляемое значение: "; cin >> value;
	arr[n] = value;
	n++;
	Print(arr, n);
	int* buffer
	///////////////////////////////////////////////////
	///				(3)Удаление памяти:				///
	///////////////////////////////////////////////////
	delete[] arr;
	//Memory leak
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Оператор индексирования (Subscript operator) []:
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива при помощи арифметики указателей и оператора разыменования:
		cout << *(arr + i) << tab;
	}
	cout << endl;
}