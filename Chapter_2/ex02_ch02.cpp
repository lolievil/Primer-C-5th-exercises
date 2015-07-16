#include <iostream>

int main() {
	uint32_t furlongs, yards;
	std::cout << std::endl << "Input furlongs: ";
	std::cin >> furlongs;
	yards = furlongs * 220;
	std::cout << "Yards are: " << yards << std::endl;
		
	return 0;
}
