// C++ Header Files
#include "log_test.h"
#include <iostream>
int main() {
  initlog();
  log("hello world");
  return 0;
}

// g++ -o first_code first_code.cpp log_test.cpp
//./first_code

// g++ -c -o first_code.o first_code.cpp   tao file .o ma chua lien ket ngay lap
// tuc g++ -c -o log_test.o log_test.cpp g++ -o first_code first_code.o
// log_test.o  lien ket cac file .o lai voi nhau
//./first_code