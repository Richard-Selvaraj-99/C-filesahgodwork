#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int cookies;
    int people;

    cout << "Enter number of cookies: ";
    cin >> cookies;

    cout << "Enter number of people: ";
    cin >> people;

    int perPerson = cookies / people;
    int leftOver = cookies % people;
    int multiply = cookies * people;
    int add = cookies + people;
    double power = pow(cookies, people);
    
    cout << "Each person gets: " << perPerson << " cookies." << endl;
    cout << "Cookies left in the jar: " << leftOver << endl;
    cout << "Multiplication (cookies * people): " << multiply << endl;
    cout << "Addition (cookies + people): " << add << endl;
    cout << "Power (cookies ^ people): " << power << endl;

    double exactCks = (double)cookies / people; 
    cout << "The exact amount is: " << exactCks << endl;

    return 0;
}