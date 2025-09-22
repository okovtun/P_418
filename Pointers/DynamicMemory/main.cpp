//DynamicMemory
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int** arr, const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(int** arr, const int ROWS, const int COLS);

int* push_back(int arr[], int& n, int value);	//Добавляет значение в конец
int* push_front(int arr[], int& n, int value);
int* insert(int arr[], int& n, int value, int index);
int* pop_back(int arr[], int& n);
int* pop_front(int arr[], int& n);
int* erase(int arr[], int& n, int index);

int** push_row_back(int** arr, int& rows, const int cols);
int** push_row_front(int** arr, int& rows, const int cols);

int** pop_row_back(int** arr, int& rows, const int cols);

void push_col_back(int** arr, const int rows, int& cols);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef DYNAMIC_MEMORY_1
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

	arr = push_back(arr, n, value);

	//7) Mission complete, happy tomorrow:
	Print(arr, n);

	cout << "Введите добавляемое значение: "; cin >> value;
	arr = push_front(arr, n, value);
	Print(arr, n);

	int index;
	cout << "Введите индекс добавляемого элемента: "; cin >> index;
	cout << "Введите значение добавляемого элемента: "; cin >> value;
	arr = insert(arr, n, value, index);
	Print(arr, n);

	Print(arr = pop_back(arr, n), n);
	Print(arr = pop_front(arr, n), n);
	cout << "Введите индекс удаляемого элемента: "; cin >> index;
	Print(arr = erase(arr, n, index), n);

	///////////////////////////////////////////////////
	///				(3)Удаление памяти:				///
	///////////////////////////////////////////////////
	delete[] arr;

	//Memory leak  
#endif // DYNAMIC_MEMORY_1

#ifdef DYNAMIC_MEMORY_2
	int rows;
	int cols;
	cout << "Введите количество строк: "; cin >> rows;
	cout << "Введите количество элементов строки: "; cin >> cols;

	int** arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	FillRand(arr, rows, cols);
	Print(arr, rows, cols);
	//2DDA - Two-Dimensional Dynamic Array

	arr = push_row_back(arr, rows, cols);
	FillRand(arr[rows - 1], cols, 100, 1000);
	Print(arr, rows, cols);

	arr = push_row_front(arr, rows, cols);
	FillRand(arr[0], cols, 100, 1000);
	Print(arr, rows, cols);

	arr = pop_row_back(arr, rows, cols);
	Print(arr, rows, cols);



	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

#endif // DYNAMIC_MEMORY_2

}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		//Оператор индексирования (Subscript operator) []:
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(int** arr, const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
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
void Print(int** arr, const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
}

int* push_back(int arr[], int& n, int value)
{
	//1) Создаем буферный массив нужного размера:
	int* buffer = new int[n + 1];

	//2) Копируем значения из исходного массива в буферный:
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	//3) Удаляем исходный массива:
	delete[] arr;

	//4) Подменяем адрес исходного массива адресом нового (буферного массива):
	arr = buffer;

	//5) И только после всего этого в массиве 'arr' появляется элемент, в который можно сохранить добавляемое значение:
	arr[n] = value;

	//6) После того как в массив добавился еще один элемент, количество элементов массива увеличивается на 1:
	n++;

	//7) Mission complete, happy tomorrow:
	return arr;
}

int* push_front(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1];
	for (int i = 0; i < n; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}
int* insert(int arr[], int& n, int value, int index)
{
	if (index > n)return arr;
	int* buffer = new int[n + 1];
	/*for (int i = 0; i < index; i++)buffer[i] = arr[i];
	for (int i = index; i < n; i++)buffer[i + 1] = arr[i];*/
	for (int i = 0; i < n; i++)
	{
		/*if (i < index)
		{
			buffer[i] = arr[i];
		}
		else
		{
			buffer[i + 1] = arr[i];
		}*/
		//i < index ? buffer[i] = arr[i] : buffer[i + 1] = arr[i];
		buffer[i < index ? i : i + 1] = arr[i];
	}
	buffer[index] = value;

	delete[] arr;
	n++;
	return buffer;
}
int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
int* pop_front(int arr[], int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}
int* erase(int arr[], int& n, int index)
{
	if (index >= n)return arr;
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
		buffer[i] = arr[i < index ? i : i + 1];
	delete[] arr;
	return buffer;
}
int** push_row_back(int** arr, int& rows, const int cols)
{
	//1) Создаем новый массив указателей:
	int** buffer = new int*[rows + 1];

	//2) Копируем адреса строк из исходного массива в новый массив указателей:
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];

	//3) Удаляем исходный массив указателей:
	delete[] arr;

	//4) Выделяем память под добавляемую строку:
	buffer[rows] = new int[cols] {};

	//5) После добавления строки количество строк увелчивается на одну:
	rows++;

	//6) Вовращаем новый массив указателей:
	return buffer;
}
int** push_row_front(int** arr, int& rows, const int cols)
{
	int** buffer = new int*[rows + 1];
	for (int i = 0; i < rows; i++)buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[0] = new int[cols] {};
	rows++;
	return buffer;
}

int** pop_row_back(int** arr, int& rows, const int cols)
{
	int** buffer = new int*[--rows];
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr[rows];	//!!! удаляем удаляемую строку !!!
	delete[] arr;		//удаляем исходный массив указателей
	return buffer;
}

void push_col_back(int** arr, const int rows, int& cols)
{

}