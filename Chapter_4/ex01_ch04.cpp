#include <iostream>
#include <string>

int main() {
  
  int age;
  std::string first_name, last_name;
  char grade;
  
	std::cout << "Fucking lolicunt tell me your first name: ";
  std::getline(std::cin,first_name);
  std::cout << "You better not be lying, now tell me your last name: ";
  std::cin >> last_name;
  std::cout << "Good loli, tell me the grade you deserve: ";
  std::cin >> grade;
  std::cout << "Lets ensure you are a real loli, tell me your age: ";
  std::cin >> age;
  
  std::cout << std::endl << "Name: " << last_name << ", \"loli\" " << first_name << std::endl;
  std::cout << "Grade: " << (char)((int)grade+1) << std::endl;
  std::cout << "Age: " << age << std::endl;
    
	return 0;
}
