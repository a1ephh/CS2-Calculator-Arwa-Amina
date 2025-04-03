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

double Division(double x, double y) {
    return x / y;
}

double Factorial(double x) {
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
    return GCD(y, fmod(x, y));
}

double LCM(double x, double y) {
    return (x / GCD(x, y)) * y;
}

double Random(double x, double y) {
    if (x > y) swap(x, y);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dist(x, y);
    return dist(gen);
}
