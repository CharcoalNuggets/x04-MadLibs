//Authors: 
#include <iostream>
#include <string>

int main()
{
  int number;
  std::cout << "Give me a whole number" << std::endl;
  std::cin >> number;

  std::string name1;
  std::cout << "What is a name of a person?" << std::endl;
  std::cin >> name1;
  
  std::string name2;
  std::cout << "Give me another name." << std::endl;
  std::cin >> name2;

  double decimal;
  std::cout << "Now I need a decimal number." << std::endl;
  std::cin >> decimal;

  std::cout << "Once upon a time there were " << number << " friends who decided to go to lunch. " << name1 << " told " << name2 << " that he could eat " << decimal << " cows. He was then kicked out of the friend group for being weird." << std::endl;
  return 0;
}
