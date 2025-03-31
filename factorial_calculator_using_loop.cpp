#include <iostream>
using namespace std;

// Function to calculate factorial using a loop
long long factorialLoop(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        long long fact = factorialLoop(num);
        cout << "The factorial of " << num << " is: " << fact << endl;
    }

    return 0;
}


