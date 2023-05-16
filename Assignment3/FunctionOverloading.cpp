//WAP to mathematic operation like Addition,Substraction,Multiplication,Division of two number using diffferent parameters and Function Overloading//
#include <iostream>
using namespace std;

int Operation(int a, int b, char operation) {
    switch (operation) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            cout << "Invalid operation!" << endl;
            return 0;
    }
}

float Operation(float a, float b, char operation) {
    switch (operation) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            cout << "Invalid operation!" << endl;
            return 0.0;
    }
}

int main() {
    int num1, num2;
    float floatNum1, floatNum2;
    char operation;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Result: " << Operation(num1, num2, operation) << endl;

    cout << "\nEnter two floats: ";
    cin >> floatNum1 >> floatNum2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Result: " << Operation(floatNum1, floatNum2, operation) << endl;

    return 0;
}
