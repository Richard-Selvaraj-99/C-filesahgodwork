#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5};

    arr.push_back(6); //for static we use array<int,5> static = your digits within 5
    arr[0] = 7;
    arr.insert(arr.begin() + 2, 22);
    //arr.erase(arr.begin() + arr.size() - 1); // im a genius for this one 

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " "<<endl;
    }
    for (int x : arr) {//range here 
    cout << x;
}


    return 0;
}