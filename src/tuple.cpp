#include <iostream>
#include <tuple>
#include <string>

int main() {
    // 🔹 Create tuple
    std::tuple<int, std::string, double> t = std::make_tuple(1, "hello", 3.5);

    // 🔹 Access values
    std::cout << "Original values:" << std::endl;
    std::cout << std::get<0>(t) << std::endl;
    std::cout << std::get<1>(t) << std::endl;
    std::cout << std::get<2>(t) << std::endl;

    // 🔹 Modify values
    std::get<0>(t) = 10;
    std::get<1>(t) = "hi";
    std::get<2>(t) = 9.9;

    // 🔹 Access after modification
    std::cout << "After modification:" << std::endl;
    std::cout << std::get<0>(t) << std::endl;
    std::cout << std::get<1>(t) << std::endl;
    std::cout << std::get<2>(t) << std::endl;

    return 0;
}