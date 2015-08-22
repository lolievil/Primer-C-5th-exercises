#include <iostream>
#include <array>

int main() {
  
  std::array<double, 3> alldata;
  
	std::cout << "Enter the 1st run: ";
  std::cin >> alldata[0];
  std::cout << "Enter the 2nd run: ";
  std::cin >> alldata[1];
  std::cout << "Enter the 3th run: ";
  std::cin >> alldata[2];
  std::cout << "\nThe times were: " << alldata[0] << ", " << alldata[1] << ", " << alldata[2] << ".\n";
  std::cout << "For an average: " << (alldata[0]+alldata[1]+alldata[2])/3 ;
  
	return 0;
}
