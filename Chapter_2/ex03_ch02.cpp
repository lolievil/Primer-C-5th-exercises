#include <iostream>

void blind_mice (void);
void run_mice (void);

int main() {
	std::cout << std::endl;
	blind_mice();
	blind_mice();
	run_mice();
	run_mice();
	return 0;
}

void blind_mice (void) {
	std::cout << "Three blind mice" << std::endl;
}

void run_mice (void) {
	std::cout << "See how they run" << std::endl;
}
