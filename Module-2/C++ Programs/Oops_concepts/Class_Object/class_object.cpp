/*🧩 1. What is a Class?
Definition:

A class is a blueprint or template for creating objects.
It defines what data (variables) and what actions (functions) an object will have.

✅ Class = User-defined data type that represents a concept (like Student, Car, Account).


💬 Real-Life Example

Think of a class like a house blueprint:

The blueprint describes structure (rooms, doors, windows).

But it’s not a house itself.

When you build a house using that blueprint → that’s an object.


class ClassName {
    // Access specifiers
public:
    // Data members (variables)
    // Member functions (methods)
};

🎯 2. What is an Object?
Definition:

An object is an instance of a class.
It is a real-world entity created from the class blueprint.

✅ Object = Actual copy of class with memory allocated for its data members.

💬 Real-Life Example

Class: Car

Objects: car1, car2
Each car has its own color, speed, brand, etc.

ClassName objectName;
ClassName obj1, obj2, obj3;*/


#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    // Creating objects of Student class
    Student s1, s2;

    // Assigning values to object members
    s1.name = "Rahul";
    s1.age = 19;

    s2.name = "Amit";
    s2.age = 20;

    // Calling member function
    s1.display();
    s2.display();

    return 0;
}






