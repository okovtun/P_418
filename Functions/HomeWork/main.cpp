#include <iostream>
#include <iomanip> 
using namespace std;


void calculateAndPrint(int a, int b);


int Add(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mult(int a, int b) { return a * b; }
double Div(int a, int b) { return (double)a / b; }

void main() {
	setlocale(LC_ALL, "");
	int a, b;

	cout << "Ââåäèòå äâà ÷èñëà: ";
	cin >> a >> b;

	calculateAndPrint(a, b);
}


void calculateAndPrint(int a, int b) {
	cout << a << " + " << b << " = " << Add(a, b) << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mult(a, b) << endl;


	if (b != 0) {
		cout << a << " / " << b << " = " << fixed << setprecision(2) << Div(a, b) << endl;
	}
	else {
		cout << "Äåëåíèå íà íîëü íåâîçìîæíî." << endl;
	}
}