#include <iostream>

#define KM_TO_MILES 62.14
#define LT_TO_GALLONS 3.875

int main() {
 
  double liter_kilometer, gallon_miles;
      
	std::cout << "Enter liters per kilometer: ";
  std::cin >> liter_kilometer;
  
  gallon_miles = KM_TO_MILES / (liter_kilometer / LT_TO_GALLONS) ;
  
  std::cout << "MPG are: " << gallon_miles;
    
	return 0;
}
