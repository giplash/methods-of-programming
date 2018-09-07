//
//  main.cpp
//  lab-1
//
//  Created by Viktor Anashkin on 9/2/18.
//  Copyright © 2018 BSU. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "StudentList.h"


using namespace std;

int main(int argc, const char * argv[]) {
    StudentList list = StudentList("data.txt");
    int choice;
    while(1) {
        cout << endl;
        cout << "1 - print all" << endl;
        cout << "2 - print by year" << endl;
        cout << "3 - print by faculty" << endl;
        cout << "4 - print by course" << endl;
        cout << "else exit" << endl;
        cout << endl;
        cin >> choice;
        string faculty;
        int course;
        int year;
        switch (choice) {
            case 1:
                list.printAll();
                break;
            case 2:
                cout << "Input year" << endl;
                cin >> year;
                cout << endl;
                list.printByYear(year);
                break;
            case 3:
                cout << "Input faculty" << endl;
                cin >> faculty;
                cout << endl;
                list.printFaculty(faculty);
                break;
            case 4:
                cout << "Input course" << endl;                
                cin >> course;
                cout << endl;
                list.printByCourse(course);
                break;
            default:
                exit(1);
                break;
        }
    }
    return 0;
}
