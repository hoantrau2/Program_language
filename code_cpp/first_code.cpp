// C++ Header Files
#include "../header_file/log.h"
#include <iostream>
int main() {
  initlog();
  log("hello world");
  return 0;
}

// g++ -o first_code first_code.cpp ../src_file/log.cpp -I../src_file
//./first_code

// g++ -o first_code first_code.cpp ../src_file/log.cpp
//.first_code
