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
    string faculty;
    int course;
public:
    void setPersonInfo(Person);
    void setFaculty(string);
    void setCourse(int);
    
    Person getPersonInfo();
    string getFaculty();
    int getCourse();
    
    void show();
    
    Student();
    Student(Person, string, int);
    ~Student() {};
};


#endif /* Student_h */
