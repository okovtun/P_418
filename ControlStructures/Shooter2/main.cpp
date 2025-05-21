#include <iostream>
using namespace std;
//#define SQUARE
//#define TRIANGLE
#define RHOMBUS

int main()
{
	setlocale(LC_ALL, "russian");
#ifdef SQUARE
	int n;
	cout << "¬ведите размер фигуры "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";

		}
		cout << endl;
	}

#endif
#ifdef TRIANGLE
	int n;
	cout << "¬ведите размер фигуры "; cin >> n;

	for (int i = n; i > 0; --i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << "  ";
		}
		for (int j = 0; j < i; ++j)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif
#ifdef RHOMBUS
	int n;
	std::cout << "¬ведите размер фигуры: ";
	std::cin >> n;


	for (int i = 0; i < n; ++i) {

		for (int j = 0; j < n - i - 1; ++j) {
			std::cout << " ";
		}

		std::cout << "/";

		if (i != 0) {
			for (int j = 0; j < 2 * i - 1; ++j) {
				std::cout << " ";
			}

			std::cout << "\\";
		}
		std::cout << std::endl;
	}

	for (int i = n - 2; i >= 0; --i) {

		for (int j = 0; j < n - i - 1; ++j) {
			std::cout << " ";
		}

		std::cout << "\\";

		if (i != 0) {
			for (int j = 0; j < 2 * i - 1; ++j) {
				std::cout << " ";
			}

			std::cout << "/";
		}
		std::cout << std::endl;
	}
#endif

}

