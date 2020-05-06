#include <string>
using namespace std;

class Student {
    public:
        void setStudentID();
        void setFirstName();
        void setLastName();
        void setEmailAddress();
        void setAge();
        void setDaysToComplete();
        //void setDegreeProgram();
        void printAllStudentData();

        string getStudentID() const;
        string getFirstName() const;
        string getLastName() const;
        string getEmailAddress() const;
        int getAge() const;
        int getDaysToComplete() const;
        //void getDegreeProgram();

    private:
        string studentID = " ";
        string firstName = " ";
        string lastName = " ";
        string emailAddress = " ";
        int age = 0;
        int daysToComplete[3] = {0,0,0};
        // string degreeProgram = " ";
};

Student::Student(){
    studentID = "empty";
    firstName = "empty";
    lastName = "empty";
    emailAddress = "empty";
    int age = -1;
    int daysToComplete[3] = {-1, -1, -1};
    // degreeProgram = "empty";
}