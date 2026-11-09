#include <iostream>

int main() {
    int* a = new int[3]{10, 20, 30};
    int total = 0;
    for (int i = 0; i <= 3; i++) {   // bug: reads a[3], which doesn't exist
        total += a[i];
    }
    std::cout << total << "\n";
    delete[] a;
    return 0;
}