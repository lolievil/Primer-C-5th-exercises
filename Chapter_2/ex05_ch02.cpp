#include <iostream>

double CtoF (double);

int main() {
	double celsius, fahrenheit;
	
	std::cout << std::endl << "Please enter a Celsius value nigger: ";
	std::cin >> celsius;
	fahrenheit = CtoF( celsius );
	std::cout << std::endl << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << std::endl;
	return 0;
}

double CtoF ( double C) {
	return (1.8	* C ) + 32;
}
