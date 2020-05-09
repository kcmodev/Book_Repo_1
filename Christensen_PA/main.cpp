//
//     Author: Steven Christensen
//     Date:
//     Class: WGU C867 Scripting and Programming Applications
//

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

#include "degree.h"
#include "roster.h"
#include "student.h"

int main()
{
    Roster classRoster;

    const string STUDENT_DATA[] = {
        "A1, John, Smith, John1989@gma il.com, 20, 30, 35, 40, SECURITY", 
        "A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK", 
        "A3, Jack,Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE", 
        "A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY", 
        "A5, Steven, Christensen, schr206@wgu.edu, 2, 5, 10, 15, SOFTWARE"
        };

    const int tableRows = 5; // rows of data in the table
    const int tableColumns = 6; // columns of data in the table
    const int tableMaxLength = 70; // max length of string in data table

    int columnCounter = 1; //counter to track place in row
    int letterCounter = 0;
    char studentData[tableRows][tableMaxLength]; // 70 is the longest line in the table
    Student *classRosterArray[tableRows];

    // iterates through each line of data table and inserts it into a 2d char array
    // called studentData
    for (int n = 0; n < tableRows; n++){
            strcpy(studentData[n], STUDENT_DATA[n].c_str());
    }

    cout << endl << "rows in student data table: " << tableRows << endl;

    cout << endl << "and now after:" << endl;

    // parsing the char array into a vector of pointers of new instances if the student class
    for (int i = 0; i < tableRows; i++)
    {
        cout << "entering main loop" << endl;
        string temp;

        cout << "# of chars in current line: " << STUDENT_DATA[i].length() << endl;
        for (int j = 0; j < tableMaxLength; j++){
            cout << "entering inner loop next char up is \"" << studentData[i][j] << "\"" << endl;

            if (studentData[i][j + 1] != NULL){ // char array row hasn't ended
                cout << "next char on this line is: " << studentData[i][j] << endl;

                if (columnCounter == 1){ // first occurance, should be student ID
                    cout << "which is valid.. so it will be added inside the if statement " << endl;
                    cout << "temp value before is: " << temp << endl;

                    if (studentData[i][j + 1] == ','){
                        cout << "next up is: " << studentData[i][j] << endl;
                        temp += studentData[i][j]; 
                        cout << "\"" << temp << "\" is temp and  will get added to student ID" << endl;
                        // add to student somehow
                        classRosterArray[i] = new Student;
                        classRosterArray[i]->setStudentID(temp);
                        temp = "";
                        columnCounter++;
                        exit(-1);
                    }

                    temp += studentData[i][j]; 
                    cout << "temp value after is: " << temp << endl;
                }

                if (columnCounter == 2){

                } 

                if (columnCounter == 3){

                }

                if (columnCounter == 4){
                    
                }

                if (columnCounter == 5){
                    
                }

                if (columnCounter == 6){
                    
                }
            }
        }
    }

    cout << endl;
    assignDegree(SECURITY);

    return 0;
}

