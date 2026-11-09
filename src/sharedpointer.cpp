#include <memory>
#include<iostream>
using namespace std;

int main() {
    shared_ptr<int> p1 = make_shared<int>(10);
    shared_ptr<int> p2 = p1;

    cout << p2 << endl;
    cout << *p2 << endl;
}