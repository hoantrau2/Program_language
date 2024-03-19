//Variables in C++
#include <iostream>

int main() {
  short a = 'A';
  char aa = 'A';
  std::cout << a << std::endl;
  std::cout << aa << std::endl;
  std::cout << "bool type is 1 byte" << std::endl;
  std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;
  std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
  std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
  std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
  std::cout << "Size of long long : " << sizeof(long long) << " bytes"
            << std::endl;
  // declaring variables with type char, the default is character, other types
  // are numbers
  //  bool type is 1 byte in size
  return 0;
}