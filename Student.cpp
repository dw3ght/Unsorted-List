#include <iostream>
using namespace std;
#include "Student.h"

//Default constructor
Student::Student()
{
studentID = 0;
studentName = "";
}
//constructor with parameters
Student::Student(int studentIDVar, string studentNameVar)
{
studentID = studentIDVar;
studentName = studentNameVar;
}
//setter and getters
void Student::setID(int studentIDVar)
{
studentID = studentIDVar;
}
// Function: setID sets/initializes the student object ID
void Student::setName(string studentNameVar)
{
studentName = studentNameVar;
}

// Function: getID returns the student object ID
int Student::getID() const
{
return studentID;
}

// Function: getName returns the student object name
string Student::getName() const
{
return studentName;
}
