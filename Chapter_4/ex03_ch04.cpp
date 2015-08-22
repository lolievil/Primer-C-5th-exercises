#include <iostream>
#include <cstring>

int main() {

  std::string first_name, last_name, full_name;
  
  std::cout << "Enter your first name:\n";
  std::getline(std::cin, first_name);
  std::cout << "Enter your last name:\n";
  std::getline(std::cin, last_name);
  
  full_name = last_name + ", " + first_name;
  
  std::cout << "\nBased on all the information obtained from you \nI can say you are: " << full_name << ".\n";
  
return 0;
}
