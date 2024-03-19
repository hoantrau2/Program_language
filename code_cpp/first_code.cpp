// Functions in C++
// when getting to classes, functions that is called blocks before called
// methods. funtions are not part of a class
#include <iostream>

int multiply(int a, int b) { return a * b; }
void multiplyAndlog(int a, int b) {
  int result = multiply(a, b);
  std::cout << result << std::endl;
}
int main() {

  multiplyAndlog(2, 3);
  multiplyAndlog(56, 78);
  return 0;
}