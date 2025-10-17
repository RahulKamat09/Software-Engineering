/*
1. What is Constructor Overloading?
Definition:

Constructor overloading means having more than one constructor in a class —
but each constructor has a different number or type of parameters.

This allows you to create objects in different ways, depending on what data you have when creating them.

In short:
Multiple constructors — same name (class name), but different parameters.

Real-Life Example:

Think of creating a Student record:

Sometimes, you know only the name.

Sometimes, you know name and age.

Sometimes, you know name, age, and roll number.

Instead of writing multiple functions,
you use constructor overloading to handle all these cases easily.


2. Syntax of Constructor Overloading:
class ClassName {
public:
    ClassName();                     // Default constructor
    ClassName(int a);                // Parameterized constructor (1 argument)
    ClassName(int a, int b);         // Parameterized constructor (2 arguments)
};
*/

#include<iostream>
using namespace std;
class student
{
public:
 int rollno;
 string name;
 string city;

 student()
};
