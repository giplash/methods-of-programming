//
//  Person.h
//  lab-1
//
//  Created by Viktor Anashkin on 9/2/18.
//  Copyright © 2018 BSU. All rights reserved.
//

#ifndef Person_h
#define Person_h
#include "Date.h"

using namespace std;

class Person {
    char firstName[20];
    char lastName[20];
    char patronymic[20];
    char phone[20];
    char address[20];
    Date birthdate;
    
public:
    void setFirstName(char*);
    void setLastName(char*);
    void setPatronymic(char*);
    void setPhone(char*);
    void setAddress(char*);
    void setBirthdate(Date);
    
    char* getFirstName();
    char* getLastName();
    char* getPatronymic();
    char* getPhone();
    char* getAddress();
    Date getBirthdate();
    
    Person();
    Person(char*, char*, char*, char*, char*, Date);
    ~Person() {};
};

#endif /* Person_h */
