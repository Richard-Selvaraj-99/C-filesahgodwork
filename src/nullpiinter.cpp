#include <iostream>
using namespace std;

int main() {
    // Stage 1: Point to nothing
    int* p = nullptr;

    // Stage 2: Point to a nameless value
    p = new int(50);
    cout << "Nameless value: " << *p << endl; // 50

    // Stage 3: Change that nameless value
    *p = 100;
    cout << "Changed nameless: " << *p << endl; // 100

    // Stage 4: Clean up and point to a regular variable
    delete p; 
    int myVar = 777;
    p = &myVar; 
    
    cout << "Now pointing to myVar: " << *p << endl; // 777

    return 0;
}