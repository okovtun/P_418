#include<iostream>
using namespace std;

//#define SQUARE
#define TRIANGLE_1
#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4
#define RHOMBUS

void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "¬ведите размер фгуры: "; cin >> n;
	
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1

#endif // TRIANGLE_1

}