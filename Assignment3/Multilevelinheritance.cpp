/*Assume that the test results of a batch of students are stored in three different classes. class students are storing the roll number.
class Test stores the marks obtained in two subjects and class results contains the total marks obtained in the test.
The class result can inherit the details of the marks obtained in the test and roll number of students.(Multilevel inheritance)*/
#include <iostream>
using namespace std;

class Students 
{
protected:
    int rollNumber;

public:
    void inputRollNumber() 
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }
};

class Test : public Students 
{
protected:
    float subject1Marks;
    float subject2Marks;

public:
    void inputMarks() 
    {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2Marks;
    }
};

class Results : public Test 
{
private:
    float totalMarks;

public:
    void calculateTotalMarks() 
    {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResults() 
    {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() 
{
    Results result;
    result.inputRollNumber();
    result.inputMarks();
    result.calculateTotalMarks();
    result.displayResults();

    return 0;
}
