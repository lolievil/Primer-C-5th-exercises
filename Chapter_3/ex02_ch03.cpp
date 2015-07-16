#include <iostream>

#define INCHES_PER_FEET 12
#define METER_PER_INCH 0.0254
#define KILOGRAMS_PER_POUNDS 2.2

int main() {
  
  int height, feets, inches, pounds;
  double meters, kilograms, BMI;
  
	std::cout << "Please input your height, first your feets: ";
  std::cin >> feets;
  std::cout << "now your inches: ";
  std::cin >> inches;
  std::cout << "Please input your weight in pounds: ";
  std::cin >> pounds;
  
  height = (INCHES_PER_FEET*feets) + inches;
  meters = METER_PER_INCH * height; 
  kilograms = pounds / KILOGRAMS_PER_POUNDS;
  BMI = kilograms / ( meters*meters );
    
  std::cout << std::endl << "Your BMI is: " << BMI << std::endl;
    
	return 0;
}
