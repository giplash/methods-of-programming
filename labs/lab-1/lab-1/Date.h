//
//  Date.h
//  lab-1
//
//  Created by Viktor Anashkin on 9/2/18.
//  Copyright © 2018 BSU. All rights reserved.
//

#ifndef Date_h
#define Date_h

using namespace std;

class Date {
    int year;
    int month;
    int day;
public:
    void setDate(int, int, int);
    
    void setYear(int);
    void setMonth(int);
    void setDay(int);
    
    int getYear();
    int getMonth();
    int getDay();
    
    string getString();
    
    Date();
    Date(int, int, int);
    ~Date() {};
};

void Date::setYear(int year) {
    this->year = year;
}

void Date::setMonth(int month) {
    this->month = month;
}

void Date::setDay(int day) {
    this->day = day;
}

void Date::setDate(int year, int month, int day) {
    setYear(year);
    setMonth(month);
    setDay(day);
}

string Date::getString() {
    string year = to_string(this->year);
    string month = to_string(this->month);
    string day = to_string(this->day);
    if (month.length() == 1) {
        month = "0" + month;
    }
    if (day.length() == 1) {
        day = "0" + day;
    }
    return day + "." + month + "." + year;
}

Date::Date() {
    setDate(2000, 4, 14);
}

Date::Date(int year, int month, int day) {
    setDate(year, month, day);
}

#endif /* Date_h */
