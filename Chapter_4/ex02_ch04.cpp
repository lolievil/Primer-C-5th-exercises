#include <iostream>
#include <string>

int main() {

  const int ArSize = 20;
  std::string name;
  std::string dessert;

  std::cout << "Enter your name:\n";
  std::cin.getline(&name[0], ArSize); // reads through newline
  std::cout << "Enter your favorite dessert:\n";
  std::cin.getline(&dessert[0], ArSize);
  std::cout << "I have some delicious " << dessert;
  std::cout << " for you, " << name << ".\n";

return 0;
}

