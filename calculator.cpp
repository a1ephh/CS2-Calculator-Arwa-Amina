#include "calculator.h"

double addition(double x, double y) {
    return x + y;
}

double subtraction(double x, double y) {
    return x - y;
}

double multiplication(double x, double y) {
    return x * y;
}

double division(double x, double y) {
    if(y==0){return 0;} // give an error
    return x / y; 
}

double factorial(double x) { 
    if(x<0){return -1;} // give an error

    if (x == 0 || x == 1) {
        return 1;
    }
    return x * (x - 1);
}

void swap(double &x, double &y) {
    double temp = x;
    x = y;
    y = temp;
    return;
}

double GCD(double x, double y) {
    if (y == 0) {
        return x;
    }
    return GCD(y, x%y);
}

double LCM(double x, double y) {
    return (x / GCD(x, y)) * y;
}

double Random(T x, T y){ // range is x-y 
    if(x>y) swap(x,y);
    srand (time(NULL));
    T number= rand() % y +x;
    return number;
} 
