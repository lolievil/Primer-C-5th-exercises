#include <iostream>
#include <string>

struct CandyBar {
  std::string brand_name;
  double weight;
  uint32_t calories;    
};

int main() {

  CandyBar snacks[3] {{"Love", 3.1, 400}, {"Surpe", 8.2, 450}, {"Lollipop", 15.2, 700}};
  
  std::cout << "This snacks are for some cute lolis:\n\n";
  std::cout << "Brand: " << snacks[0].brand_name << "\nWeight: " << snacks[0].weight << "\nCalories: " << snacks[0].calories << std::endl << std::endl;
  std::cout << "Brand: " << snacks[1].brand_name << "\nWeight: " << snacks[1].weight << "\nCalories: " << snacks[1].calories << std::endl << std::endl;
  std::cout << "Brand: " << snacks[2].brand_name << "\nWeight: " << snacks[2].weight << "\nCalories: " << snacks[2].calories << std::endl;
  
return 0;
}
