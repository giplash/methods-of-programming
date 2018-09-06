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
    string firstName;
    string lastName;
    string patronymic;
    string phone;
    string address;
    Date birthdate;
    
public:
    void setFirstName(string);
    void setLastName(string);
    void setPatronymic(string);
    void setPhone(string);
    void setAddress(string);
    void setBirthdate(Date);
    
    string getFirstName();
    string getLastName();
    string getPatronymic();
    string getPhone();
    string getAddress();
    Date getBirthdate();
    
    Person();
    Person(string, string, string, string, string, Date);
    ~Person() {};
};

#endif /* Person_h */
