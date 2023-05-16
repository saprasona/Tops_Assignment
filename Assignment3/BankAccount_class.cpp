#include <iostream>
#include <string.h>
using namespace std;
class BankAccount
{
public:
    string name;
    int accountNumber;
    string accountType;
    double balance;
    void assignValues() 
    {
        cout << "Enter name of the depositor: ";
        cin >> name;

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account type: ";
        cin >> accountType;

        cout << "Enter balance amount: ";
        cin >> balance;
    }
    void deposit(double amount) 
    {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }
    void withdraw(double amount) 
    {
        if (balance >= amount) 
        {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } 
        else 
        {
            cout << "Insufficient balance. Withdrawal cancelled." << endl;
        }
    }
    void display() 
    {
        cout << "Depositor name: " << name << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Account type: " << accountType << endl;
        cout << "Account balance: " << balance << endl;
    }
};
int main() 
{
    BankAccount myAccount;
    myAccount.assignValues();

    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;
    myAccount.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    myAccount.withdraw(amount);

    myAccount.display();

    return 0;
}
