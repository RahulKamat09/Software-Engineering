/*~. Types of Constructors in C++

(1) Default Constructor

A constructor with no parameters.
If you don’t define one, the compiler creates a default constructor automatically.

Example:

class Car {
public:
    Car() {
        cout << "Default Constructor called!" << endl;
    }
}; */

#include<iostream>
using namespace std;
class student
{
public:

    student()
    {
        cout<<"Default Constructor Called!!"<<endl;
    }
};

int main()
{
    student s1;
    return 0;
}
