#include <iostream>
#include <string>
using namespace std;

#include "student.h"

void Student::setStudentID(string studentID){
    this->studentID = studentID;
    cout << "holy shit did I actually do it? if so.. studentID = " << this->studentID << endl;
}
void Student::setFirstName(string firstName){
    this->firstName = firstName;
}
void Student::setLastName(string lastName){
    this->lastName = lastName;
}
void Student::setEmailAddress(string email){
    this ->emailAddress = email;
}
void Student::setAge(int age){
    this->age = age;
}
void Student::setDaysToComplete(){

}
void setDegreeProgram(){

}

string Student::getStudentID() const {

}
string Student::getFirstName() const {

}
string Student::getLastName() const {

}
string Student::getEmailAddress() const {

}
int Student::getAge() const {

}
int Student::getDaysToComplete() const {

}

string getDegreeProgram(){
    
}

void Student::printAllStudentData(){

}