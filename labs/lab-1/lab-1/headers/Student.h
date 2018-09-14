//
//  Student.h
//  lab-1
//
//  Created by Viktor Anashkin on 9/2/18.
//  Copyright © 2018 BSU. All rights reserved.
//

#ifndef Student_h
#define Student_h
#include "Person.h"

class Student {
    Person personInfo;
    char faculty[20];
    int course;
public:
    void setPersonInfo(Person);
    void setFaculty(char*);
    void setCourse(int);
    
    Person getPersonInfo();
    char* getFaculty();
    int getCourse();
    
    void print();
    
    Student();
    Student(Person, char*, int);
    ~Student() {};
};


#endif /* Student_h */
