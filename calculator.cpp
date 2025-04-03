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
    if(y==0){
        cout << endl << "Error: Attempted Divising by 0" << endl;
        return 0;} 
    return x / y; 
}

double factorial(double x) { 
    if(x<0){
        cout << endl << "Error: factorial of a negative number does not exist" << endl;
        return -1;} 

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
    
    return GCD(y, fmod(x,y));
}

double LCM(double x, double y) {
    return (x / GCD(x, y)) * y;
}

double random(double x, double y){ // range is x-y 
    if(x>y) swap(x,y);
    srand (time(NULL));
    double number= rand() % static_cast<int>(y) +x;
    return number;
} 

double inputNumber(){
    double x;
    cout << endl << "Enter a number: ";
    cin >> x;
    return x;
}

void menu(){
    int choice;
    double a=0;
    double b=0;
    do{
    cout << endl << "----------------" << endl << "Choose one of the following operations: " << endl;
    cout << "1. Addition" << endl << "2. Subtraction" << endl << "3. Multiplication" << endl << "4. Division" << endl << "5. Factorial" << endl;
    cout << "6. GCD" << endl << "7. LCM" << endl << "8.Random (input 2 numbers to determine the range)" << endl << endl << "0. End Program" << endl << "Enter your choice: ";

cin >> choice;
switch (choice) {
  case 1:
    a = inputNumber();
    b = inputNumber();
    cout << endl << a << " + " << b << " = " << addition(a,b) << endl;
    break;
  case 2:
    a = inputNumber();
    b = inputNumber();
    cout << endl << a << " - " << b << " = " << subtraction(a,b) << endl;
    break;
  case 3:
    a = inputNumber();
    b = inputNumber();
    cout << endl << a << " * " << b << " = " << multiplication(a,b) << endl;
    break;
  case 4:
  a = inputNumber();
    b = inputNumber();
    cout << endl << a << " / " << b << " = " << division(a,b) << endl;
    break;
  case 5:
    a = inputNumber();
    cout << endl << a << "! " << " = " << factorial(a) << endl;
    break;
  case 6:
    a = inputNumber();
    b = inputNumber();
    cout << endl << "The GCD between " << a << " and " << b << " is " << GCD(a,b) << endl;
    break;
  case 7:
    a = inputNumber();
    b = inputNumber();
    cout << endl << "The LCM between " << a << " and " << b << " is " << LCM(a,b) << endl;
    break;
   case 8:
    a = inputNumber();
    b = inputNumber();
    cout << endl << "A random number between " << a << " and " << b << " is " << random(a,b) << endl;
    break; 
    case 9:
    break;}} while(choice!=0);


}
