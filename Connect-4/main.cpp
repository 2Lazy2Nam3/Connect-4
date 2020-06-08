#include <iostream>

int main(int argc, char* argv[]) {
	std::cout << "______________________\n";
	for (int i = 0; i < 6; ++i) {
		std::cout << "|";
		for (int n = 0; n < 7; ++n) {
			std::cout << "__|";
		}
		std::cout << "\n";
	}
}