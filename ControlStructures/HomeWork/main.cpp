#include <iostream>

int main() {
	setlocale(LC_ALL, "russian");
	int depth;

	std::cout << "Введите глубину треугольника Паскаля: ";
	std::cin >> depth;

	for (int i = 0; i < depth; ++i) {
		// Вывод пробелов для выравнивания
		for (int j = 0; j < depth - i - 1; ++j) {
			std::cout << " ";
		}

		// Вычисление и вывод элементов текущей строки
		int value = 1;
		for (int j = 0; j <= i; ++j) {
			std::cout << value << " ";

			// Вычисляем следующий элемент по формуле
			value = value * (i - j) / (j + 1);
		}
		std::cout << std::endl;
	}

}