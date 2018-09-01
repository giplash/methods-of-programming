#include <iostream>
#include <string>
using namespace std;

const int MAX_LENGTH = 50;

class Person {
    char name[MAX_LENGTH];
    char address[MAX_LENGTH];
    
public:
    void setAddress (char* address) {
        if (strlen(address) > MAX_LENGTH) {
            cout << "error" << endl;
            exit(1);
        }
        strcpy(this->address, address);
    }
    char* getAddress() {
        return this->address;
    }
    void setName (char* name) {
        if (strlen(name) > MAX_LENGTH) {
            cout << "error" << endl;
            exit(1);
        }
        strcpy(this->name, name);
    }
    char* getName() {
        return this->name;
    }
    
    Person(char* address, char* name) {
        setAddress(address);
        setName(name);
    }
    Person() {
        setAddress("Minsk");
        setName("Ivanov Ivan Ivanovich");
    }
    void showInfo() {
        cout << name << endl << address << endl;
    }
};
