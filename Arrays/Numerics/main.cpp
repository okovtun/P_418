#include<iostream>
using namespace std;

//#define BINARY

void main()
{
	setlocale(LC_ALL, "");
	//for (int i = 0; i < 256; i++)		cout << i << "\t" << (char)i << endl;
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;

#ifdef BINARY
	const int CAPACITY = 32;	//Максимально возможная разрядность двоичного числа
	bool bin[CAPACITY] = {};
	int i = 0;
	for (; decimal; decimal /= 2)
		bin[i++] = decimal % 2;

	for (--i; i >= 0; i--)
		cout << bin[i];
	cout << endl;
#endif // BINARY

	//Hexadecimal (Hex)
	//1 Hex-разряд включает в себя 4 Bin-разряда

	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};

	int i = 0;
	for (; decimal; decimal /= 16)
	{
		hex[i++] = decimal % 16 < 10 ? decimal % 16 + 48 : decimal % 16 + 55;
		//hex[i] = decimal % 16;
		//hex[i++] += hex[i] < 10 ? 48 : 55;
	}
	for (--i; i >= 0; i--)cout << hex[i];
	//for (--i; i >= 0; i--)cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 55);
	cout << endl;
}