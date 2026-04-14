#include <iostream>
#include <string>
using namespace std;

int main() {
    char op;
    double a, b; // Changed to double to see fractions/decimals

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;
  if (a == 0 || b == 0) {
        cout << "One of the values is zero. Exiting..." << endl;
        return 0; 
    }
    cout << "Enter operator (x or /): ";
    cin >> op;

    // Fixed: Added parentheses and used || for "or"
  

    switch(op) {
        case 'x': // Single quotes for char
            cout << "Result: " << a * b << endl;
            break;
        case '/': // Changed 'divide' to '/' to fit in a char
            cout << "Result: " << a / b << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}