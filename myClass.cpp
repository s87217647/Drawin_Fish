//
// Created by Administrator on 10/3/2020.
//
using namespace std;

#include <iostream>
#include "myClass.h"

myClass::myClass() {
    name = "No Name";
    size = -1;

    cout <<"default constructor" << endl;
}
myClass::myClass(string name, int size) {
    cout << "the constructor with two input virables" <<endl;
}