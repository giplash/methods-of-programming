//
//   StudentList.h
//  lab-1
//
//  Created by Viktor Anashkin on 9/4/18.
//  Copyright © 2018 BSU. All rights reserved.
//

#ifndef _StudentList_h
#define _StudentList_h
#include "Student.h"
#include <vector>

using namespace std;

class StudentList {
    vector<Student> students;
    string path;
    void readData();
    void printElement(int);
public:
    void printAll();
    void printFaculty(string);
    void printByYear(int);
    void printByCourse(int);
    void filter();
    StudentList(string);
};




#endif /* _StudentList_h */
