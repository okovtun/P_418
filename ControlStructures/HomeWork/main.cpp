#include <iostream>
#include <iomanip> 

using namespace std;

namespace ChessBoard {

	void printChessBoard(int size) {

		for (int row = 0; row < size; ++row) {
			for (int col = 0; col < size; ++col) {
				if ((row + col) % 2 == 0) {
					cout << "* ";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
}


int main() {
	setlocale(LC_ALL, "Russian");
	int size;
	cout << "Введите размер шахматной доски (количество рядов и столбцов): ";
	cin >> size;

	ChessBoard::printChessBoard(size);

	return 0;
}