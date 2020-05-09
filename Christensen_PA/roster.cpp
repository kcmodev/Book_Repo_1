#include <iostream>
#include <string>
using namespace std;

#include "roster.h"
#include "degree.h"

void Roster::add(string studentID, string firstName, 
        string lastName, string emailAddress, int age, int daysInCourse1, 
        int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) { 

        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->emailAddress = emailAddress;
        this->age = age;
        int daysToComplete[3] = {daysInCourse1, daysInCourse2, daysInCourse3};
        //string degreeProgram = assignDegree(degreeProgram);
}

void Roster::remove(string studentID) {

}

void Roster::printAll() {

}

void Roster::printAverageDaysInCourse(string studentID) {

}

void Roster::printInvalidEmails() {
     
}