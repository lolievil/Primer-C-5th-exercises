#include <iostream>
#include <string>

struct CandyBar {
  std::string brand_name;
  double weight;
  uint32_t calories;    
};

int main() {

  CandyBar snack {"Mocha Munch", 2.3, 350};
  
  std::cout << "This snack is for a cute loli:\n";
  std::cout << "Brand: " << snack.brand_name << "\nWeight: " << snack.weight << "\nCalories: " << snack.calories;
  
return 0;
}
