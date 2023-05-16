/*Create a class person having members name and age. Derive a class student having member percentage.Derive another class teacher having member salary.
Write necessary member function initialize,read and write data.Write also Main function(Multiple Inheritance)*/
#include <iostream>
using namespace std;

class Person 
{
protected:
    string name;
    int age;

public:
    void initialize() 
    {
        cout << "Enter name= ";
        cin >> name;
        cout << "Enter age= ";
        cin >> age;
    }

    void readData() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
private:
    float percentage;

public:
    void initialize() 
    {
        Person::initialize();
        cout << "Enter percentage= ";
        cin >> percentage;
    }

    void readData() 
    {
        Person::readData();
        cout << "Percentage= " << percentage <<endl;
    }
};

class Teacher : public Person 
{
private:
    float salary;

public:
    void initialize() 
    {
        Person::initialize();
        cout << "Enter salary= ";
        cin >> salary;
    }

    void readData() 
    {
        Person::readData();
        cout << "Salary= " << salary << endl;
    }
};

int main() 
{
    Student student;
    Teacher teacher;

    cout << "Enter student details:-"<<endl;
    student.initialize();

    cout << "Enter teacher details:-"<<endl;
    teacher.initialize();

    cout << "Student details:-"<<endl;
    student.readData();

    cout << "Teacher details:-"<<endl;
    teacher.readData();

    return 0;
}
