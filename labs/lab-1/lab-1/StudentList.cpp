//
//  StudentList.cpp
//  lab-1
//
//  Created by Viktor Anashkin on 9/6/18.
//  Copyright © 2018 BSU. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "StudentList.h"


void StudentList::printElement(int i) {
    students[i].show();
    cout << "-------------------------" << endl;
}

void StudentList::filter() {
    vector<Student> newStudents;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getCourse() == 1) {
            newStudents.push_back(students[i]);
        }
    }
    students = newStudents;
}

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

void StudentList::printFaculty(string faculty) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getFaculty() == faculty) {
            printElement(i);
        }
    }
}

void StudentList::printByCourse(int course) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getCourse() == course) {
            printElement(i);
        }
    }
};

void StudentList::printByYear(int year) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i].getPersonInfo().getBirthdate().getYear() >= year) {
            printElement(i);
        }
    }
}

void StudentList::printAll() {
    for (int i = 0; i < students.size(); i++) {
        printElement(i);
    }
}

StudentList::StudentList(string path) {
    this->path = path;
    readData();
}
