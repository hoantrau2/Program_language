#include "log.h"
#include <iostream>

void initlog() { log("initial log"); }
void log(const char *message) { std::cout << message << std::endl; }