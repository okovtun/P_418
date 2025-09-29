//DynamicMemory
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

template<typename T>T** Allocate(const int rows, const int cols);
template<typename T>void Clear(T** arr, const int rows);

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n);

void FillRand(int** arr, const int ROWS, const int COLS);
void FillRand(double** arr, const int ROWS, const int COLS);
void FillRand(char** arr, const int ROWS, const int COLS);

//template - создает шаблон
//typename - объявляет шаблонный тип данных
//	   T - имя шаблонного типа
template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T** arr, const int ROWS, const int COLS);

template<typename T>T* push_back(T arr[], int& n, T value);	//Добавляет значение в конец
template<typename T>T* push_front(T arr[], int& n, T value);
template<typename T>T* insert(T arr[], int& n, T value, int index);
template<typename T>T* pop_back(T arr[], int& n);
template<typename T>T* pop_front(T arr[], int& n);
template<typename T>T* erase(T arr[], int& n, int index);

template<typename T>T** push_row_back(T** arr, int& rows, const int cols);
template<typename T>T** push_row_front(T** arr, int& rows, const int cols);

template<typename T>T** pop_row_back(T** arr, int& rows, const int cols);

template<typename T>void push_col_back(T** arr, const int rows, int& cols);
template<typename T>void pop_col_back(T** arr, const int rows, int& cols);

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

#define DATA_TYPE char

void main()
{
	setlocale(LC_ALL, "");
	typedef double DataType;

#ifdef DYNAMIC_MEMORY_1
	cout << "DynamicMemory" << endl;
	int n = 5;
	cout << "Введите размер массива: "; cin >> n;
	///////////////////////////////////////////////////
	///			(1) Выделение памяти:				///
	///////////////////////////////////////////////////
	DataType* arr = new DataType[n];

	///////////////////////////////////////////////////
	///			(2) Использование памяти:			///
	///////////////////////////////////////////////////
	FillRand(arr, n);
	Print(arr, n);

	//Добавление значения в конец массива:
	DataType value;	//добавляемое значение
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

	double** arr = Allocate<double>(rows, cols);
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

	push_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	pop_col_back(arr, rows, cols);
	Print(arr, rows, cols);

	Clear(arr, rows);

#endif // DYNAMIC_MEMORY_2

}

template<typename T>T** Allocate(const int rows, const int cols)
{
	T** arr = new T*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new T[cols];
	}
	return arr;
}
template<typename T>void Clear(T** arr, const int rows)
{
	//1) Удаляем строки
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	//2) Удаляем массив указателей:
	delete[] arr;
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		//Оператор индексирования (Subscript operator) []:
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		//Оператор индексирования (Subscript operator) []:
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Оператор индексирования (Subscript operator) []:
		arr[i] = rand();
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
void FillRand(double** arr, const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % 10000)/100;
		}
	}
}
void FillRand(char** arr, const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}
}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Обращение к элементам массива при помощи арифметики указателей и оператора разыменования:
		cout << *(arr + i) << tab;
	}
	cout << endl;
}
template<typename T>void Print(T** arr, const int ROWS, const int COLS)
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
template<typename T>T* push_back(T arr[], int& n, T value)
{
	//1) Создаем буферный массив нужного размера:
	T* buffer = new T[n + 1];

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
template<typename T>T* push_front(T arr[], int& n, T value)
{
	T* buffer = new T[n + 1];
	for (int i = 0; i < n; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[0] = value;
	n++;
	return buffer;
}
template<typename T>T* insert(T arr[], int& n, T value, int index)
{
	if (index > n)return arr;
	T* buffer = new T[n + 1];
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
template<typename T>T* pop_back(T arr[], int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}
template<typename T>T* pop_front(T arr[], int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)buffer[i] = arr[i + 1];
	delete[] arr;
	return buffer;
}
template<typename T>T* erase(T arr[], int& n, int index)
{
	if (index >= n)return arr;
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)
		buffer[i] = arr[i < index ? i : i + 1];
	delete[] arr;
	return buffer;
}
template<typename T>T** push_row_back(T** arr, int& rows, const int cols)
{
	//1) Создаем новый массив указателей:
	T** buffer = new T*[rows + 1];

	//2) Копируем адреса строк из исходного массива в новый массив указателей:
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];

	//3) Удаляем исходный массив указателей:
	delete[] arr;

	//4) Выделяем память под добавляемую строку:
	buffer[rows] = new T[cols] {};

	//5) После добавления строки количество строк увелчивается на одну:
	rows++;

	//6) Вовращаем новый массив указателей:
	return buffer;
}
template<typename T>T** push_row_front(T** arr, int& rows, const int cols)
{
	T** buffer = new T*[rows + 1];
	for (int i = 0; i < rows; i++)buffer[i + 1] = arr[i];
	delete[] arr;
	buffer[0] = new T[cols] {};
	rows++;
	return buffer;
}

template<typename T>T** pop_row_back(T** arr, int& rows, const int cols)
{
	T** buffer = new T*[--rows];
	for (int i = 0; i < rows; i++)buffer[i] = arr[i];
	delete[] arr[rows];	//!!! удаляем удаляемую строку !!!
	delete[] arr;		//удаляем исходный массив указателей
	return buffer;
}

template<typename T>void push_col_back(T** arr, const int rows, int& cols)
{
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols + 1]{};
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
	cols++;
}
template<typename T>void pop_col_back(T** arr, const int rows, int& cols)
{
	cols--;
	for (int i = 0; i < rows; i++)
	{
		T* buffer = new T[cols];
		for (int j = 0; j < cols; j++)buffer[j] = arr[i][j];
		delete[] arr[i];
		arr[i] = buffer;
	}
}