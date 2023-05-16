//WAP of Addition,Substract,Division,Multiplication using constructor//
#include <iostream>

using namespace std;

class Calculator 
{
private:
    int num1, num2;

public:
    Calculator(int a, int b) 
    {
        num1 = a;
        num2 = b;
    }

    int add() 
    {
        return num1 + num2;
    }

    int subtract() 
    {
        return num1 - num2;
    }

    int multiply() {
        return num1 * num2;
    }

    float divide() 
    {
        if (num2 != 0) 
        {
            return static_cast<float>(num1) / num2;
        } else 
        {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0.0f;
        }
    }
};

int main()
 {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Calculator calc(a, b);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}
