//Student.cpp
#include <sstream>
#include <string>
#include "Student.h"

using namespace std;

//constructor: initializes perm, lastName, and firstAndMiddleNames
Student::Student(int p, string lName, string fName) {
    perm = p;
    lastName = lName;
    firstAndMiddleNames = fName;
}

//returns the student's perm number
int Student::getPerm() {
    return perm;
}

//returns the student's last name
string Student::getLastName() {
    return lastName;
}

//returns the student's first and middle names
string Student::getFirstAndMiddleNames() {
    return firstAndMiddleNames;
}

//returns the student's full name (first/middle then last)
string Student::getFullName() {
    return firstAndMiddleNames + " " + lastName;
}

//THIS MEMBER FUNCTION IS DEFINED FOR YOU ALREADY - DO NOT CHANGE IT
string Student::toString() {
    //e.g. [12345,Smith,Malory Logan]
    ostringstream oss;
    oss << "["
        << getPerm() << ","
        << getLastName() << ","
        << getFirstAndMiddleNames() << "]";
    return oss.str();
}