#include <iostream>

int main() {
	uint32_t age, age_months;
	std::cout << std::endl << "Please enter your age: " ;
	std::cin >> age;
	age_months = age * 12;
	std::cout << "Your age in months is " << age_months << std::endl;
	
	return 0;
}
