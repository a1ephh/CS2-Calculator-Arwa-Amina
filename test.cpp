
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "calculator.h"
#include <cmath>
#include <string>

using namespace std;

int main() {

    cout << "Welcome to the Calculator app." << endl;



    double a = 22.0, b = 3.5;

    cout << "Addition of a and b is: " << addition(a, b) << endl;
    cout << "Subtraction of a and b is: " << subtraction(a, b) << endl;
    cout << "Multiplication of a and b is: " << multiplication(a, b) << endl;
    cout << "Division of a and b is: " << division(a, b) << endl;
    cout << "Factorial of a is: " << factorial(a) << endl;
    cout << "Factorial of b is: " << factorial(b) << endl;
    cout << "GCD of a and b is: " << GCD(a, b) << endl;
    cout << "LCM of a and b is: " << LCM(a, b) << endl;

    double rand1 = random(1.0, 100.0);
    double rand2 = random(1.0, 100.0);
    cout << "Random number 1 is: " << rand1 << endl;
    cout << "Random number 2 is: " << rand2 << endl;

    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    cout << endl << "Evaluation of 3 + 4 * (2 - 1) / 5 is " << parsing("3 + 4 * (2 - 1) / 5") << endl;

    menu();
}
