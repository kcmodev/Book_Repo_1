#ifndef DEGREE_H
#define DEGREE_H

using namespace std;

    enum DegreeProgram {SECURITY, NETWORK, SOFTWARE};

    void assignDegree(DegreeProgram degreeProgram){
        switch(degreeProgram){
            case SECURITY:
                cout << "security" << endl;
                break;
            case NETWORK:
                cout << "networks" << endl;
                break;
            case SOFTWARE:
                cout << "software" << endl;
                break;
            default:
                cout << "invalid" << endl;
                break;
        }
    }

#endif