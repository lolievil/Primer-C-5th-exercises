#include <iostream>

double LtA (double);

int main() {
	double lightY, astronomicalU;
	std::cout << std::endl << "Hey nigger enter your value in light years " << std::endl
		<< "and I'm so cool that I'll make them astronomical units: ";
	std::cin >> lightY;
	astronomicalU = LtA( lightY );
	std::cout << std::endl << "Look faggot your " << lightY << " light years are equal to " << 
		astronomicalU << " astronomical units.";
	return 0;
}

double LtA ( double L ) {
	return 4.2*63240 ;
}
