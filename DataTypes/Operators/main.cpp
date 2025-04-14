#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS//1)
//#define ASSIGNMENT_OPERATOR	//2)Оператор присваивания
#define INCREMENT_DECREMENT		//3) Increment/Decrement(++/--)

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Operators!" << endl;

#ifdef ARITHMETICAL_OPERATORS
	//Unary:	+, -;
	//Binary:	+, -, *, /, % - остаток от деления;

	cout << 17 / 3 << endl;
	cout << 17 % 3 << endl;
	cout << 3. % 17 << endl;//float и double

#endif // ARITHMETICAL_OPERATORS

#if defined ASSIGNMENT_OPERATOR
	//
	//int a = 2;
//	r-value в простейшем слечае состоит из одной переменной или константы.
	//Ассоциативность справа налево.
	//У все операторов C++ ассоциативность слева направо,
	//кроме присваиваний.
	//У операторов присваивания Ассоциативность справа налево.

	//a = b + c * d - e / f;

	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;

#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1.
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1.
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement

	
	int j = ++i;


	cout << i << endl;	//1
	cout << j << endl;	//0
#endif // INCREMENT_DECREMENT

}