//
//  Abiturient.cpp
//  lab 1
//
//  Created by Viktor Anashkin on 9/1/18.
//  Copyright ¬© 2018 Viktor Anashkin. All rights reserved.
//

#include <iostream>

using namespace std;


class Abiturient {
    Person* info;
    int marks[MAX_LENGTH];
    int length;
public:
    void setMarks(int* marks, int length) {
        this->length = length;
        for (int i = 0; i < length; i++) {
            this->marks[i] = marks[i];
        }
    }
    void setInfo(Person* person) {
        info = person;
    }
    int* getMarks() {
        return marks;
    }
    Person* getInfo() {
        return info;
    }
    void showMarks() {
        for (int i = 0; i < length; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
    void showInfo() {
        info->showInfo();
        showMarks();
    }
    Abiturient(Person* info, int* marks, int length) {
        setInfo(info);
        setMarks(marks, length);
    }
    Abiturient() {
        length = 10;
        for (int i = 0; i < length; i++) {
            marks[i] = i + 1;
        }
        setInfo(new Person());
    }
    ~Abiturient() {};
};
