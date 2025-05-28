#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	int n;
	int c;
	int dif;
	cout << "Введите высоту для трегуольника: "; cin >> n;
	for (int i = 0; i < n; i++) // строчки треугольника
	{
		for (int j = 0; j < n - i; j++) //пробелы для выравнивания 
		{
			cout << "\t";
		}
		for (int j = 0; j <= i; j++)//сам треугольник
		{
			if (j == 0 || j == i) cout << 1;
			else
			{
				double fact_i = 1;
				double fact_j = 1;
				double fact_dif = 1;
				dif = i - j;

				for (int k = 1; k <= dif; k++)
				{
					fact_dif *= k;
				}
				for (int k = 1; k <= i; k++)
				{
					fact_i *= k;
				}
				for (int k = 1; k <= j; k++)
				{
					fact_j *= k;
				}
				c = fact_i / (fact_j * fact_dif); //формула биномиального коэффициента С(i,j) = i! / (j! * (i-j)!) 

				cout << c;
			}
			if (j < i)
			{
				cout << "\t\t";
			}
		}
		cout << endl;
	}
}