#include "Calculator.h"
#include <iostream>
#include <cmath>

using namespace std;

void Calculator::run() {
    char operation;

    cout << "Enter an operation (+, -, *, /, s for square root, p for power): ";
    cin >> operation;

    switch (operation) {
        case '+':
            performAddition();
            break;
        case '-':
            performSubtraction();
            break;
        case '*':
            performMultiplication();
            break;
        case '/':
            performDivision();
            break;
        case 's':
            performSquareRoot();
            break;
        case 'p':
            performExponentiation();
            break;
        default:
            cout << "Error: Invalid operation!" << endl;
    }
}

void Calculator::performAddition() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    double result = num1 + num2;
    cout << "Result: " << result << endl;
}

void Calculator::performSubtraction() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    double result = num1 - num2;
    cout << "Result: " << result << endl;
}

void Calculator::performMultiplication() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    double result = num1 * num2;
    cout << "Result: " << result << endl;
}

void Calculator::performDivision() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num2 != 0) {
        double result = num1 / num2;
        cout << "Result: " << result << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

void Calculator::performSquareRoot() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num >= 0) {
        double result = sqrt(num);
        cout << "Result: " << result << endl;
    } else {
        cout << "Error: Invalid input!" << endl;
    }
}

void Calculator::performExponentiation() {
    double base, exponent;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    double result = pow(base, exponent);
    cout << "Result: " << result << endl;
}
