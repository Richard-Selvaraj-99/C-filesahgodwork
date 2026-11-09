#include <iostream>
using namespace std;

// 🔹 Pass by VALUE (copy)
void changeValue(int x) {
    x = 100;
    cout << "Inside changeValue (copy): " << x << endl;
}

// 🔹 Pass by REFERENCE
void changeReference(int &x) {
    x = 200;
    cout << "Inside changeReference: " << x << endl;
}

int main() {
    int a = 10;

    cout << "Original a: " << a << endl;

    // 🔸 Pass by value
    changeValue(a);
    cout << "After changeValue: " << a << endl;

    cout << "------------------" << endl;

    // 🔸 Pass by reference
    changeReference(a);
    cout << "After changeReference: " << a << endl;

    cout << "------------------" << endl;

    // 🔸 Scope example
    if (true) {
        int b = 50;  // local to this block
        cout << "Inside block, b: " << b << endl;
    }

    // cout << b; ❌ ERROR (out of scope)

    return 0;
}