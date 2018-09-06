//
//  main.cpp
//  lab-1
//
//  Created by Viktor Anashkin on 9/2/18.
//  Copyright © 2018 BSU. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "StudentList.h"


using namespace std;

int main(int argc, const char * argv[]) {
    StudentList list = StudentList("data.txt");
    list.printAll();
    list.printFaculty("mmf");
    return 0;
}
