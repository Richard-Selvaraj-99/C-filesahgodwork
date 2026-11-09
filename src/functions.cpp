#include<iostream>

void alpha(){
    std::cout << "whats up" << std::endl;
}

int add(int a,int b){
    return a + b;
}

int main(){
    alpha();

    int x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;

    int result = add(x, y);

    std::cout << result << std::endl;

    return 0;
}