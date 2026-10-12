/*
Program: Sum of First 50 Natural Numbers
Name: Muhammad Baqar Raza
Registration Number: L1F25BSCS0394
Assignment: Assignment 01
*/
#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    for (int i = 1; i <= 50; i++) {
        sum = sum + i;
    }
    cout << "Sum of first 50 natural numbers : " << sum << endl;
    return 0;
}
