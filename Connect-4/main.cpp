#include <iostream>

int main(int argc, char* argv[]) {
	std::cout << "-----------------------------\n";
	for (int i = 0; i < 6; ++i) {
		std::cout << "|";
		for (int j = 0; j < 7; ++j) {
			if (j % 2 == 0)
				std::cout << " X ";
			else
				std::cout << " O ";
			std::cout << "|";
		}
		std::cout << "\n-----------------------------\n";
	}
}