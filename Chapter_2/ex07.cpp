#include <iostream>

int main() {
	uint32_t hour, minute;
	std::cout << std::endl << "Enter hours: ";
	std::cin >> hour;
	std::cout << "Enter minutes: ";
	std::cin >> minute;
	std::cout << "Time: "<< hour << ":" << minute;
	return 0;
}
