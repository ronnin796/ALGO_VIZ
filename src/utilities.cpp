#include "utilities.h"
#include <cstdlib>
#include <iostream>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string WHITE = "\033[37m";

#ifdef _WIN32
void clearScreen() {
    system("cls");
}
#else
void clearScreen() {
    system("clear");
}
#endif
