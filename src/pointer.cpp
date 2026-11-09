#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* p = &a;
    cout<<"this shows address"<<p<<endl ;
    cout<<"this shows value"<<*p<<endl;

    *p= 50;//this just changes the value but same address
    cout<<"this shows address its goint to be the same"<<p<<endl;
    cout<<"this changed value"<<*p;
    

    return 0;


}