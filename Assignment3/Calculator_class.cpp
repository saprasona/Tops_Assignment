#include <iostream>
using namespace std;

class Calculator 
{
        double num1, num2;
    public:
        Calculator() 
        {
            num1 = 0.0;
            num2 = 0.0;
        }
        void getValues() 
        {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }
        void add() 
        {
            cout << "Result of addition: " << num1 + num2 << endl;
        }
        void subtract() 
        {
            cout << "Result of subtraction: " << num1 - num2 << endl;
        }
        void multiply() 
        {
            cout << "Result of multiplication: " << num1 * num2 << endl;
        }
        void divide() {
            if (num2 == 0) 
            {
                cout << "Cannot divide by zero." << endl;
            } 
            else 
            {
                cout << "Result of division: " << num1 / num2 << endl;
            }
        }
};

int main() 
{
    Calculator calc;

    // Get input from user
    calc.getValues();

    // Perform operations
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();

    return 0;
}
