#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <string>

using namespace std;

#include "degree.h"

class Roster {
    public:
        void add(string studentID, string firstName, string lastName, 
            string emailAddress, int age, int daysInCourse1, 
            int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram); 
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();
        // Roster();

    private:
        string studentID = " ";
        string firstName = " ";
        string lastName = " ";
        string emailAddress = " ";
        int age = 0;
        int daysInCourse1 = 0;
        int daysInCourse2 = 0;
        int daysInCourse3 = 0;
};

// Roster::Roster(){
//     // starting data given from rubric
//     const string STUDENT_DATA[] = {
//         "A1, John, Smith, John1989@gma il.com, 20, 30, 35, 40, SECURITY", 
//         "A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK", 
//         "A3, Jack,Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE", 
//         "A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY", 
//         "A5, Steven, Christensen, schr206@wgu.edu, 2, 5, 10, 15, SOFTWARE"
//     };

// }

#endif