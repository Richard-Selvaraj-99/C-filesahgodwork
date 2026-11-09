#include <iostream>

int sum(int* arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int data[3] = {10, 20, 30};
    int result = sum(data, 3);
    std::cout << "Result: " << result << "\n";
    return 0;
}