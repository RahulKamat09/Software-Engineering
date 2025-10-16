/*#include<iostream>
using namespace std;
class student
{
public:
    int roll_no;
    string name;
    string city;

    student()
    {
        cout<<"Default Constructor"<<endl;
    }
};
int main()
{
    student s1,s2;
    return 0;
}*/


#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    // Parameterized Constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1("Rahul", 19);
    Student s2("Amit", 20);
    s1.display();
    s2.display();
    return 0;
}

