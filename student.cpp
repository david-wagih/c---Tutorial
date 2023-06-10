#include "student.h"

Student::Student()
{
    name = "John Doe";
    age = 0;
}

// this is a copy constructor (it copies the values of the object passed to it)
// this is a deep copy
// if there is a reference and temp object you should use const
Student::Student(const Student &s)
{
    name = s.name;
    age = s.age;
}
