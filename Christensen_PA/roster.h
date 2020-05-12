#pragma once

#include <iostream>
#include <string>

using namespace std;

#include "Degree.h"
#include "Student.h"

class Roster {
private:
    int index;
    int numStudents;
    Student** classRosterArray; // array of pointers of student objects

public:
    Roster();
    Roster(int numStudents);
    
    //Student* getStudentAt(int index);
    string getStudentAt(int index);
    void parseData(string data);
    void add(string studentID, string firstName, string lastName,
        string emailAddress, int age, int daysInCourse1,
        int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);

    ~Roster(); // deconstructor
};
