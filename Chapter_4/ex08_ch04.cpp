#include <iostream>
#include <string>

struct Generic_Pizza {
  std::string brand_name;
  double diameter;
  double weight;    
};

int main() {

  Generic_Pizza *input_pizza = new Generic_Pizza;
  
  std::cout << "This pizza is for loli:\nEnter pizza diameter: ";
  std::cin >> input_pizza->diameter;
  std::cin.get();
  std::cout << "Enter pizza company: ";
  std::getline(std::cin, input_pizza->brand_name);
  std::cout << "Enter pizza weight: ";
  std::cin >> input_pizza->weight;
  
  std::cout << "\nInformation:\nCompany: " << input_pizza->brand_name << "\nDiameter: " << input_pizza->diameter
    << "\nWeight: " << input_pizza->weight;
  
  delete input_pizza;
  
return 0;
}
