// Author: Nadhirah Michael-Ho
// CECS 325-02 Prog 0
// Due: 01/30/2025
// 
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include <iostream> // library for cin, cout
#include <string>
using namespace std; // allows shortcuts

// Fibo function
int fibo(int n) { // functions must be declared before use
    if (n == 1 || n == 0)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2); // recursion
}

int main() {
    string name;
    int number;
    
    cout << "What is your name?";
    cin >> name;
    cout << "What is your favorite number?";
    cin >> number;

    if (number % 2 == 0)
        cout << "Your number is even" << endl;
    else
        cout << "Your number is odd" << endl;

    cout << "Welcome to class " << name << endl;

    for (int i = 0; i <= 20; i++)
        cout << i << ": " << fibo(i) << endl;

    return 0;
}

