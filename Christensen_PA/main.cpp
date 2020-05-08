/*
    Author: Steven Christensen
    Date:
    Class: WGU C867 Scripting and Programming Applications
*/

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
    const string STUDENT_DATA[] = {
        "A1, John, Smith, John1989@gma il.com, 20, 30, 35, 40, SECURITY", 
        "A2, Suzan, Erickson, Erickson_1990@gmailcom, 19, 50, 30, 40, NETWORK", 
        "A3, Jack,Napoli, The_lawyer99yahoo.com, 19, 20, 40, 33, SOFTWARE", 
        "A4, Erin, Black, Erin.black@comcast.net, 22, 50, 58, 40, SECURITY", 
        "A5, Steven, Christensen, schr206@wgu.edu, 2, 5, 10, 15, SOFTWARE"
        };

    for (const string& word : STUDENT_DATA)
    {
        cout << word << " ";
        cout << endl;
    }
    cout << endl;

    assignDegree(SECURITY);

    return 0;
}

