#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
public:
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmailAddress(string email);
    void setAge(int age);
    void setDaysToComplete();
    void setDegreeProgram();
    void printAllStudentData();
    Student();

    string getStudentID() const;
    string getFirstName() const;
    string getLastName() const;
    string getEmailAddress() const;
    int getAge() const;
    int getDaysToComplete() const;
    string getDegreeProgram();

private:
    string studentID = " ";
    string firstName = " ";
    string lastName = " ";
    string emailAddress = " ";
    int age = 0;
    int daysToComplete[3] = {0, 0, 0};
    string degreeProgram = " ";
};

Student::Student(){
    studentID = "empty";
    firstName = "empty";
    lastName = "empty";
    emailAddress = "empty";
    int age = -1;
    int daysToComplete[3] = {-1, -1, -1};
    string degreeProgram = "empty";
}

#endif