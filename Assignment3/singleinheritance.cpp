/*Assume a class cricketer is declared.Declare class batsman from cricketer.Data member of batsman.Total runs,Average runs and best performance.
Member functions input data,calculate average runs,display data.(single inheritance)*/
#include <iostream>
using namespace std;

class Cricketer 
{
protected:
    string name;
    int age;

public:
    void inputData() 
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer 
{
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputData() 
    {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter average runs: ";
        cin >> averageRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() 
    {
    }

    void displayData() 
    {
        Cricketer::displayData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() 
{
    Batsman batsman;
    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}

