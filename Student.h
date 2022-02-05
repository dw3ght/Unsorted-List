#ifndef STUDENT_H 
#define STUDENT_H 
#include <iostream>
using namespace std;

class Student
{
public:
    
    //Default constructor
    Student();
//constructor with parameters : name&studentID
Student(int studentIDVar, string studentNameVar);
//setter and getters
void setID(int studentIDVar);
// Function: setID sets/initializes the student object ID
void setName(string studentNameVar);
// Function: setName sets/initializes the student object name
int getID() const;
// Function: getID returns the student object ID
string getName() const;
// Function: getName returns the student object name


//operator to compare students on id, true if both ids are same
bool operator == (const Student &s2)
{
return studentID == s2.studentID;
}
//operator < to check if the id of this object is less than s2.id
bool operator < (const Student &s2)
{
return studentID < s2.studentID;
}

//operator > to check if the id of this object is greater than s2.id
bool operator > (const Student &s2)
{
return studentID > s2.studentID;
}

friend std::ostream& operator <<(std::ostream &out, const Student &s)
{
out << s.getID() << "\t" << s.getName();
return out;
}

    
private:
int studentID;
string studentName;

};

#endif
