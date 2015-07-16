#include <iostream>

int main() {
  
  long long world_population;
  long country_population;
  float percent;
      
	std::cout << "Enter the world loli population: ";
  std::cin >> world_population;
  std::cout << "Enter the country loli population: ";
  std::cin >> country_population;
  
  percent = ((float)country_population*100) / (float)world_population;
  
  std::cout << "The country population is " << percent << "% of the world population.";
    
	return 0;
}
