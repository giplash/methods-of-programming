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
public:
    void print();
    StudentList(string);
};

void StudentList::readData() {
    ifstream stream(path);
    string firstName;
    string lastName;
    string patronymic;
    string address;
    string phone;
    string faculty;
    string empty;
    int day;
    int month;
    int year;
    int course;
    Person person;
    Date date;
    Student student;
    if (stream.is_open()) {
        while (!stream.eof()) {
            stream >> lastName >> firstName >> patronymic;
            stream >> day >> month >> year;
            getline(stream, empty);
            getline(stream, address);
            getline(stream, phone);
            stream >> faculty >> course;
            if (stream.eof()) break;
            date = Date(year, month, day);
            person = Person(firstName, patronymic, lastName, phone, address, date);
            student = Student(person, faculty, course);
            students.push_back(student);
        }
        stream.close();
    } else {
        cout << "file can't be opened" << endl;
        exit(1);
    }
}

void StudentList::print() {
    for (int i = 0; i < students.size(); i++) {
        students[i].show();
        cout << "-------------------------" << endl;
    }
}

StudentList::StudentList(string path) {
    this->path = path;
    readData();
}



#endif /* _StudentList_h */
