//
//  main.cpp
//  lab 1
//
//  Created by Viktor Anashkin on 9/1/18.
//  Copyright ¬© 2018 Viktor Anashkin. All rights reserved.
//

#include <iostream>
#include <string>
#include "Person.h"
#include "Abiturient.h"
using namespace std;


int main(int argc, const char * argv[]) {
    Person* test = new Person("London", "Petuh");
    int length = 10;
    int marks[length];
    for (int i = 0; i < length; i++) {
        marks[i] = i + 20;
    }
    Abiturient* student = new Abiturient(test, marks, length);
    student->showInfo();
    return 0;
}
