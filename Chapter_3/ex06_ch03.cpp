#include <iostream>

int main() {
 
  double gallons_per_mile, gallons, miles;
      
	std::cout << "Enter the consumed gas gallons: ";
  std::cin >> gallons;
  std::cout << "Enter the distance traveled: ";
  std::cin >> miles;
  
  gallons_per_mile = miles / gallons;
  
  std::cout << "Your spaceship consumes " << gallons_per_mile << " gallons per mile.";
    
	return 0;
}
