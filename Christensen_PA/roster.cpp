#include <string>
using namespace std;

class StudentManipulation {
    public:
        void add(string studentID, string firstName,string lastName, 
            string emailAddress, int age, int daysInCourse1, 
            int daysInCourse2, int daysInCourse3); 
        void remove(string studentID);
        void printAll();
        void printAverageDaysInCourse(string studentID);
        void printInvalidEmails();

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

void StudentManipulation::add(string studentID, string firstName, 
        string lastName, string emailAddress, int age, int daysInCourse1, 
        int daysInCourse2, int daysInCourse3) { //DegreeProgram degreeProgram

}

void StudentManipulation::remove(string studentID) {

}

void StudentManipulation::printAll() {

}

void StudentManipulation::printAverageDaysInCourse(string studentID) {

}

void StudentManipulation::printInvalidEmails() {
     
}