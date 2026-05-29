#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> dict;

    // 🔹 Insert
    dict["apple"] = 10;
    dict["banana"] = 20;

    // 🔹 Access
    cout << dict["apple"] << endl;

    // 🔹 Modify
    dict["apple"] = 50;

    // 🔹 Delete
    dict.erase("banana");

    // 🔹 Loop
   for (auto [key, value] : dict) {
    cout << key << " : " << value << endl;
}

    return 0;
}  