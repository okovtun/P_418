#include <iostream>

int main() {
	setlocale(LC_ALL, "russian");
	int depth;

	std::cout << "������� ������� ������������ �������: ";
	std::cin >> depth;

	for (int i = 0; i < depth; ++i) {
		// ����� �������� ��� ������������
		for (int j = 0; j < depth - i - 1; ++j) {
			std::cout << " ";
		}

		// ���������� � ����� ��������� ������� ������
		int value = 1;
		for (int j = 0; j <= i; ++j) {
			std::cout << value << " ";

			// ��������� ��������� ������� �� �������
			value = value * (i - j) / (j + 1);
		}
		std::cout << std::endl;
	}

}