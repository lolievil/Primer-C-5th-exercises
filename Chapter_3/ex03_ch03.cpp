#include <iostream>

#define MINUTES_ARC 60
#define MINUTES_PER_SECOND_ARC 3600

int main() {
  
  int degrees, minutes, seconds;
  double decimal_part;
  
	std::cout << "Enter a latitude in minutes, degree, seconds: ";
  std::cout << std::endl << "First, enter the degrees: ";
  std::cin >> degrees;  
  std::cout << "Next, enter the minutes of arc: ";
  std::cin >> minutes;
  std::cout << "Finally, enter the seconds of arc: ";
  std::cin >> seconds;
  
  decimal_part =  ((((double)minutes * MINUTES_ARC) + (double)seconds ) / MINUTES_PER_SECOND_ARC)+(double)degrees;
  
  std::cout << std::endl << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << decimal_part << " degrees";
    
	return 0;
}
