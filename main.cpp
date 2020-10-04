#include <iostream>
#include <string>
#include "Set.h"
#include<vector>
#include "myClass.h"
//#include <random>
using namespace std;



int main() {

    int nums[] = {45,45,50,82,87,1,248,34};
    vector<int> intVec;

    for(auto walker :  nums){
        intVec.push_back(walker);
    }

    cout << intVec.at(5) << endl;
    vector<int> *intVecPtr = &intVec;

//    cout << intVecPtr << endl;


    // Testing constructor
    Set<int> testingSet;




//    cout << testingSet << endl;


//
//    cout << "The proof" << endl;

//    Set<int> testingSet( intVec*);


}

