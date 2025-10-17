/*
1. What is a Constructor in C++?:

Definition:
A constructor is a special member function of a class that is automatically called when an object is created.
Its main purpose is to initialize the data members of an object.

In short:

A constructor constructs (initializes) an object when it is created.

2. Key Points About Constructors:

| Feature        | Description                                              |
| -------------- | -------------------------------------------------------- |
| Function Name  | Same as class name                                       |
| Return Type    | No return type (not even `void`)                         |
| Automatic Call | Called automatically when object is created              |
| Access         | Usually declared as `public:`                            |
| Overloading    | Yes, constructors can be overloaded                      |
| Inheritance    | Not inherited by derived classes                         |
| Destructor     | Opposite of constructor; called when object is destroyed |


3. Syntax of a Constructor:

class ClassName {
public:
    ClassName() {
        // initialization code
    }
};
*/

#include<iostream>
using namespace std;
class student
{
public:
    int roll_no;
    string name;
    string city;

    student()
    {
        roll_no = 101;
        name="Rahul Kamat";
        city = "Ahmedabad";
        cout<<"Constructor Called"<<endl;
    }
};

int main()
{
    student s1;
    cout<<s1.name<<" - "<<s1.city<<" - "<<s1.roll_no<<endl;
    return 0;
}

/* Types Of Constructor:


There are three main types:

 1. Default Constructor
 2. Parameterized Constructor
