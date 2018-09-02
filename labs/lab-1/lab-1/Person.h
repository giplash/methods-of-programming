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

void Person::setFirstName(string name) {
    firstName = name;
}

void Person::setLastName(string name) {
    lastName = name;
}

void Person::setPatronymic(string name) {
    patronymic = name;
}

void Person::setPhone(string phone) {
    this->phone = phone;
}

void Person::setAddress(string address) {
    this->address = address;
}

void Person::setBirthdate(Date date) {
    birthdate = date;
}

string Person::getFirstName() {
    return firstName;
}

string Person::getLastName() {
    return lastName;
}

string Person::getPatronymic() {
    return patronymic;
}

string Person::getPhone() {
    return phone;
}

string Person::getAddress() {
    return address;
}

Date Person::getBirthdate() {
    return birthdate;
}

Person::Person() {
    setFirstName("");
    setPatronymic("");
    setLastName("");
    setPhone("");
    setAddress("");
    setBirthdate(Date());
}

Person::Person(string firstName, string patronymic, string lastName, string phone, string address, Date birthdate) {
    setFirstName(firstName);
    setPatronymic(patronymic);
    setLastName(lastName);
    setPhone(phone);
    setAddress(address);
    setBirthdate(birthdate);
}
#endif /* Person_h */
