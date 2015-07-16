#include <iostream>

#define INCHES_PER_FEET 12

int main() {
  
  int height, feets, inches;
  
  std::cout << "Please input your height in inches: ";
  std::cin >> height;
  
  feets = height/INCHES_PER_FEET;
  inches = height%INCHES_PER_FEET;
  
  std::cout << std::endl << "Your height is: " << feets << " feets and " << inches << " inches." << std::endl;
    
	return 0;
}
