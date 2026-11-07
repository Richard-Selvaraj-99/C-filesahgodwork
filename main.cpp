#include <iostream>
#include "greet.h"
#include "calc.h"

int main() {
    greet();
    std::cout << "4 + 5 = " << add(4, 5) << "\n";
    std::cout << "4 * 5 = " << multiply(4, 5) << "\n";
    return 0;
}