#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int &b = a;//this makes a to refer b values 
    b = 20;
    cout<<a<<" "<<b<<endl;
}