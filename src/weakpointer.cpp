#include <iostream>
#include <memory>
using namespace std;

int main() {
    shared_ptr<int> sp = make_shared<int>(10);
    weak_ptr<int> wp = sp;

    cout << "Shared count: " << sp.use_count() << endl;

    return 0;
}