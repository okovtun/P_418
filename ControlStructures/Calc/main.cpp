#include<iostream>
using namespace std;

//switch
//if...else...

//#define CALC_IF
#define CALC_SWITCH

void main()
{
	setlocale(LC_ALL, "");
	double a, b;	//числа, вводимые пользователем
	char s;			//Sign - знак операции
	cout << "Введите простое выражение: " << "(например 2+3)";
	cin >> a >> s >> b;
	/*cin >> a;
	cin >> s;
	cin >> b;*/
	cout << a << s << b << endl;
#if defined CALC_IF
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
#endif

#if defined CALC_SWITCH

	switch (s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error: No operation" << endl;
	}
	//case - случай
	//label - метка
	//value - значение
	//already - уже
#endif
}