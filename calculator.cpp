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
        return -1;} 
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
    cout << "6. GCD" << endl << "7. LCM" << endl << "8.Random (input 2 numbers to determine the range)" << endl << "9. Enter an expression" << endl << endl << "0. End Program" << endl << "Enter your choice: ";

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
    string input;
    cout << "Enter an arithmetic expression: ";
    cin >> input;
    double result = parsing(input); 
    cout << endl << "Result is " << result << endl;
    
    break;}} while(choice!=0);

}


int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double parsing(string input) {

    stack<char> operators;
    queue<string> output;
    string current_number;

    for (int i = 0; i < input.length(); ++i) {
        if (isdigit(input[i])) {
            current_number += input[i];
        } else if (input[i] == ' ') {
            if (!current_number.empty()) {
                output.push(current_number);
                current_number = "";
            }
        } else if (input[i] == '(') {
            operators.push(input[i]);
        } else if (input[i] == ')') {
            if (!current_number.empty()) {
                output.push(current_number);
                current_number = "";
            }
            while (!operators.empty() && operators.top() != '(') {
                string op(1, operators.top());
                output.push(op);
                operators.pop();
            }
            if (operators.empty()) {
                cout << endl << "Error: Mismatched parentheses." << endl;
                return -1.0;
            }
            operators.pop(); // Pop the '('
        } else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
            if (!current_number.empty()) {
                output.push(current_number);
                current_number = "";
            }
            while (!operators.empty() && precedence(operators.top()) >= precedence(input[i])) {
                string op(1, operators.top());
                output.push(op);
                operators.pop();
            }
            operators.push(input[i]);
        } else {
            cout << endl << "Error: Invalid character '" << input[i] << "' in input." << endl;
            return -1.0;
        }
    }

    if (!current_number.empty()) {
        output.push(current_number);
    }

    while (!operators.empty()) {
        if (operators.top() == '(') {
            cout << endl << "Error: Mismatched parentheses." << endl;
            return -1.0;
        }
        string op(1, operators.top());
        output.push(op);
        operators.pop();
    }

    ////// postfix evaluation
    stack<double> evaluation_stack;
    while (!output.empty()) {
        string token = output.front();
        output.pop();

        if (isdigit(token[0]) || (token.length() > 1 && isdigit(token[1]))) {
            try {
                evaluation_stack.push(stod(token));
            } catch (const invalid_argument& e) {
                cout << endl << "Error: Invalid number." << endl;
                return -1.0;
            } catch (const out_of_range& e) {
                cout << endl << "Error: Number out of range." << endl;
                return -1.0;
            }
        } else if (token.length() == 1) {
            char op = token[0];
            if (evaluation_stack.size() < 2) {
                cout << endl << "Error: Not enough operands for operator '" << op << "'." << endl;
                return -1.0;
            }
            double operand2 = evaluation_stack.top();
            evaluation_stack.pop();
            double operand1 = evaluation_stack.top();
            evaluation_stack.pop();
            double result;
            switch (op) {
                case '+': result = operand1 + operand2; 
                break;
                case '-': result = operand1 - operand2; 
                break;
                case '*': result = operand1 * operand2; 
                break;
                case '/':
                    if (operand2 == 0) {
                        cout << endl << "Error: Division by zero." << endl;
                        return -1.0;
                    }
                    result = operand1 / operand2;
                    break;
                default:
                    cout << endl << "Error: Invalid operator in output: '" << op << "'." << endl;
                    return -1.0;
            }
            evaluation_stack.push(result);
        } else {
            cout << endl << "Error: Invalid token in output: '" << token << "'." << endl;
            return -1.0;
        }
    }

    if (evaluation_stack.size() != 1) {
        cout << endl << "Error: Invalid expression - too many operands or operators." << endl;
        return -1.0;
    }

    return evaluation_stack.top();
}

