//
// Created by Administrator on 10/3/2020.
//
#include<string>
using namespace std;

#ifndef MAIN_CPP_MYCLASS_H
#define MAIN_CPP_MYCLASS_H



class myClass {
private:
    string name;
    int size;

public:
    myClass();
    myClass(string name, int size);

    const string getName(){return name;};
    const int getSize(){return size;};



};


#endif //MAIN_CPP_MYCLASS_H
