//
//  Student.cpp
//  lab-1
//
//  Created by Viktor Anashkin on 9/6/18.
//  Copyright © 2018 BSU. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include <string>
#include "Student.h"
using namespace std;

void Student::setPersonInfo(Person info) {
    personInfo = info;
}

void Student::setFaculty(string faculty) {
    faculty = faculty;
}

void Student::setCourse(int course) {
    this->course = course;
}

Person Student::getPersonInfo() {
    return personInfo;
}

string Student::getFaculty() {
    return faculty;
}

int Student::getCourse() {
    return course;
}

void Student::show() {
    Person info = getPersonInfo();
    
    string lastName = info.getLastName();
    string firstName = info.getFirstName();
    string patronymic = info.getPatronymic();
    
    string fullName =  lastName + " " + firstName + " " + patronymic;
    cout << fullName << endl;
    cout << info.getBirthdate().getString() << endl;
    cout << info.getAddress() << endl;
    cout << info.getPhone() << endl;
    cout << "faculty: " << faculty <<  ", course: " << course << endl;
}

Student::Student() {
    personInfo = Person();
    faculty = "mmf";
    course = 1;
}

Student::Student(Person info, string faculty, int course) {
    personInfo = info;
    this->faculty = faculty;
    this->course = course;
}
